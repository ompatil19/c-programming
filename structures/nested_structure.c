#include <stdio.h>
typedef struct employee{
    int empid;
    char name[10];
    float sal;
    float netsal;

} emp;
typedef struct banker{
    char bname[100];
    int bcode;
    emp e;
} bank;
int main(){
    float hra,da,pf;
    bank b={0};
    printf("enter the basic salary");
    scanf("%f",&(b.e.sal));
    hra=(b.e.sal)*0.1;
    da=(b.e.sal)*0.05;
    pf=(b.e.sal)*0.12;
    b.e.netsal=(b.e.sal)+hra+da-pf;
    printf("%f\n", hra);
    printf("%f\n", da);
    printf("%f\n", pf);
    printf("%f",(b.e.netsal));
    return 0;
}