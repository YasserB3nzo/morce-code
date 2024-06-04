#include <stdio.h>
#include <string.h>

typedef struct
{
    char *morse;
    char lettre;
} MorseCodeMap;

MorseCodeMap morseCodeTable[] = {
    {".-", 'A'},
    {"-...", 'B'},
    {"-.-.", 'C'},
    {"-..", 'D'},
    {".", 'E'},
    {"..-.", 'F'},
    {"--.", 'G'},
    {"....", 'H'},
    {"..", 'I'},
    {".---", 'J'},
    {"-.-", 'K'},
    {".-..", 'L'},
    {"--", 'M'},
    {"-.", 'N'},
    {"---", 'O'},
    {".--.", 'P'},
    {"--.-", 'Q'},
    {".-.", 'R'},
    {"...", 'S'},
    {"-", 'T'},
    {"..-", 'U'},
    {"...-", 'V'},
    {".--", 'W'},
    {"-..-", 'X'},
    {"-.--", 'Y'},
    {"--..", 'Z'},
    {"-----", '0'},
    {".----", '1'},
    {"..---", '2'},
    {"...--", '3'},
    {"....-", '4'},
    {".....", '5'},
    {".----", '6'},
    {"--...", '7'},
    {"---..", '8'},
    {"----.", '9'},
    {".-.-.-", '.'},
};

void traductionMorse(char letter, MorseCodeMap morseCodeTable[])
{
    int i;
    for (i = 0; i < 36; i++)
    {
        if (morseCodeTable[i].lettre == letter)
        {
            printf("%s", morseCodeTable[i].morse);
            return;
        }
    }
}

void traductiontext(char *text)
{
    int i;
    for (i = 0; i < strlen(text); i++)
    {
        traductionMorse(text[i], morseCodeTable);
        printf("  ");
    }
}

int main()
{
    char text[127];

    printf("Enter the text and make sure the letters are in uppercase: ");
    fgets(text, sizeof(text), stdin);
    traductiontext(text);

}
