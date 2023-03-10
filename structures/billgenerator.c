#include <stdio.h>
#include <math.h>
typedef struct stock{
    int i_c;
    char i_n[100];
    float price;
    int quant;

}stock;
int main(){
    int n;
    stock s[]={{001,"Chips",10.20,420},{002,"Noodles",50.60,523},{003,"Oil",75.15,637},{004,"Biscuits",15.68,654}, {005,"Juice",20.00,23},
               {006,"Eggs",05.50,105},{007,"Bread",30.75,42},{8,"Soap",60.00,750},{9,"Tissue",25.90,74},{10,"Toothpaste",50.00,654},
               {11,"Face wash",150.85,420},{12,"Floor Cleaner",200.10,135},{13,"Shampoo",170.52,154},{14,"Detergent",160.15,62}};
    scanf("%d",&n);
    while(n--){
        int icode;
        int quantity;
        float amt=1;
        int quantleft;
        scanf("%d",&icode);
        scanf("%d",&quantity);
        for(int i=0;i<14;i++){
            if(icode==s[i].i_c){
                amt=quantity*s[i].price;
                quantleft=(s[i].quant)-quantity;
                printf("%d;%s;%f;%f;%d",s[i].i_c,s[i].i_n,s[i].price,round(amt));
                printf("\n");
                printf("%d;%d",s[i].i_c,quantleft);
            }
        }
    }
    printf("%d", s[0].i_c);
    return 0;

}