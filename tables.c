#include<stdio.h>

// Prints the multiplication table from 1 to n.

void Table(int n, int arr[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = (i + 1)*(j + 1);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf(" %2d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int n;
    printf("Enter the highest number for the table: \n");
    scanf("%d", &n);

    int arr[n][n];
    printf("Here is your table: \n");
    Table(n, arr);

    return 0;
}
