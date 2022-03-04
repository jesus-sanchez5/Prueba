#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define CYAN_T     "\x1b[36m"

int main(int argc, char *argv[]){   
    if(argc==2){
    system("ipconfig");     
    system("PAUSE");  }
    else{
       
       printf (CYAN_T "IIIIIIII  PPPPPPPP    SSSSSSS   CCCCCCC\tAAAAAAAA  NN    NN\n   II     PP    PP   SSS       CCC\tAA    AA  NNN   NN\n   II     PPPPPPPP   SSSS      CCC\tAA    AA  NN N  NN\n   II     PP\t        SSSS   CCC\tAAAAAAAA  NN  N NN\n   II     PP\t         SSS   CCC\tAA    AA  NN   NNN\nIIIIIIII  PP\t    SSSSSSS     CCCCCCC\tAA    AA  NN    NN\n\n\n");

        system("PAUSE");
        }

    return EXIT_SUCCESS;
    }
