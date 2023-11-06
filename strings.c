#include<stdio.h>
#include<string.h>

/*
Returns the number of words, characters, vowels, consonants, and special characters in a string.
*/


int main(){

    char str[100];

    printf("Enter your string: \n");
    scanf("%[^\n]", str);
    int len = strlen(str);

    int words = 1, characters = 0, vowels = 0, consonants = 0, spchr = 0;

    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            words++;
            consonants--;
        }
        else{
            characters++;
        }
    }

    for(int i = 0; i < len; i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowels++;
        }
        else if(str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$'
      || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*'
      || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '{'
      || str[i] == '}' || str[i] == '[' || str[i] == ']' || str[i] == ':'
      || str[i] == ';' || str[i] == '"' || str[i] == '<' || str[i] == '>' || str[i] == '.' || str[i] == '?' || str[i] == '~' || str[i] == '`' || str[i] == '/' || str[i] == ',' || str[i] == 39){
            spchr++;
      }
        else{
            consonants++;
        }
    }

    printf("%Words: %d\nCharacters: %d\nVowels: %d\nConsonants: %d\nSpecial Characters: %d\n", words, characters, vowels, consonants, spchr);

    return 0;
}
