#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "device.h"
#include "person.h"

void setPersonWithFamily(Person* _person, char* _name, int _age, int _height, int _weight, Device* _PD, Person* _family){
    setPersonName(_person, _name);
    setPersonAge(_person, _age);
    setPersonHeight(_person, _height);
    setPersonWeight(_person, _weight);
    setPersonPD(_person, _PD);
    setPersonFamily(_person, _family);
}

void setPersonWithOutFamily(Person* _person, char* _name, int _age, int _height, int _weight, Device* _PD){
    setPersonName(_person, _name);
    setPersonAge(_person, _age);
    setPersonHeight(_person, _height);
    setPersonWeight(_person, _weight);
    setPersonPD(_person, _PD);
}

void setPersonName(Person* _person, char* _name){
    (*_person).name = (char*)malloc(strlen(_name) * sizeof(char));
    strcpy((*_person).name, _name);
}

void setPersonAge(Person* _person, int _age){
    (*_person).age = _age;
}

void setPersonHeight(Person* _person, int _height){
    (*_person).height = _height;
}

void setPersonWeight(Person* _person, int _weight){
    (*_person).weight = _weight;
}

void setPersonPD(Person* _person, Device* _device){
    (*_person).personalDevice = _device;
}

void setPersonFamily(Person* _person, Person* _family){
    (*_person).family = _family;
}

char* getFamilyNames(Person* _person, int famSize) {
    char* temp = "";

    int i = 0;
    while(i < famSize){
        strcat(temp, _person->family[i].name);
        strcat(temp, "\n");
        i++;
    }

    return temp;
}