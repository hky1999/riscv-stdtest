#include <stdint.h>
#include "print.h"

// sys_num
#define SYSCALL_READ 63
#define SYSCALL_WRITE 64
#define SYSCALL_EXIT 93
#define SYSCALL_SLEEP 101
#define SYSCALL_YIELD 124
#define SYSCALL_KILL 129
#define SYSCALL_GET_TIME 169
#define SYSCALL_GETPID 172
#define SYSCALL_FORK 220
#define SYSCALL_EXEC 221
#define SYSCALL_WAIT 260

// lib
void putc(char c);
void puts(char *str);
int fork();
void exit();
int getpid();

//test
void test_stdout();
void test_fork();
void test_getpid();

//void test_fork_pingpong();

// syscall
int64_t syscall_63(); // SYSCALL 63 @ const SYSCALL_READ: usize = 63;
int64_t syscall_64(); // SYSCALL 64 @ const SYSCALL_WRITE: usize = 64;
int64_t syscall_93(); // SYSCALL 93 @ const SYSCALL_EXIT: usize = 93;
int64_t syscall_101(); // SYSCALL 101 @ const SYSCALL_SLEEP: usize = 101;
int64_t syscall_124(); // SYSCALL 124 @ const SYSCALL_YIELD: usize = 124;
int64_t syscall_129(); // SYSCALL 129 @ const SYSCALL_KILL: usize = 129;
int64_t syscall_169(); // SYSCALL 169 @ const SYSCALL_GET_TIME: usize = 169;
int64_t syscall_172(); // SYSCALL 172 @ const SYSCALL_GETPID: usize = 172;
int64_t syscall_220(); // SYSCALL 220 @ const SYSCALL_FORK: usize = 220;
int64_t syscall_221(); // SYSCALL 221 @ const SYSCALL_EXEC: usize = 221;
int64_t syscall_260(); // SYSCALL 260 @ const SYSCALL_WAIT: usize = 260;
