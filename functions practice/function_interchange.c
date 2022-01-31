#include <stdio.h>
void interchange(int x,int y);

void interchange(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("%d %d", x,y);

}

int main(){
    int x,y;
    scanf("%d%d", &x,&y);
    interchange(x,y);

    return 0;
}