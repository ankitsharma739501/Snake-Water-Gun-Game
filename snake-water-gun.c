//Snake Water & Gun Game!
//Enjoy Playing with computer.
//How to play: Choose one thing between snake , water and gun. And computer will choose one 
//Let's see who wins!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you, char comp) //this function takes My char and Comps char
{                                      
    //return 1 if you win, return -1 if you lose, return 0 if draw.
    //Draw condition
    //Cases covered:
    // ss
    // gg
    // ww
    if (you == comp)
    {
        return 0;
    }
    // Non-draw conditions
    //conditions covered:
    // sg
    // gs
    // sw
    // ws
    // gw
    // wg

    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() & 100 + 1; //Generating random number between 1-100
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66) //1/3 of 100 is =33 & 2/3 of 100 is =66
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    // 33 & 66 will make three equal parts, so if the number lies before 33 it's - s
    // if lies after 33 it's - w and if lies before 66 it's - g

    // comp = 's';  //We can also use this to give a initial char to computer.
    printf("Enter 's' for snake, 'w' for water, 'g' for gun\n");
    scanf("%c", &you);
    int result = snakewatergun(you, comp);
    printf("You choose %c and Computer choose %c :", you, comp);
    if (result == 0)
    {
        printf("Game Draw!\n");
    }
    else if (result == 1)
    {
        printf("You Win!\n");
    }

    else
    {
        printf("You Lost!\n");
    }

    return 0;
}
