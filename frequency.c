#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
An interesting problem that I solved. Input is a continuous string inclusive of any digit, any letter, and all special characters. The output has to be the frequency of all digits  from 0 to 9.
For Example:
Input: 123456789abcdef123456789000
Output: 0:3, 1: 2, 2: 2, 3: 2, 4: 2, 5: 2, 6: 2, 7: 2, 8: 2, 9: 2.
*/

int main() {

    printf("NOTE: ENTER ONLY ONE SIGULAR STRING WITHOUT ANY SPACES.");
    char s[10000];
    printf("\nEnter the string: \n");
    scanf("%s", &s);
    int len = strlen(s);
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;
    for(int k = 0; k < len;k++){
        if (s[k] == '0'){
            a++;
        }
        else if(s[k] == '1'){
            b++;
        }
        else if(s[k] == '2'){
            c++;
        }
        else if(s[k] == '3'){
            d++;
        }
        else if(s[k] == '4'){
            e++;
        }
        else if(s[k] == '5'){
            f++;
        }
        else if(s[k] == '6'){
            g++;
        }
        else if(s[k] == '7'){
            h++;
        }
        else if(s[k] == '8'){
            i++;
        }
        else if(s[k] == '9'){
            j++;
        }
    }
    printf("\nThe Frequency is as follows: \n");
    printf("\n0:%d, 1: %d, 2: %d, 3: %d, 4: %d, 5: %d, 6: %d, 7: %d, 8: %d, 9: %d.", a, b, c, d, e, f, g, h, i, j);
    return 0;
}
