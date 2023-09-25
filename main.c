#include <stdio.h>

int main(){
    int c = 0;
    int f = 0;
    int i = 0;

    FILE *stream = fopen("input.txt", "r");
    f = fgetc(stream) - '0';
    int a[f];
    while ((c = fgetc(stream)) != EOF){
        if(c != 10){
            a[i] = c;
            i = i + 1;
        }
    }

    if(f == (a[f-1] - '0')){
        i = 0;
        while(i<f){
            printf("%d", (a[i] - '0'));
            printf("%s","\n");
            i = i + 1;
        }
        printf("good job");
        return 0;
    }

    //currently broken for digits over 9, since only single characters are supported
    c = 1;
    i = 0;
    int j = 0;
    int b[30];
    while(i<f){
        if(c != a[i]){
            b[j] = c;
            c = c + 1;
            j = j + 1;
        }
        c = c + 1;
        i = i + 1;
    }

    return 0;
}