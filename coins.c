#include<stdio.h>
#include<math.h>

/*
Another interesting problem I came across. An entity is trapped  inside a grid of n rows and n columns. n is odd(always), with the center of the grid being (n+1/2, n+1/2). The entity is at a tile(x,y), with x and y both never being equal to the center. He must reach the center.
To move one tile horizontally, he has to spend 1 coin, same with traveling in the y-direction. Moving diagonally will not cost him any coin.
Find the minimum number of coins he must spend to reach the center.

Example:
Input:
5 4 4 -> n, x, y
9 3 4
11 5 11
11 2 11
11 7 10

Output:
0
1
0
1
1
*/

int main(){
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int center = (n + 1)/2;
    int coins = 0;
    int dif = 0;

    if(center == x && center != y){
        dif = abs(center - y);
        if(dif %2 == 0){
            coins = 0; // The entity will move diagonally in a zig-zag movement.
        }
        else if(dif %2 != 0){
            coins = 1; // The entity will have to move one tile in x or y after zig-zag movement.
        }
    }
    else if(center == y && center != x){
        dif = abs(center - x);
        if(dif %2 == 0){
            coins = 0;
        }
        else if(dif %2 != 0){
            coins = 1;
        }
    }
    else if(center != x && center != y){
        if(x == y){
            coins = 0; // A direct diagonal path for the entity.
        }
        else if(x != y){
            if(abs(center - y) == abs(center - x)){
            coins = 0; // Another direct diagonal path.
            }
            else{
                if(y > x){
                    int dif3 = abs(center - y);
                    for(int i = 0; i <= dif3; i++){
                        x += 1;
                        y -= 1;
                        if(x == y){
                            coins = 0;
                            break;
                        }
                        else{
                            coins = 1;
                        }
                    }
                }
                else if(x > y){
                    int dif4 = abs(center - x);
                    for(int i = 0; i <= dif4; i++){
                        x -= 1;
                        y += 1;
                        if(x == y){
                            coins = 0;
                            break;
                        }
                        else{
                            coins = 1;
                        }
                    }
                }
            }
        }
    }

    printf("%d", coins);

    return 0;
}
