#include<stdio.h>
#include<string.h>
int main() {
    char ch[100]={"First Bit Solutions"};
    char a;
    printf("\nEnter a char to check :");
    scanf("%c",&a);
    if(ch[0]==a)
    printf("UpperCase");
    else
    printf("LowerCase");
}