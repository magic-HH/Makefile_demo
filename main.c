#include <stdio.h>
#include <cmd_get.h>
int main(int argc, char  *argv[])
{   
    struct cmds shell_data = getShelldata(argc, argv);
    printf("file path:%s\n", shell_data.filePath);
    return 0;
}

