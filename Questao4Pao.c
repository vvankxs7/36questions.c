#include<stdio.h>
    int main(){
        int paes,broas;
        float arre,pou;
        
        printf("Quantidade de paes:");
        scanf("%d",&paes);
        
        printf("Quant de broas:");
        scanf("%d",&broas);
        
        arre = (paes*0.50) + (broas*1.50);
        pou = arre*10;
        
        printf("Arrecadacao: %2.f\n",arre);
        printf("Poupança: %2.f\n",pou);
        
        return 0;
    }
