.text
.global _start
_start:
    la a0, stack_top
    mv sp, a0
    jal main
    j exit

.data
.align 12
.space 4096
stack_top: