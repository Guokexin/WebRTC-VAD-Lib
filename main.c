#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "timing.h"
#include "vad_process.h"


int main(int argc, char *argv[]) {
    printf("WebRTC Voice Activity Detector\n");
    printf("静音检测\n");
    if (argc < 2)
        return -1;
    char *in_file = argv[1];
    char* type = argv[2];
    vad(in_file, type);
    printf("按任意键退出程序 \n");
    getchar();
    return 0;
}

