#include<stdio.h>
int main() {
    float total,basic=15000,ta,da,hra;
    if(basic>0) {
        if(basic<=5000){
            ta=basic*10/100;
            printf("\nTA = %.2f",ta);
            da=basic*20/100;
            printf("\nDA = %.2f",da);
            hra=basic*25/100;
            printf("\nHRA = %.2f",hra);
        }
        else {
            ta=basic*15/100;
            printf("\nTA = %.2f",ta);
            da=basic*25/100;
            printf("\nDA = %.2f",da);
            hra=basic*30/100;
            printf("\nHRA = %.2f",hra);
        }
        total=basic+ta+da+hra;
        printf("\nTotal salary : %.2f",total);
    }
}
