# include <stdio.h>
int sum(int d, int n);
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d",sum(a,b));
    return 0;
}

int sum(int d, int n){
    int s=0,s1;
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    while (d--){
        s1=sum(d,s);
    }
    return s1;

}