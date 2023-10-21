#include<stdio.h>

void MakeArray(int size, int ar[size]){
    for(int i = 0;i < size;i++){
        scanf("%d", &ar[i]);
    }
}

void PrintArray(int size, int ar[size]){
    printf("{\n");
    for(int i = 0;i < size;i++){
        printf("%d ", ar[i]);
    }
    printf("\n}");
}

void GetSmallestInt(int size, int smallest, int ar[size]){
    smallest = ar[0];
    for(int i = 1;i < size;i++){
        if(ar[i] < smallest){
            smallest = ar[i];
        }
    }

    printf("\nThe smallest number in the array is %d.\n", smallest);
}

void SortInAscending(int size, int ar[size]){
    int a;
    for(int i = 0;i < size;i++){
        for(int j = i + 1; j < size;j++){
            if(ar[i] > ar[j]){
                a = ar[i];
                ar[i] = ar[j];
                ar[j] = a;
            }
        }
    }

    printf("{\n");
    for(int i = 0;i < size;i++){
        printf("%d ", ar[i]);
    }
    printf("\n}");
}

void SortInDescending(int size, int ar[size]){
    int b;
    for(int i = 0;i < size;i++){
        for(int j = i + 1; j < size;j++){
            if(ar[i] < ar[j]){
                b = ar[i];
                ar[i] = ar[j];
                ar[j] = b;
            }
        }
    }

    printf("{\n");
    for(int i = 0;i < size;i++){
        printf("%d ", ar[i]);
    }
    printf("\n}");
}

void GetNum(int size, int ar[size], int num, int Var){
    Var = 0;
    for(int i = 0;i < size;i++){
        if(ar[i] == num){
            printf("\nThe number is found at index: %d\n", i);
        }
        else{
            Var = 1;
        }
    }
}

int main(){
    int size, smallest, num, Var;
    int UserChoice;

    printf("Enter the size of your array: \n");
    scanf("%d", &size);
    int ar[size];
    printf("Start entering the elements: \n");
    MakeArray(size, ar);

    printf("The array is: \n");
    PrintArray(size, ar);

    printf("\nYou now have your array. What do you wish to do with it?\n");

    printf("\n 1. Get the smallest number.\n");
    printf("\n 2. Sort the array in ascending order.\n");
    printf("\n 3. Sort the array in descending order.\n");
    printf("\n 4. Find the index of a particular number.\n");

    printf("\nEnter your choice: \n");
    scanf("%d", &UserChoice);

    if(UserChoice < 1 || UserChoice > 4){
        printf("Please enter an appropriate number.\n");
    }
    else if(UserChoice == 1){
        GetSmallestInt(size, smallest, ar);
    }
    else if(UserChoice == 2){
        SortInAscending(size, ar);
    }
    else if(UserChoice == 3){
        SortInDescending(size, ar);
    }
    else{
        printf("Enter the number to be searched: \n");
        scanf("%d", &num);

        GetNum(size, ar, num, Var);
        if(Var == 1){
        printf("\nThe number is not found in this array.\n");
        }
    }

    return 0;
}
