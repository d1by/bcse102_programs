//nested structs
#include <stdio.h>

int main(){
    struct date{
        int dd;
        int mm;
        int yyyy;
    };

    struct person{
        char name[100];
        int age;
        struct date DOB;
    };

    struct person person1;
    printf("Enter name: ");
    scanf("%s", person1.name);
    printf("Enter age: ");
    scanf("%d", &person1.age);
    printf("Enter DOB date (dd): ");
    scanf("%d", &person1.DOB.dd);
    printf("Enter DOB month (mm): ");
    scanf("%d", &person1.DOB.mm);
    printf("Enter DOB year (yyyy): ");
    scanf("%d", &person1.DOB.yyyy);

    printf("\nName: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("DOB: %d/%d/%d", person1.DOB.dd, person1.DOB.mm, person1.DOB.yyyy); 
}