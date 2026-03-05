//C Code (Simple CAPTCHA):

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void generateCaptcha(char *captcha, int length) {

    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for(int i=0;i<length;i++)
        captcha[i] = chars[rand()%36];

    captcha[length] = '\0';
}

int main() {

    char captcha[6];
    char userInput[10];

    srand(time(NULL));

    generateCaptcha(captcha,5);

    printf("----- CAPTCHA Verification -----\n");
    printf("Enter the following code: %s\n", captcha);

    printf("Input: ");
    scanf("%s", userInput);

    if(strcmp(captcha,userInput)==0)
        printf("Verification Successful!\n");
    else
        printf("Verification Failed!\n");

    return 0;
}



/*  
CAPTCHA Architecture:
        
         CAPTCHA Generator
                |
                v
        
         CAPTCHA Challenge
        
                |
                v
            User Input
                |
                v     
         Verification Unit
        
                |
           Success / Fail
*/
