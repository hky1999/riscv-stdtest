
S=src
T=target
L=$S/lib
TEST=$S/testcases

TOOLPREFIX := riscv64-unknown-linux-gnu-
CC = $(TOOLPREFIX)gcc
LD = $(TOOLPREFIX)ld
OBJCOPY = $(TOOLPREFIX)objcopy
OBJDUMP = $(TOOLPREFIX)objdump

CFLAGS=-Isrc/include/

SRC = \
	$(wildcard $S/*.c) \
	$(wildcard $L/*.c) \
	$(wildcard $L/*.S) \
	$(wildcard $(TEST)/*.c)
 
OBJS = \
	$(patsubst %.c,%.o,$(filter-out $(wildcard $L/*.S),$(SRC))) \
	$(patsubst %.S,%.o,$(wildcard $L/*.S))
	# $L/syscall.o 
	
TARGET = \
	$T/stdtest

build: $(OBJS)
	@$(LD) -Tlinker.ld -o $(TARGET) $(OBJS)
.PHONY: build

clean: 
	rm -f $L/*.o $(TEST)/*.o $T/stdtest $S/*.o
.PHONY: clean
