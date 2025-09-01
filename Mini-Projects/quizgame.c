#include <stdio.h>

int main (){

    char questions [][100] = {"What is the largest planet in the solar system?\n",
                             "What is the hottest planet?\n",
                            "What planet has the most moons?\n",
                            "Which planet is known as the 'Morning star' or the 'Evening Star'?"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                            "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                           "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                           "A. Mercury\nB. Venus\nC. Mars\nD. Neptune"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("SOLAR SYSTEM QUIZ GAME\n");

    for(int i = 0; i < questionCount; i++){
    printf("\n%s\n", questions [i]);
    printf("%s\n", options[i]);
    printf("\nEnter your choice: ");
    scanf(" %c", &guess);

    if(guess == answerKey[i]){
        printf("CORRECT!\n");
        score++;
    }
    else{
        printf("WRONG!\n");
    }

    }

    printf("\nYour score is %d!", score);

    if(score > 3){
        printf("Nice try! You are getting there!");
    }else{
        printf("Your got more than half the questions right! Goodjob.");
    }


    return 0;
}