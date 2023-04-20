//nested structs
#include <stdio.h>
#include <string.h>

int main(){
    struct student{
        char name[100];
        int age;
        int roll_num;
    };

    int num_of_students = 0;

    struct student stud[50];
    for(int i=0; i<50; i++){
        printf("Enter name: ");
        scanf("%s", stud[i].name);
        printf("Enter age: ");
        scanf("%d", &stud[i].age);
        printf("Enter roll_num: ");
        scanf("%d", &stud[i].roll_num);

        num_of_students++;
        printf("\nExit? (Y/N)\n");
        char ch;
        fflush(stdin);
        scanf("%c", &ch);
        if(ch == 'y' || ch == 'Y')
            break;
    }

    for(int i=0; i<num_of_students; i++){
        printf("\n\n|Name: %s", stud[i].name);
        printf("\n|Age: %d", stud[i].age);
        printf("\n|Roll number: %d", stud[i].roll_num);
    }

    int edited = 0;

    while(1){
        printf("\n\nEdit? (Y/N)\n");
        char ch;
        fflush(stdin);
        scanf("%c", &ch);
        if(ch == 'n' || ch == 'N')
            break;
        
        edited=1;
        printf("Enter record number to edit: ");
        int edit_rec;
        scanf("%d", &edit_rec);
        edit_rec--;

        printf("Enter name: ");
        scanf("%s", stud[edit_rec].name);
        printf("Enter age: ");
        scanf("%d", &stud[edit_rec].age);
        printf("Enter roll_num: ");
        scanf("%d", &stud[edit_rec].roll_num);
        
    }

    if(edited==1){
        for(int i=0; i<num_of_students; i++){
            printf("\n\n|Name: %s", stud[i].name);
            printf("\n|Age: %d", stud[i].age);
            printf("\n|Roll number: %d", stud[i].roll_num);
        }
    }
}