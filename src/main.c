#include <stdio.h>
#include "device.h"

int main(){

    Device note;
    setDevice(&note, "galaxy Note10", 2019, 100);

    printf("note10 : %s\n", note.name);

    return 0;
}