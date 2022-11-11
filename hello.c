#include<stdio.h>

int main(){

    char string[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c",&string);

    printf("You have entered %s",string);

    return 0;
}