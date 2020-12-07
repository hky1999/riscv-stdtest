#include "stdtest.h"

void test_fork()
{
    puts("\n---[test_fork] BEGIN---\n");
    int fork_ret = fork();
    if (fork_ret == -1)
    {
        puts("fork error!\n");
    }
    if (fork_ret == 0)
    {
        puts("[fork]");
        puts("this is child\n");
        exit();
    }
    else
    {
        /* parent */
        puts("[fork]");
        puts("this is parent\n");
    } /* TEST_RETURN */
    puts("\n---[test_fork] END\n---");
}

