#include <stdio.h>

int main() {
    char userInput[20], name[20];
    int age;
    printf("Let's chat\n");
    gets(userInput);
    printf("%s to you too. I am Dexter. What's your name?\n", userInput);
    scanf("%s", name);
    printf("Oh hi, %s! What's your age?\n", name);
    scanf("%d", &age);
    printf("Wow, %d is quite something\n", age);
    gets(userInput);
    gets(userInput);
    printf("Sorry, not sure what this \"%s\" means. Bbye", userInput);

    return 0;
}