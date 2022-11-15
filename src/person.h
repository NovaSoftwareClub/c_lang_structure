#include "device.h"

typedef struct _Person {
    char* name;
    int age;
    int height;
    int weight;
    Device* personalDevice;
    struct _Person* family;
} Person;

void setPersonName(Person* _person, char* _name);

void setPersonAge(Person* _person, int _age);

void setPersonHeight(Person* _person, int _height);

void setPersonWeight(Person* _person, int _weight);

void setPersonPD(Person*, Device* _device);

void setPersonFamily(Person* _person, Person* _family);
