#include <stdio.h>
#include <stdlib.h>

// Structure for the Car with color, numberOfDoors, numberOfSits
struct Car {
    int numberOfDoors;
    int numberOfSits;
    char color[30];
};

int main() {
    // Allocating dynamically the memory to two variables of type car
    struct Car* car1 = (struct Car*)malloc(sizeof(struct Car));
    struct Car* car2 = (struct Car*)malloc(sizeof(struct Car));

    // Getting and reading values from the user

    // Car 1
    printf("Enter values for member elements of car 1:");
    scanf("%d", &(car1->numberOfDoors));
    scanf("%d", &(car1->numberOfSits));
    scanf("%s", car1->color);
    // Car 2
    printf("Enter values for member elements of car 2:");
    scanf("%d", &(car2->numberOfDoors));
    scanf("%d", &(car2->numberOfSits));
    scanf("%s", car2->color);
    
    // Print the values for car 1
    printf("Values you gave for car 1:\n");
    printf("Doors: %d\n", car1->numberOfDoors);
    printf("Sits: %d\n", car1->numberOfSits);
    printf("Color: %s\n", car1->color);

    // Print the values for car 2
    printf("Values you gave for car 2:\n");
    printf("Doors: %d\n", car2->numberOfDoors);
    printf("Sits: %d\n", car2->numberOfSits);
    printf("Color: %s\n", car2->color);

    // Free the dynamically allocated memory
    free(car1);
    free(car2);

    return 0;
}
