# REV02 (Revision Date)
# REV01 Tue Oct 27 04:50:41 WIB 2020
# START Mon Oct 26 22:37:14 WIB 2020

CC      = gcc
SOURCES = $(wildcard p*.c)
EXECS   = $(SOURCES:%.c=%)
SHAREMEM= myW06.txt
CFLAGS  = -std=gnu11 -pthread

all: $(EXECS)

$(EXECS): share.c share.h

clean:
	rm -f $(EXECS) $(SHAREMEM)

run:    all
	@./p00


.PHONY: all clean run

