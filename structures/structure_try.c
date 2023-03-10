#include <stdio.h>
typedef struct name{
    char name[100];
} vec;
#include <stdio.h>

int main(){
    vec om;
    scanf("%s",&(om.name));
    printf("%s", om.name);
    return 0;
}