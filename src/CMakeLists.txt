set(SOURCES
	main.cpp
)

set(HEADERS
    getopt.h
)

add_executable(
	ChangeMe
	${SOURCES}
	${HEADERS}
)

target_include_directories(ChangeMe PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})