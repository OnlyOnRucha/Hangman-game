#include "saveman.h"

#define MAX_ROWS 20
#define MAX_LENGTH 18
#define MAX_TRIES 10

char easy[MAX_ROWS][MAX_LENGTH] = {"css", "php", "mysql", "oracle", "linux", "java", "csharp", "html", "web"};
    
char medium[MAX_ROWS][MAX_LENGTH] = {"python", "database", "network", "computer", "software"};

char hard[MAX_ROWS][MAX_LENGTH] = {"programming", "algorithm", "application", "database", "security", "encryption", "javascript"};


//------------------------------------------functions prototypes---------------------------------------
void hangmanTitle();
void titleTwo();
int loading();
int level();
void printWord(char *, int);
void play_easy();
void play_medium();
void play_hard();

//----------------------------------------------main---------------------------------------------------
int main(){

    int choice;
    int choice_level = 0;
    int num_guesses = 0;
    int num_wrong = 0;
    char letter;

    srand(time(NULL));

    int index_rand_row_easy = rand() % MAX_ROWS;                //geting a random index
    int index_rand_row_medium = rand() % MAX_ROWS;
    int index_rand_row_hard = rand() % MAX_ROWS;

    char * random_word_easy = easy[index_rand_row_easy];        //geting a random word
    char * random_word_medium = medium[index_rand_row_medium];
    char * random_word_hard = hard[index_rand_row_hard];

    int length_easy = strlen(random_word_easy);
    int length_medium = strlen(random_word_medium);;
    int length_hard = strlen(random_word_hard);;


    char * guess_easy = malloc(length_easy * sizeof(char));    // definitin of guess array
        for (int i = 0; i < length_easy; i++) {               // initializes each element of the guess
            guess_easy[i] = '_';                             // array to an underscore character
        }

    char * guess_medium = malloc(length_medium * sizeof(char));
        for (int j = 0; j < length_medium; j++){
            guess_medium[j] = '_';
        }

    char * guess_hard = malloc(length_hard * sizeof(char));
        for (int k = 0; k < length_medium; k++){
            guess_medium[k] = '_';
        }
    
    char *guesses = malloc(MAX_TRIES * sizeof(char));


    hangmanTitle();
    welcome();
   
start:
    beginning(); 
    scanf("%d", &choice); //choice is asked in the beginning() function call.


    if (choice==4)
        return 0;
    else{

        switch (choice)
        {
        case 1: 
                intro();
                sleep(1);
                loading();
                goto start;
                break;

        case 2: 
                loading();
                titleTwo();
                choice_level = level();
                
                    if (choice_level == 1){
                        printWord(guess_easy, length_easy);
                        printf("\nenter");
                        scanf("%c", &letter);
                        printf("\n%c", letter);

                    } else if (choice_level == 2){
                        printWord(guess_medium, length_medium);
                    } else if (choice_level == 3){
                        printWord(guess_hard, length_hard);
                    } else printf("\nInvalid Input.");
                break;

        case 3:
                more();  
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

//11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

int level(){
        int choice;
    chooselevel:
        difficultyLevel();
        scanf("%d", &choice);  //choice is asked in difficultyLevel() function call
        if (choice>3){
            printf("Enter valid input.");
            goto chooselevel;
        }
        else
            return(choice);
}


//22222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222

void printWord(char *guess_arr, int length) {     //IT'S RECEIVING guess AND length AS PARAMETERS TO PRINT _ _ _ _
    
    printf("\nThe word has %d letters\nGuess the word->\n", length);
    
    for (int x = 0; x < length; x++) {
        printf("%c ", guess_arr[x]);             //NOTICE THE SPACE AFTER %c TO PRINT _ _ _ _ _
     }
    printf("\n");
}

//3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333
//4444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444
//5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555
//6666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666