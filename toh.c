#include <stdio.h>
#include <conio.h>
#include <math.h>
void hanoi(int x, char from, char to, char aux)
{
    if(x==1)
    printf("Move disk from %c to %c\n",from,to);
    else
    {
        hanoi(x-1,from,aux,to);
        printf("Move disk from %c to %c\n",from,to);
        hanoi(x-1,aux,to,from);
    }
}
void main()
{
    int disk;
    int moves;
    
    printf("Enter the number of disks you want to play with:");
    scanf("%d",&disk);
    moves=pow(2,disk)-1;
    printf("The number of moves required is:%d\n",moves);
}
