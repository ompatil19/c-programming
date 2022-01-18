#include <stdio.h>
int main(){
    int units;
    float charge=100.0;
    printf("enter the units consumed \n ");
    scanf("%d", & units);
    if(units<=200){
        charge+=units*0.80;
    }
    else if(units>=200 && units<300){
        charge+=(200*0.80)+(units-200)*0.90;
    }
    else {
        charge+=(200*0.80)+(100*0.90)+(units-300)*1;

    }
    if(charge>400){
        charge+=(charge*0.15);

    }
    printf("the charges you have to pay are %f \n", charge);

    return 0;
}