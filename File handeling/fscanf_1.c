#include <stdio.h>

int main(){
     FILE *ptr;
     ptr=fopen("om.txt","r");
     char a[100],b[100];
     int c;
     fscanf(ptr,"%s%s%d",&a,&b,&c);
     printf("%s\n",a);
     printf("%s\n",b);
     printf("%d",c);
     fclose(ptr);
    return 0;
}