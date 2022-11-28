#include <stdio.h>

int main(){
    // Create an integer variable that will store the number we get from the user
    int UserInput;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save into #UserInput the number the user types
    scanf("%d", &UserInput);
    
    // Output the number the user typed
    printf("Your number is: %d", UserInput);   


// Example 2


    // Create a string
    char firstName[30];

    // Ask the user to input their first name
    printf("Enter your first name: \n");

    // Get and save the text
    scanf("%s", firstName);

    // Output the text
    printf("Hello %s.", firstName); 
    
    return 0;
}