.text

.macro SYSCALL num
.global syscall_\num
syscall_\num:
    li x17, \num
    ecall
    ret
.endm

SYSCALL 63
SYSCALL 64
SYSCALL 93
SYSCALL 101
SYSCALL 124
SYSCALL 129
SYSCALL 169
SYSCALL 172
SYSCALL 220
SYSCALL 221
SYSCALL 260











