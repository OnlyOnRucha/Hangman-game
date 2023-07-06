#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>


//11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
void hangmanTitle()
{

    printf("\n                                                                                      ");
    printf("\n                _______________________________________________________________       ");
    printf("\n               |  ___________________________________________________________  |      ");
    printf("\n               | |                                                           | |      ");
    printf("\n               | |    0    0   000   0   0   0000   0    0   000   0   0     | |      ");
    printf("\n               | |    0    0  0   0  00  0  0       00  00  0   0  00  0     | |      ");
    printf("\n               | |    000000  00000  0 0 0  0  000  0 00 0  00000  0 0 0     | |      ");
    printf("\n               | |    0    0  0   0  0  00  0    0  0    0  0   0  0  00     | |      ");
    printf("\n               | |    0    0  0   0  0   0   0000   0    0  0   0  0   0     | |      ");
    printf("\n               | |___________________________________________________________| |      ");
    printf("\n               |_______________________________________________________________|      ");
    printf("\n                                                                                      ");
    printf("\n                                                                                      ");
                                                                                      


                                                                                               
    printf("\n                                              ('u')                                  ");   
    printf("\n                                              __|__                                  "); 
    printf("\n                                               /_\\                                  ");
    printf("\n                                               | |                                   ");
    printf("\n                                    Will you please save me<3                        ");
    printf("\n                                                                                     ");
    

}



//22222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222

void titleTwo(){

                                                                                                
    printf("\n                                              ('u')                                  ");   
    printf("\n                                              __|__                                  "); 
    printf("\n                                               /_\\                                  ");
    printf("\n                                               | |                                   ");
    printf("\n                                    Will you please save me<3                        ");
    printf("\n                                                                                     ");
    

}



//33333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333
int loading(){

    printf("\n\n                                          Loading ");
                for (int i = 0; i < 3; i++) {
                    printf(". ");
                sleep(1);

                }   
        return 0; 
}                 


//4444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444
void welcome(){
    printf("\n\n\n                                    Welcome to HANGMAN game!!");
}

//5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555
void beginning(){
    printf("\n\n\n                                        1.INTRODUCTION\n                                            2.PLAY\n                                            3.MORE\n                                            4.QUIT\n");
    printf("\n                                      Enter your choice:");
}  

//6666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666
void intro(){
    printf("\n\n\n                                        1.INTRODUCTION\n");
    printf("\n     Hangman is a word guessing game in which you try to guess the secret word one letter at a time. \nFor each incorrect guess, a part of a hangman is drawn. You have a limited number of chances to guess \nthe word before you lose the game. All of the words included in this game are computer related.\nGood Luck!!");
}

//7777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777
void more(){
    printf("\nDate of creaion: 02/04/2023\nCreator: Rucha Paranjape, Rutuja Vadar, Rucha Bhate");
}

//8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
void difficultyLevel(){
        printf("\n\n\n                                    Choose difficulty level:\n                                            1.Easy\n                                           2.Medium\n                                            3.Hard\n");
        printf("\n                                      Enter your choice:");
}      

//9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999
void printHangman(int numWrong){
   if (numWrong>=1 && numWrong <=3) {

    printf("\n");
    printf("\n");
    printf(" _______________\n");
    printf(" |/            %c\n", numWrong>=1 ? '|' : ' ' );
    printf(" |           %s\n", numWrong>=2 ? "('u')" : " ");
    printf(" |             %c\n", numWrong>=3 ? '|' : ' ');
    printf(" |                      \n"); 
    printf(" |                      \n");
    printf(" |                      \n");
    printf(" |                      \n");
    printf("_|____________________________\n");
    printf("   |_____|          |_____|   ");

   }

   else if(numWrong>=4 && numWrong<=9)  {

    printf("\n");
    printf("\n");
    printf(" _______________\n");
    printf(" |/            %c\n", numWrong>=1 ? '|' : ' ' );
    printf(" |           %s\n", numWrong>=2 ? "('u')" : " ");
    printf(" |           %s|%s\n", numWrong>=4 ? "__" : " ", numWrong>=5 ? "__" : " ");
    printf(" |            %c%c%c\n", numWrong>=6 ? '/' : ' ', numWrong>=8 ? '_' : ' ', numWrong>=7 ? '\\' : ' ');
    printf(" |            %c \n", numWrong>=9 ? '|' : ' ');
    printf(" |                                                           \n");
    printf("_|____________________________\n");
    printf("   |_____|          |_____|   ");
  }
   else if (numWrong == 10){


    printf("\n");
    printf("\n");
    printf(" _______________\n");
    printf(" |/             |     \n");                                                                                        
    printf(" |            (x-x)    \n");   
    printf(" |            __|__     \n"); 
    printf(" |             /_\\     \n");
    printf(" |             | |      \n");
    printf(" |                      \n");
    printf("_|____________________________\n");
    printf("   |_____|          |_____|   ");
   }
}
   
//1111111111100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000


//1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
