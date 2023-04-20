//read and display student info using structs
#include <stdio.h>

int main(){
    struct student{
        int roll_no;
        char name[100];
        float fees;
        char dob[100];
    };

    struct student student1;
    
    printf("Enter roll number: ");
    scanf("%d", &student1.roll_no);
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter fees: ");
    scanf("%f", &student1.fees);
    printf("Enter dob: ");
    scanf("%s", student1.dob);

    printf("-----\n");
    printf("Roll number: %d\n", student1.roll_no);
    printf("Name: %s\n", student1.name);
    printf("Date of Birth: %s\n", student1.dob);
    printf("Fees: %f\n", student1.fees);
}