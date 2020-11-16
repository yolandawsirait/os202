// REV02 (Revision Date)
// REV01 Tue Oct 27 04:50:41 WIB 2020
// START Mon Oct 26 22:37:14 WIB 2020

#include     "share.h"
char*        progs[]={P01, P02, P03, NULL};

CHPTR init(int mapinit) {
    int      fd    = open(SHAREMEM, MYFLAGS, CHMOD);
    fchmod   (fd, CHMOD);
    ftruncate(fd, SHARESIZE);
    CHPTR    mymap = mmap(NULL, SHARESIZE, MYPROTECTION, MYVISIBILITY, fd, 0);
    close(fd);
    if (mapinit == MAPINIT) {
        for (int ii=0; ii<SHARESIZE; ii++) {
            mymap[ii]=' ';
        }
        mymap[SHARESIZE-1]='\n';
        mymap[SHARESIZE-2]=0;
        for (int ii=0; progs[ii] != NULL; ii++) {
            if (!fork()) execlp(progs[ii], progs[ii], NULL);
        }
    }
    return mymap;
}
