#include "stdtest.h"

int64_t sys(int sysnum){
    switch (sysnum)
    {
    case SYSCALL_READ :
        return syscall_63();
    
    default:
        break;
    }
}

void exit(){
    syscall_93(0);
}

void putc(char c) {
    char buf[1];
    buf[0] = c;
    syscall_64(1, buf, 1);
}

void puts(char *str) {
    int length = 0;
    char *q = str;
    while (*q != 0)
    {
        length++;
        q++;
    }
    syscall_64(1,str,length);
}

int fork(){
    return syscall_220();
}

int getpid(){
    return syscall_172();
}

