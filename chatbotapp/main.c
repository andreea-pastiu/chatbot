#include <stdio.h>

int main() {
    char userInput[20], name[20];
    int age, nr;
    printf("Let's chat\n");
    gets(userInput);
    printf("%s to you too. I am Dexter. What's your name?\n", userInput);
    scanf("%s", name);
    printf("Oh hi, %s! What's your age?\n", name);
    scanf("%d", &age);
    printf("Wow, %d is quite something\n", age);
    gets(userInput);
    gets(userInput);
    printf("Sorry, not sure what this \"%s\" means\n", userInput);
    printf("So, %s, what is your height? (cm)\n", name);
    scanf("%d", &nr);
    if(nr >= 160 && nr < 170)
        printf("That means you are pretty tall :) for a %d year old\n", age);
    else
        if(nr >= 170)
            printf("Wow, you could be a model! That's nice for a %d year old :)\n", age);
        else
            printf("Wow, I bet you are cutie, pretty short for a %d year old\n", age);
    gets(userInput);
    gets(userInput);
    printf("Sorry, not sure what \"%s\" means\n", userInput);
    printf("What is your favorite sport, %s?\n", name);
    gets(userInput);
    printf("Wow, I love %s too! Maybe we could play it sometime\n", userInput);
    gets(userInput);
    printf("Sorry, I gotta go now, I have some CP homework. Bye :)\n");


    return 0;
}