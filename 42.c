//accept characters untl $ and count number of lowercase, uppercase, numerals, special characters
//count number words and lines

#include <stdio.h>

int main(){
    char str[100];
    
    int i=0;
    printf("Enter string: ");
    //scanf("%[^\n]s", &str);
    //scanf("%c");
    scanf("%c", &str[i]);
    while(str[i]!='$'){
        i++;
        scanf("%c", &str[i]);
    }
    
    for(int i=0; i<(sizeof(str)/sizeof(str[0])); i++){
        if(str[i] == '$'){
            str[i] = '\0';
            break;
        }
    }

    i=0;
    int up=0, low=0, num=0, sp=0, word=0, line=1;
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
        else if(str[i] == ' ' || str[i] == '\t'){
            word++;
        }
        else if(str[i] == '\n'){
            word++;
            line++;
        }
        else{
            sp++;
        }
        
        i++;
    }

    printf("Upper: %d, Lower: %d, Numerals: %d, Special: %d, Words: %d, Lines: %d", up, low, num, sp, word, line);

    return 0;
}