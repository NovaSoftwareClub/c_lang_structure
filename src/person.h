typedef struct _Person {
    char* name;
    int age;
    int height;
    int weight;
    Device* personalDevice;
    struct _Person* family;
} Person;

void setPersonWithFamily(Person* _person, char* _name, int _age, int _height, int _weight, Device* _PD, Person* _family);

void setPersonWithOutFamily(Person* _person, char* _name, int _age, int _height, int _weight, Device* _PD);

void setPersonName(Person* _person, char* _name);

void setPersonAge(Person* _person, int _age);

void setPersonHeight(Person* _person, int _height);

void setPersonWeight(Person* _person, int _weight);

void setPersonPD(Person* _person, Device* _device);

void setPersonFamily(Person* _person, Person* _family);

char* getFamilyNames(Person* _person, int famSize);
