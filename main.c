// main.c

#include <stdio.h>
#include <string.h>
#include "person.h"

int main() {
    struct Person jovan;

    strcpy(jovan.name, "Jovan");
    jovan.age = 23;
    jovan.height = 124;
    jovan.print_info = print_info;

    jovan.print_info(&jovan);

    struct Cars ferrari;
    
    strcpy(ferrari.name, "F190");
    ferrari.age = 23;
    strcpy(ferrari.color, "Red");

    ferrari.print_cars_info = print_cars_info;
    ferrari.print_cars_info(&ferrari);

    return 0;
}
