// REV02 (Revision Date)
// REV01 Tue Oct 27 04:50:41 WIB 2020
// START Mon Oct 26 22:37:14 WIB 2020

// Modify, so that the OUTPUT of './p00' is:
// Hello ./p01 ZCZC
// Hello ./p02  W06
// Hello ./p03  cbkadal
// Hello ./p00  4656-2DA0

// And file 'myW06.txt' is:
// "ZCZC W06 cbkadal 4656-2DA0                                                     "
// PS: modify so that 'cbkadal' is replaced with your GitHub Account
// PPS: do not forget to put file 'myW06.txt' into TXT/ folder.

#include "share.h"
#define  MSG " 0634-291A" 

int main(int argc, char* argv[]) {
    CHPTR mymap=init(MAPINIT);
    sleep(3);
    strncpy(&mymap[mymap[SHARESIZE-2]],MSG,strlen(MSG));
    mymap[SHARESIZE-2] = ' ';
    printf("Hello %s %s\n", argv[0], MSG);
}

