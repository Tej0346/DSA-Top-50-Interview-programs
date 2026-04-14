#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Programming";
    int count[256] = {0};
    for(int i = 0; i < strlen(str); i++){
        count[(int)str[i]]++;
    }
    printf("Duplicate Charcters:");
    for(int i = 0;i < 256; i++){
        if (count[i] > 1){
            printf(" %c", i);
        }
    }
    return 0;
}