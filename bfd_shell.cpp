#include "config.h"

#include <readline/readline.h>
#include <readline/history.h>

#include <bfd.h>

#include <iostream>

#define END_LEN 0

int main(int argc, const char ** argv) {

    bfd_init();
    //bfd *maind = bfd_openr (argv[1], "elf64-x86-64");
    bfd *maind = bfd_openr (argv[1], "default");

    bfd_check_format(maind, bfd_object);

    std::cout<<bfd_count_sections (maind)<<" ";

    
    while(true) {
        char * line = readline("BFD>:");
        std::cout<<line<<"\n";
        if (strlen(line) == END_LEN) {
            break;
        }
    }
    return 0;
}
