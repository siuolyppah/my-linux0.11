LDFLAGS	=-s -x -m elf_i386 -nostdlib -O1
CFLAGS=-c -O1 -finline-functions \
  	-fno-omit-frame-pointer -nostartfiles -fno-pie -fno-stack-protector  \
	-m32 -march=i386 -mtune=i386 -fno-asynchronous-unwind-tables  \
	-fno-builtin -ffreestanding -nostdlib -nostdinc -nodefaultlibs -nostartfiles

INCLUDE_DIRS=-I../../include/

blk_drv.o: ll_rw_blk.o 
	ld $(LDFLAGS) -r -o $@ $^

ll_rw_blk.o: ll_rw_blk.c
	$(CC) $(CFLAGS) ${INCLUDE_DIRS} -o $@ $<


.PHONY: clean
clean:
	rm -f *.o
