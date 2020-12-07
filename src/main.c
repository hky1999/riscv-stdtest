#include "stdtest.h"

int main()
{
    // int a = 1;
    // writef("begin test int :[%d]\n",a);
    // char c = 'c';
    // writef("begin test char : [%c]\n",c);
    // char str[10] = {'1','2','3','4','\0'};
    // writef("begin test str : [%s]\n",str);
    int pid = getpid();
    writef("================\n");
    writef("|--BEGIN TEST--|\n");
    writef("================\n");
    writef("---[main]stdtest pid[%d]\n",pid);

    test_stdout();
    test_fork();
    test_getpid();
    
    writef("---[main]stdtest exit pid[%d]\n",pid);
    writef("================\n");
    writef("|---END TEST---|\n");
    writef("================\n");
    return 0;
}