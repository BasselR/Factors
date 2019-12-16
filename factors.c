#include <stdio.h>

int main(){
    unsigned int _a, _b;
    unsigned long int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &_a, &_b);

    a = _a;
    b = _b;

    unsigned long int sumOfCF = 0;
    unsigned long int GCF = 0;
    unsigned long int LCM = 0;

    printf("Common factors of (%lu, %lu): ", a, b);
    for(unsigned long int i = 1; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            printf("%lu ", i);
            sumOfCF += i;
            GCF = i;
        }
    }
    
    printf("\n");
    LCM = (a * b / GCF);
    printf("GCF: %lu\n", GCF);
    printf("LCM: %lu\n", LCM);
    printf("sum: %lu\n", (sumOfCF + GCF + LCM));

    return 0;
}