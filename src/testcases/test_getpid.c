#include "stdtest.h"

void test_getpid()
{
    puts("\n---[test_getpid] BEGIN---\n");
    int fork_ret = fork();
    if (fork_ret == -1)
    {
        puts("fork error!\n");
    }
    if (fork_ret == 0)
    {
        int child_pid = getpid();
        puts("[fork]");
        writef("this is child, pid [%d]\n",child_pid);
        exit();
    }
    else
    {
        /* parent */
        int parent_pid = getpid();
        puts("[fork]");
        writef("this is parent, pid [%d]\n",parent_pid);
    } /* TEST_RETURN */
    puts("\n---[test_getpid] END---\n");
}

