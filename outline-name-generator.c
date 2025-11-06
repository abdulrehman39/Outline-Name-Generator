#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printChar(char ch, int row, int step, char *specials, int k) {
    int i = step % k;  // pick which special character to use
    char sym = specials[i];

    switch (ch) {
        case 'A': { char *p[7] = {" *** ", "*   *", "*   *", "*****", "*   *", "*   *", "*   *"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'B': { char *p[7] = {"**** ", "*   *", "*   *", "**** ", "*   *", "*   *", "**** "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'C': { char *p[7] = {" ****", "*    ", "*    ", "*    ", "*    ", "*    ", " ****"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'D': { char *p[7] = {"**** ", "*   *", "*   *", "*   *", "*   *", "*   *", "**** "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'E': { char *p[7] = {"*****", "*    ", "*    ", "**** ", "*    ", "*    ", "*****"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'F': { char *p[7] = {"*****", "*    ", "*    ", "**** ", "*    ", "*    ", "*    "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'G': { char *p[7] = {" ****", "*    ", "*    ", "*  **", "*   *", "*   *", " ****"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'H': { char *p[7] = {"*   *", "*   *", "*   *", "*****", "*   *", "*   *", "*   *"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'I': { char *p[7] = {"*****", "  *  ", "  *  ", "  *  ", "  *  ", "  *  ", "*****"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'J': { char *p[7] = {"*****", "   * ", "   * ", "   * ", "*  * ", "*  * ", " **  "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'K': { char *p[7] = {"*   *", "*  * ", "* *  ", "**   ", "* *  ", "*  * ", "*   *"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'L': { char *p[7] = {"*    ", "*    ", "*    ", "*    ", "*    ", "*    ", "*****"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'M': { char *p[7] = {"*   *", "** **", "* * *", "*   *", "*   *", "*   *", "*   *"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'N': { char *p[7] = {"*   *", "**  *", "* * *", "*  **", "*   *", "*   *", "*   *"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'O': { char *p[7] = {" *** ", "*   *", "*   *", "*   *", "*   *", "*   *", " *** "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'P': { char *p[7] = {"**** ", "*   *", "*   *", "**** ", "*    ", "*    ", "*    "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'Q': { char *p[7] = {" *** ", "*   *", "*   *", "*   *", "* * *", "*  * ", " ** *"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'R': { char *p[7] = {"**** ", "*   *", "*   *", "**** ", "* *  ", "*  * ", "*   *"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'S': { char *p[7] = {" ****", "*    ", "*    ", " *** ", "    *", "    *", "**** "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'T': { char *p[7] = {"*****", "  *  ", "  *  ", "  *  ", "  *  ", "  *  ", "  *  "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'U': { char *p[7] = {"*   *", "*   *", "*   *", "*   *", "*   *", "*   *", " *** "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'V': { char *p[7] = {"*   *", "*   *", "*   *", "*   *", " * * ", " * * ", "  *  "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'W': { char *p[7] = {"*   *", "*   *", "*   *", "* * *", "* * *", "** **", "*   *"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'X': { char *p[7] = {"*   *", "*   *", " * * ", "  *  ", " * * ", "*   *", "*   *"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'Y': { char *p[7] = {"*   *", "*   *", " * * ", "  *  ", "  *  ", "  *  ", "  *  "}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        case 'Z': { char *p[7] = {"*****", "    *", "   * ", "  *  ", " *   ", "*    ", "*****"}; 
                    for (int j = 0; p[row][j]; j++) printf("%c", (p[row][j] == '*') ? sym : ' '); break; }
        default:  { printf("     "); break; }
    }
}

int main() {
    char name[100];
    char specials[50];
    int k = 0;

    printf("Enter your name (A–Z): ");
    scanf("%s", name);

    printf("Enter any special characters (no spaces): ");
    scanf("%s", specials);

    k = strlen(specials);
    if (k == 0) { printf("No special characters entered!\n"); return 0; }

    for (int i = 0; name[i]; i++) name[i] = toupper(name[i]);

    printf("\n");
    int step = 0;
    for (int row = 0; row < 7; row++) {
        for (int i = 0; i < strlen(name); i++) {
            printChar(name[i], row, step++, specials, k);
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}
