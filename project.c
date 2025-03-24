#include <stdio.h>
#include <string.h>

// Function to check if a substring exists in the dictionary
int isInDictionary(char substr[], char dictionary[][10], int dictSize) {
    for (int i = 0; i < dictSize; i++) {
        if (strcmp(substr, dictionary[i]) == 0) {
            return 1; // Substring is found in the dictionary
        }
    }
    return 0; // Substring is not found
}

// Function to erase a substring from the main string
void eraseSubstring(char mainStr[], int start, int length) {
    int i;
    for (i = start; i + length < strlen(mainStr); i++) {
        mainStr[i] = mainStr[i + length];
    }
    mainStr[i] = '\0'; // Null-terminate the new string after erasing
}

// Function to check if the substring exists in the main string
int isSubstringInMainStr(char mainStr[], char substr[]) {
    char *ptr = strstr(mainStr, substr); // Find the substring in the main string
    return (ptr != NULL) ? ptr - mainStr : -1; // Return the index if found, -1 otherwise
}

int main() {
    char mainStr[100]; // Main string written by Tracy
    printf("Enter the main string: ");
    scanf("%s", mainStr); // Read the main string

    // Dictionary of substrings
    char dictionary[3][10] = {"code", "chef", "game"};
    int dictSize = 3; // Size of the dictionary

    int teddyTurn = 1; // Flag to indicate whose turn it is (1 = Teddy, 0 = Tracy)
    int gameOver = 0;  // Flag to indicate if the game is over
    char winner[10];   // Variable to store the winner's name

    // Game loop
    while (!gameOver) {
        int moveMade = 0; // Flag to check if a valid move is made
        char chosenSubstring[10]; // Buffer to store the player's chosen substring

        printf("%s's turn. Enter a substring to erase: ", teddyTurn ? "Teddy" : "Tracy");
        scanf("%s", chosenSubstring);

        // Check if the chosen substring is in the dictionary
        if (isInDictionary(chosenSubstring, dictionary, dictSize)) {
            // Check if the substring is in the main string
            int index = isSubstringInMainStr(mainStr, chosenSubstring);
            if (index != -1) {
                printf("%s erases '%s'\n", teddyTurn ? "Teddy" : "Tracy", chosenSubstring);
                eraseSubstring(mainStr, index, strlen(chosenSubstring));
                printf("Remaining string: %s\n", mainStr);
                moveMade = 1; // A valid move is made
            } else {
                printf("The substring '%s' is not found in the main string. Try again.\n", chosenSubstring);
            }
        } else {
            printf("The substring '%s' is not in the dictionary. Try again.\n", chosenSubstring);
        }

        // If no valid move was made, the player loses
        if (!moveMade) {
            // Set the winner based on whose turn it is
            strcpy(winner, teddyTurn ? "Tracy" : "Teddy");
            printf("%s cannot erase any valid substring, %s wins!\n",
                   teddyTurn ? "Teddy" : "Tracy", teddyTurn ? "Tracy" : "Teddy");
            gameOver = 1; // End the game
        } else {
            // Switch turns only if a valid move was made
            teddyTurn = !teddyTurn;
        }

        // Check if the main string is empty (end of the game)
        if (strlen(mainStr) == 0) {
            // Set the winner based on whose turn it is
            strcpy(winner, teddyTurn ? "Tracy" : "Teddy");
            printf("The string is empty! Game over.\n");
            printf("%s Won the game\n", winner);
            gameOver = 1;
        }
    }

    return 0;
}
