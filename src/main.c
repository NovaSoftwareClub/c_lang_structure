#include <stdio.h>
#include <stdlib.h>
#include "device.h"
#include "person.h"

int main(){

    Device note, iPad, iPhone;
    
    setDevice(&note, "galaxy Note10", 2019, 100);
    setDevice(&iPad, "apple iPad Pro 12.9", 2020, 130);
    setDevice(&iPhone, "apple iPhone 14pro", 2022, 175);

    Device sangsuDevice[3] = {note, iPad, iPhone};

    Person sangsu, sangsang, susu;

    setPersonWithOutFamily(&sangsu, "KIM SANG SU", 17, 174, 130, sangsuDevice);
    setPersonWithOutFamily(&susu, "KIM SU SU", 15, 165, 90, sangsuDevice);

    Person* sangsangFam = malloc(sizeof(Person)*2);
    sangsangFam[0] = sangsu;
    sangsangFam[1] = susu;
    
    setPersonWithFamily(&sangsang, "KIM SANG SANG", 16, 185, 150, &iPad, sangsangFam);
    
    printf("%s's device : %s\n", sangsu.name, sangsu.personalDevice[0].name);
    printf("%s's family : %s\n", sangsang.name, sangsang.family[1].name);

    // char* sangFam = getFamilyNames(&sangsang, 3);
    // printf("sangFam : %s", sangFam);
    
    return 0;
}