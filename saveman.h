#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>


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
    printf("Date of creaion: 02/04/2023\nCreator: Rucha Paranjape");
}

//8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
void difficultyLevel(){
        printf("\n\n\n                                    Choose difficulty level:\n                                            1.Easy\n                                           2.Medium\n                                            3.Hard\n");
        printf("\n                                      Enter your choice:");
}      