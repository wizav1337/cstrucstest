// person.h

#ifndef PERSON_H
#define PERSON_H

struct Person {
    char name[50];
    int age;
    float height;

    // Add function pointers to the struct
    void (*print_info)(struct Person *);
};

// Function prototypes
void print_info(struct Person *person);



struct Cars {

    char name[50];
    int age;
    char color[50];

    //Add function pointes to the struct
    void (*print_cars_info)(struct Cars *);
};

// Function prototypes
void print_cars_info(struct Cars *cars);

#endif // PERSON_H
