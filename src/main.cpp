#include "getopt.h"
#include <iostream>

void printHelp(const std::string& progName) {
    std::cout
        << "Usage:\n"
        << "    " << progName << " OPTIONS\n"
        << "Options:\n"
        << "    -a        do something!\n"
        << "    -b        do something else!"
        << std::endl;
}

int main(int argc, char** argv) {
    int c;
    while((c = getopt(argc, argv, "ha:")) != -1) {
        switch(c) {
            case '?':
            case 'a':
            {
                std::string val = optarg;
                break;
            }
            case 'h':
            default:
                printHelp(argv[0]);
                return 0;

            case -1:
                break;
        }
    }
    
    return 0;
}
