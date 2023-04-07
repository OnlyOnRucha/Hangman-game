#include "saveman.h"

#define MAX_ROWS 20
#define MAX_LENGTH 18
#define MAX_TRIES 10

char easy[MAX_ROWS][MAX_LENGTH] = {"css", "php", "mysql", "oracle", "linux", "java", "csharp", "html", 
"web", "laptop", "api", "array", "ascii", "binary", "data", "coding", "oop", "ram", "input", "output"};
    
char medium[MAX_ROWS][MAX_LENGTH] = {"python", "database", "network", "computer", "software", 
"harddisk", "compiler", "boolean", "malware", "chatgpt"};

char hard[MAX_ROWS][MAX_LENGTH] = {"programming", "algorithm", "application", "database", "security", "encryption", "javascript"};


//------------------------------------------functions prototypes---------------------------------------
int level();
void printWord(char *, int);
int getInput();
void found();
void winLose(char *);

//-----------------------------------global variables----------------------------------------------
    int index_rand_row_easy;
    int index_rand_row_medium;
    int index_rand_row_hard;

    int num_guesses;
    int num_wrong;
    int found_letter = 0;
    char letter_input;

    char * random_word_easy;
    char * random_word_medium;
    char * random_word_hard;

    int length_easy;
    int length_medium;
    int length_hard;

    char * guess_easy;
    char * guess_medium;
    char * guess_hard;

    char *guesses;

//----------------------------------------------main---------------------------------------------------
int main(){
   
    int choice;
    int choice_level = 0;
    num_guesses = 0;
    num_wrong = 0;
    

    srand(time(NULL));

    index_rand_row_easy = rand() % MAX_ROWS;                //geting a random index
    index_rand_row_medium = rand() % MAX_ROWS;
    index_rand_row_hard = rand() % MAX_ROWS;

    random_word_easy = easy[index_rand_row_easy];        //geting a random word
    random_word_medium = medium[index_rand_row_medium];
    random_word_hard = hard[index_rand_row_hard];

    length_easy = strlen(random_word_easy);
    length_medium = strlen(random_word_medium);;
    length_hard = strlen(random_word_hard);;


    guess_easy = malloc(length_easy * sizeof(char));    // definitin of guess array
        for (int i = 0; i < length_easy; i++) {               // initializes each element of the guess
            guess_easy[i] = '_';                             // array to an underscore character
        }

    guess_medium = malloc(length_medium * sizeof(char));
        for (int j = 0; j < length_medium; j++){
            guess_medium[j] = '_';
        }

    guess_hard = malloc(length_hard * sizeof(char));
        for (int k = 0; k < length_hard; k++){
            guess_medium[k] = '_';
        }
    
    guesses = malloc(MAX_TRIES * sizeof(char));


    hangmanTitle();
    welcome();
   
start:
    beginning(); 
    scanf("%d", &choice); //choice is asked in the beginning() function call.
    getchar();


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
            //loading();
            titleTwo();
            choice_level = level();
                
            switch (choice_level){
                case 1:
                        found();
                        winLose(random_word_easy);
                        break;

                case 2:
                        printWord(guess_medium, length_medium);
                        break;

                case 3:
                        printWord(guess_hard, length_hard);
                        break;

                default:
                        printf("\nInvalid Input.");
                        break;
            }
                
                break;

        case 3:
                more();  
                goto start;                     
                break;

        default: 
                printf("Invalid Input. Choose 1 / 2 / 3 / 4.");   
                goto start;
                break; 
        }
    }

    free(guess_easy);
    free(guess_medium);
    free(guess_hard);
    free(guesses);
    return 0;
}

//------------------------------------------functions--------------------------------------------------

//11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

int level(){
        int choice;
    chooselevel:
        difficultyLevel();
        scanf("%d", &choice);  //choice is asked in difficultyLevel() function call
        getchar();
        if (choice>3){
            printf("Enter valid input.");
            goto chooselevel;
        }
        else
            return(choice);
}


//22222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222

void printWord(char *guess_arr, int length) {     //IT'S RECEIVING guess AND length AS PARAMETERS TO PRINT _ _ _ _
    
    printf("\nThe word has %d letters\n", length);
    for (int x = 0; x < length; x++) {
        printf("%c ", guess_arr[x]);             //NOTICE THE SPACE AFTER %c TO PRINT _ _ _ _ _
    }
    printf("\n");
    printf("\nGuess the word->\n");
}

//3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333

int getInput()
{
    char letter;
    scanf("%c", &letter);
    getchar();
    letter = tolower(letter);
    return letter;
    
}
//4444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444

void found(){
    
while(num_wrong < MAX_TRIES && strcmp(random_word_easy, guess_easy) != 0){
    printWord(guess_easy, length_easy);
    letter_input = getInput();
    for(int y = 0; y<length_easy; y++){
        if (random_word_easy[y] == letter_input){
            guess_easy[y] = letter_input;
            found_letter = 1;
        }
    }

    if(found_letter == 1){
        printf("\nGood guess!!");
    } else {
        printf("\nThat letter is not in the word.\nTry again!");
        num_wrong++;
        printHangman();
    }
    guesses[num_guesses] = letter_input;
    num_guesses++;
}
    
}
//5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555

void winLose(char *word){
    if (num_wrong == MAX_TRIES) {
    printf("You lose!\n");
    printf("The word was: %s\n", word);
    } else {
    printf("Congratulations! You win!\n");
    }
}
//6666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666