#include<stdio.h>

int main(){

    char string[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c",&string);

    printf("You have entered %s",string);

    int a,b;
    scanf("%d %d",&a,&b);
    printf("The sum is %d",a+b);

    int x;
    printf("%d",&x);

    for(int i=1;i<=x;i++){
        for(int j=i+1;j<=x;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}