#include<stdio.h>
int main() {
    int age;
    printf("Enter age of person :");
    scanf("%d",&age);
    if(age>0) {
        if(age>=18)
        printf("Eligible");
        else
        printf("Not Eligible");
    }
}