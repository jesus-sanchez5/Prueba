#include <stdio.h>


int iii(){
        int x=0;
        while (x<1){
            for(int i=0;i<8;i++){
               printf("I");
            }
            printf("\n");
            x++;
        }
        x=0;
        while (x<4){
            
            printf("   II\n");
            
           
            x++;
        }  
        x=0;
        while (x<1){
            for(int i=0;i<8;i++){
                printf("I");
            }
            printf("\n");
            x++;
        }    
    }
    static void pp(){
        printf("PPPPPPP\n");
        printf("PP    PP\n");
        printf("PPPPPPP\n");
        printf("PP\n");
        printf("PP\n");
        printf("PP");

    }




void main(){

printf("IIIIIIII\tPPPPPPPP\n   II   \tPP    PP\n   II   \tPPPPPPPP\n   II   \tPP\n   II   \tPP\nIIIIIIII\tPP");

}