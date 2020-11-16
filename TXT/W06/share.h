// REV01 (Revision Date)
// START Mon Oct 26 22:37:14 WIB 2020

#define P00 "./p00"
#define P01 "./p01"
#define P02 "./p02"
#define P03 "./p03"

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define CHMOD          0666
#define MYFLAGS        O_CREAT|O_RDWR
#define MYPROTECTION   PROT_READ|PROT_WRITE
#define MYVISIBILITY   MAP_SHARED
#define SHAREMEM       "myW06.txt"
#define SHARESIZE      80
#define MAPINIT        1
#define MAPPASS        0
typedef unsigned char* CHPTR;

CHPTR   init (int mapinit);

