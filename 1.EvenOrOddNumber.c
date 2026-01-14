#include<stdio.h>
int main() {
    int num;
    printf("Enter a number to check weather its Even or Odd :");
    scanf("%d",&num);
    if(num>0) {
        if(num%2==0)
        printf("Even");
        else
        printf("Odd");
    }
}