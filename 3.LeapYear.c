#include<stdio.h>
int main() {
    int Year=2004;
    if(Year>0) {
        if(Year%4==0 && Year%400==0)
        printf("Leap Year");
        else 
        printf("Not Leap Year");
    }
}
