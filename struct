#include <stdio.h>
#include <stdlib.h>



struct Student {
    char name[50];
    char surname[50];
    int number;
    char street[50];
    char city[50];
    char state[50];
    int zip_code;
};

int main() {
    struct Student students[5] = {
        {"John", "Doe", 12345, "Main St", "New York", "NY", 10001},
        {"Jane", "Smith", 23456, "Oak St", "Los Angeles", "CA", 90001},
        {"Bob", "Johnson", 34567, "Maple St", "Chicago", "IL", 60601},
        {"Mary", "Williams", 45678, "Elm St", "Houston", "TX", 77001},
        {"Tom", "Brown", 56789, "Cedar St", "Miami", "FL", 33101}
    };

    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s %s\n", students[i].name, students[i].surname);
        printf("Number: %d\n", students[i].number);
        printf("Address: %s\n", students[i].street);
        printf("City: %s\n", students[i].city);
        printf("State: %s\n", students[i].state);
        printf("Zip code: %d\n", students[i].zip_code);
        printf("\n");
    }

    return 0;
}

