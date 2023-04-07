#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>

#define MAX_ROWS 20
#define MAX_LENGTH 18
#define MAX_TRIES 10

    char easy[MAX_ROWS][MAX_LENGTH] = {"css", "php", "mysql", "oracle", "linux", "java", "csharp", "html", "web"};
    
    char medium[MAX_ROWS][MAX_LENGTH] = {"python", "database", "network", "computer", "software"};

    char hard[MAX_ROWS][MAX_LENGTH] = {"programming", "algorithm", "application", "database", "security", "encryption", "javascript"};


//------------------------------------------functions prototypes---------------------------------------
//------------------------------------------functions prototypes---------------------------------------
//------------------------------------------functions prototypes---------------------------------------
//------------------------------------------functions prototypes---------------------------------------
void hangmanTitle();
void titleTwo();
//void wordsArray(int);
int loading();
void level();

//----------------------------------------------main---------------------------------------------------
//----------------------------------------------main---------------------------------------------------
//----------------------------------------------main---------------------------------------------------
//----------------------------------------------main---------------------------------------------------
int main(){

    int choice;

    srand(time(NULL));

    int index_rand_row_easy = rand() % MAX_ROWS;        //geting a random index
    int index_rand_row_medium = rand() % MAX_ROWS;
    int index_rand_row_hard = rand() % MAX_ROWS;

    char * random_word_easy = easy[index_rand_row_easy];     //geting a random word
    char * random_word_medium = medium[index_rand_row_medium];
    char * random_word_hard = hard[index_rand_row_hard];

    int length_easy = strlen(random_word_easy);
    int length_medium = strlen(random_word_medium);;
    int length_hard = strlen(random_word_hard);;


    char * guess_easy = malloc(length_easy * sizeof(char));
    char * guess_medium = malloc(length_medium * sizeof(char));
    char * guess_hard = malloc(length_hard * sizeof(char));

    hangmanTitle();

    printf("\n\n\n                                    Welcome to HANGMAN game!!");
   
start:
    printf("\n\n\n                                        1.INTRODUCTION\n                                            2.PLAY\n                                            3.MORE\n                                            4.QUIT\n");
    printf("\n                                      Enter your choice:");
    scanf("%d", &choice);


    if (choice==4)
        return 0;
    else{

        switch (choice)
        {
        case 1: 
                printf("\n\n\n                                        1.INTRODUCTION\n");
                printf("\n     Hangman is a word guessing game in which you try to guess the secret word one letter at a time. \nFor each incorrect guess, a part of a hangman is drawn. You have a limited number of chances to guess \nthe word before you lose the game. All of the words included in this game are computer related.\nGood Luck!!");
                sleep(1);
                loading();
                goto start;
                break;

        case 2: 
                loading();
                titleTwo();
                level();
                break;

        case 3:
                printf("Date of creaion: 02/04/2023\nCreator: Rucha Paranjape");  
                goto start;                     
                break;

        default: printf("Invalid Input. Choose 1 / 2 / 3 / 4.");   
                 goto start;
                 break; 
        }
    }

  

    return 0;
}


//------------------------------------------functions--------------------------------------------------
//------------------------------------------functions--------------------------------------------------
//------------------------------------------functions--------------------------------------------------
//------------------------------------------functions--------------------------------------------------

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

//void wordsArray(int c){
/*
    switch(c)
    {
        case 1: 
                printf("Random word: %s\n", easy[index_rand_row_easy]);
                break;

        case 2:     
                printf("Random word: %s\n", medium[index_rand_row_medium]);
                break;

        case 3:     
                printf("Random word: %s\n", hard[index_rand_row_hard]);
                break;
    }
*/   
//}

//33333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333

void level(){
        int choice;
        chooselevel:
        printf("\n\n\n                                    Choose difficulty level:\n                                            1.Easy\n                                           2.Medium\n                                            3.Hard\n");
        printf("\n                                      Enter your choice:");
        scanf("%d", &choice);
        if (choice>3){
            printf("Enter valid input.");
            goto chooselevel;
        }
        //else
        //wordArrays(choice);
}

//4444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444

void titleTwo(){

                                                                                                
    printf("\n                                              ('u')                                  ");   
    printf("\n                                              __|__                                  "); 
    printf("\n                                               /_\\                                  ");
    printf("\n                                               | |                                   ");
    printf("\n                                    Will you please save me<3                        ");
    printf("\n                                                                                     ");
    

}

//5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555

int loading(){

    printf("\n\n                                          Loading ");
                for (int i = 0; i < 3; i++) {
                    printf(". ");
                sleep(1);

                }   
        return 0; 
}                            