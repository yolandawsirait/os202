// REV02 (Revision Date)
// REV01 Tue Oct 27 04:50:41 WIB 2020
// START Mon Oct 26 22:37:14 WIB 2020

#include "share.h"
#define  MSG "ZCZC"

int main(int argc, char* argv[]) {
    CHPTR mymap=init(MAPPASS);
    strncpy(&mymap[mymap[SHARESIZE-2]],MSG,strlen(MSG));
    mymap[SHARESIZE-2] += strlen(MSG);
    printf("Hello %s %s\n", argv[0], MSG);
}

