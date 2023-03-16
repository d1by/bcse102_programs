//accept characters untl $ and count number of lowercase, uppercase, numerals, special characters

#include <stdio.h>

int main(){
    char str[100];
    
    int i=0;
    while(1){
        printf("Enter character: ");
        scanf("%c", &str[i]);
        scanf("%c");
        if(str[i] == '$'){
            str[i] = '\0';
            break;
        }

        i++;
    }

    i=0;
    int up=0, low=0, num=0, sp=0;
    while(str[i] != '\0'){
        if(str[i]>=65 && str[i] <= 90){
            up++;
        }
        else if(str[i]>=97 && str[i] <= 122){
            low++;
        }
        else if(str[i]>=49 && str[i] <= 57){
            num++;
        }
        else{
            sp++;
        }
        
        i++;
    }

    printf("Upper: %d, Lower: %d, Numerals: %d, Special: %d", up, low, num, sp);

    return 0;
}