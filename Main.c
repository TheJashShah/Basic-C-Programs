#include<stdio.h>

void Circle(float radius, float area, float circum){
    float PI = 3.1415;
    area =  (PI * radius * radius);
    circum = (2 * PI * radius);
    printf("\nThe area is %.3f.\n", area);
    printf("The circumference is %.3f.\n", circum);
}

void DaysToYear(int days, int years, int months, int RemainingDays){
    int x;
    int y;
    years = (days/365);
    x = (days - years*365);
    months = x/30;
    y = (x - months*30);
    RemainingDays = y;
    printf("\n%d Years, %d Months, %d Days.", years, months, RemainingDays);
}

void ReadMat(int rows, int columns, int m1[][columns]){
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < columns;j++){
            scanf("%d", &m1[i][j]);
        }
    }
}

void PrintMat(int rows, int columns, int m1[][columns]){
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < columns;j++){
            printf("%d ", m1[i][j]);

        }printf("\n");

    }
}

void Add(int rows, int columns, int m1[][columns], int m2[][columns], int m3[][columns]){
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < columns;j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main(){

    printf("1. Factorial of an integer.\n");
    printf("2. Area and circumference of a circle.\n");
    printf("3. Conversion of days into years, months, and days.\n");
    printf("4. Star Pyramid pattern.\n");
    printf("5. Addition of two matrices.\n");
    printf("Choose the function to use: \n");


    int UserOption;

    scanf("%d", &UserOption);

    switch(UserOption)
    {
        case 1:
        {
            int num;
            unsigned long int fact = 1;
            printf("Enter your integer: \n");
            scanf("%d", &num);

            for(int i = 1;i <= num;i++)
            {
                fact = fact*i;
            }

            printf("\nThe Factorial of %d is %u", num, fact);
            printf("\nNOTE: This will be correct only for integers less than 13.");
            break;
        }
        case 2:
        {
            float radius, area, circum;
            printf("Enter the radius of your circle: \n");
            scanf("%f", &radius);
            Circle(radius, area, circum);
            break;
        }
        case 3:
        {
            int UserDays, years, months, RemainingDays;
            printf("Enter the number of days to convert: ");
            scanf("%d", &UserDays);
            DaysToYear(UserDays, years, months, RemainingDays);
            break;
        }
        case 4:
        {
            int rows;
            printf("Enter the number of rows: \n");
            scanf("%d", &rows);
            int i, j, k = 0;
            for ( i = 1;i <= rows; i++)
            {
                for (j = 1;j <= rows - i; j++)
                {
                    printf("  ");
                }
                for (k = 1;k <= ( 2 * i - 1); k++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        }
        case 5:
        {
            int rows, columns;
            printf("Enter the number of rows: \n");
            scanf("%d", &rows);
            printf("Enter the number of columns: \n");
            scanf("%d", &columns);
            int mat1[rows][columns];
            printf("Start entering the elements. \n");
            ReadMat(rows, columns, mat1);
            printf("\nThe Matrix is: \n");
            PrintMat(rows, columns, mat1);

            int rows1, columns1;
            printf("Enter the number of rows: \n");
            scanf("%d", &rows1);
            printf("Enter the number of columns: \n");
            scanf("%d", &columns1);
            int mat2[rows1][columns1];
            printf("Start entering the elements. \n");
            ReadMat(rows1, columns1, mat2);
            printf("\nThe Matrix is: \n");
            PrintMat(rows1, columns1, mat2);

            if(rows == rows1 && columns == columns1)
            {
                int choice;

                int mat3[rows][columns];
                printf("The matrices can be added. Do you want to? \n");
                printf("\nEnter 1 for yes, and 2 for no: \n");
                scanf("%d", &choice);

                if(choice < 1 || choice > 2)
                {
                    printf("Enter an appropriate number.\n");
                }
                else if(choice == 1)
                {
                Add(rows, columns, mat1, mat2, mat3);
                printf("\nThe added Matrix is: \n");
                PrintMat(rows, columns, mat3);
                }
                else
                {
                    printf("Adios!\n");
                }
            }
            else
            {
                printf("The matrices cannot be added.\n");
            }
                break;
        }
        default:
        {
            printf("Please enter an appropriate number. \n");
            break;
        }
    }

    /*
    if(UserOption < 1 || UserOption > 5){
        printf("Please enter an appropriate number. \n");
    }
    else if(UserOption == 1){
        int num;
        unsigned long int fact = 1;
        printf("Enter your integer: \n");
        scanf("%d", &num);

        for(int i = 1;i <= num;i++){
            fact = fact*i;
        }

        printf("\nThe Factorial of %d is %u", num, fact);
        printf("\nNOTE: This will be correct only for integers less than 13.");
    }
    else if(UserOption == 2){
        float radius, area, circum;
        printf("Enter the radius of your circle: \n");
        scanf("%f", &radius);
        Circle(radius, area, circum);
    }
    else if(UserOption == 3){
        int UserDays, years, months, RemainingDays;
        printf("Enter the number of days to convert: ");
        scanf("%d", &UserDays);
        DaysToYear(UserDays, years, months, RemainingDays);
    }
    else if(UserOption == 4){
        int rows;
        printf("Enter the number of rows: \n");
        scanf("%d", &rows);
        int i, j, k = 0;
        for ( i = 1;i <= rows; i++){
            for (j = 1;j <= rows - i; j++){
                printf("  ");
            }
            for (k = 1;k <= ( 2 * i - 1); k++){
                printf("* ");
            }
            printf("\n");
        }
    }
    else{
        int rows, columns;
        printf("Enter the number of rows: \n");
        scanf("%d", &rows);
        printf("Enter the number of columns: \n");
        scanf("%d", &columns);
        int mat1[rows][columns];
        printf("Start entering the elements. \n");
        ReadMat(rows, columns, mat1);
        printf("\nThe Matrix is: \n");
        PrintMat(rows, columns, mat1);

        int rows1, columns1;
        printf("Enter the number of rows: \n");
        scanf("%d", &rows1);
        printf("Enter the number of columns: \n");
        scanf("%d", &columns1);
        int mat2[rows1][columns1];
        printf("Start entering the elements. \n");
        ReadMat(rows1, columns1, mat2);
        printf("\nThe Matrix is: \n");
        PrintMat(rows1, columns1, mat2);



        if(rows == rows1 && columns == columns1){
            int choice;

            int mat3[rows][columns];
            printf("The matrices can be added. Do you want to? \n");
            printf("\nEnter 1 for yes, and 2 for no: \n");
            scanf("%d", &choice);

            if(choice < 1 || choice > 2){
                printf("Enter an appropriate number.\n");
            }
            else if(choice == 1){
               Add(rows, columns, mat1, mat2, mat3);
               printf("\nThe added Matrix is: \n");
               PrintMat(rows, columns, mat3);
            }
            else{
                printf("Adios!\n");
            }
        }
        else{
            printf("The matrices cannot be added.\n");
        }

    }
    */
    return 0;
}
