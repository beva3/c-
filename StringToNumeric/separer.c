#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char t[3][10];//allocation nombre de separator +1
    int line = 0;
    int j;

    char* str = "je suis l'homme";
    int i = 0;
    printf("%s\n", str);

    while(str[i]){
        if(str[i] !=' '){
            t[line][j] = str[i];
            j++; 
            //printf("str[%d] ==> %c\n",i,str[i]);
        }else{
            j = 0;
            line ++;
        }
        i++;
    }

    printf("%s\n",t[0]);
    printf("%s\n",t[1]);
    printf("%s\n",t[2]);

    return 0;
}
