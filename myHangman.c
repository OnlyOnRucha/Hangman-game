#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_ROWS 20
#define MAX_LENGTH 18

//------------------------------------------functions prototypes---------------------------------------
//------------------------------------------functions prototypes---------------------------------------
//------------------------------------------functions prototypes---------------------------------------
//------------------------------------------functions prototypes---------------------------------------
void hangmanTitle();
void titleTwo();
void wordArrays();
//void loading();
void play();

//----------------------------------------------main---------------------------------------------------
//----------------------------------------------main---------------------------------------------------
//----------------------------------------------main---------------------------------------------------
//----------------------------------------------main---------------------------------------------------
int main(){

    int choice;

    hangmanTitle();

    printf("\n\n\n                                    Welcome to HANGMAN game!!");
    start:
    printf("\n\n\n                                          1.INTRODUCTION\n                                            2.PLAY\n                                            3.MORE\n                                            4.QUIT\n");
    printf("\n                                      Enter your choice:");
    scanf("%d", &choice);


    if (choice==4)
        return 0;
    else{

        switch (choice)
        {
        case 1: 
                printf("\n\n\n                                          1.INTRODUCTION\n");
                printf("\n     Hangman is a word guessing game in which you try to guess the secret word one letter at a time. \nFor each incorrect guess, a part of a hangman is drawn. You have a limited number of chances to guess \nthe word before you lose the game. All of the words included in this game are computer related.\nGood Luck!!");
                goto start;
                break;

        case 2: 
                titleTwo();
                play();
                break;

        case 3:
                printf("Date of creaion: 02/04/2023\nCreator: Rucha Paranjape");  
                goto start;                     
                break;

        default: printf("Invalid Input. Choose 1 / 2 / 3 / 4.");   
                 break; 
        }
    }


    return 0;
}


//------------------------------------------functions--------------------------------------------------
//------------------------------------------functions--------------------------------------------------
//------------------------------------------functions--------------------------------------------------
//------------------------------------------functions--------------------------------------------------

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

void wordArrays(){

    char easy[MAX_ROWS][MAX_LENGTH] = {"css", "php", "mysql", "oracle", "linux", "java", "csharp", "html", "web"};
    
    char medium[MAX_ROWS][MAX_LENGTH] = {"python", "database", "network", "computer", "software"};

    char hard[MAX_ROWS][MAX_LENGTH] = {"programming", "algorithm", "application", "database", "security", "encryption", "javascript"};

    srand(time(NULL));
    int rand_row = rand() % MAX_ROWS;

    printf("Random word: %s\n", easy[rand_row]);

}

void play(){
        int choice;
        printf("\n\n\n                                    Choose difficulty level:\n                                    1.Easy\n                                    2.Medium\n                                    3.Hard\n");
        scanf("%d", &choice);
        
}

void titleTwo(){

                                                                                                
    printf("\n                                              ('u')                                  ");   
    printf("\n                                              __|__                                  "); 
    printf("\n                                               /_\\                                  ");
    printf("\n                                               | |                                   ");
    printf("\n                                    Will you please save me<3                        ");
    printf("\n                                                                                     ");
    

}
/*
void loading(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
      delay(500);
      printf("..");

      delay(500);
      printf("..");

      delay(500);
      printf("..");

      delay(500);
      printf("...");

     //goto start;
}
*/