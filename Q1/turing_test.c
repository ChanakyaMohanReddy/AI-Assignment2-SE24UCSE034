//C Code (Simple Turing Test Simulation):

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* botResponses[] = {
    "That is interesting.",
    "I think it depends.",
    "Can you explain more?",
    "I am not sure about that.",
    "What do you think?"
};

int main() {

    char judgeInput[200];
    char humanReply[200];
    int type;

    srand(time(NULL));

    // Randomly choose bot or human
    type = rand() % 2;   // 0 = bot, 1 = human

    printf("---- Turing Test Simulation ----\n");
    printf("Judge: Ask a question -> ");
    fgets(judgeInput, sizeof(judgeInput), stdin);

    if(type == 0) {
        printf("\nParticipant: %s\n", botResponses[rand()%5]);
    }
    else {
        printf("\nHuman participant: Enter reply -> ");
        fgets(humanReply, sizeof(humanReply), stdin);
        printf("Participant: %s\n", humanReply);
    }

    int guess;

    printf("\nJudge: Guess (0 = Bot, 1 = Human): ");
    scanf("%d", &guess);

    if(guess == type)
        printf("Correct Guess!\n");
    else
        printf("Wrong Guess!\n");

    return 0;
}


/*Turing test Architecture:
           
              Judge   
                 |
                 v
          Session Manager
      
          /             \
         v               v
     Bot AI            Human UI 
*/
