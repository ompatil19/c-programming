#include <stdio.h>

int main(){
     FILE *ptr;
     ptr=fopen("double.txt","r");
     int c;
     fscanf(ptr,"%d",&c);
     fclose(ptr);
     ptr=fopen("double.txt","w");
     fprintf(ptr,"%d",(c*2));
     fclose(ptr);
    return 0;
}