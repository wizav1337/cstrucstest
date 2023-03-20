// person.c

#include <stdio.h>
#include "person.h"

// Define a function that prints the info of a person
void print_info(struct Person *person) {
    printf("Name: %s\n", person->name);
    printf("Age: %d\n", person->age);
    printf("Height: %.1f\n", person->height);
}

void print_cars_info(struct Cars *cars)
{
    printf("Name: %s\n", cars->name);
    printf("Color: %s\n", cars->color);
}
