#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cmd_get.h>

struct cmds getShelldata(int argc, char  **argv){
    struct cmds shell_data;
    for(int i=0; i< argc; i++){
        if(strcmp(argv[i], "-file")){
            char * str = (char *)malloc(sizeof(argv[i]+1)/sizeof(char));
            strcpy(str, argv[i]);
            shell_data.filePath = str;
            i = i+1;
        }else{
            continue;
        }
    }
    return shell_data;
}