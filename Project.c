#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int RPS(char user,char computer)
{
if(user==computer)
{
     return 0;
}

if(user=='r'&&computer=='p')
{
     return -1;
}
else if(user=='p'&&computer=='r')
{
     return 1;
}
if(user=='r'&&computer=='s')
{
    return 1;
}
else if(user=='s'&&computer=='r')
{
   return -1;
}
if(user=='s'&&computer=='p')
{
    return 1;
}
else if(user=='p'&&computer=='s')
{
    return -1;
}
}

int main (){
     char user,computer;
     int draw=0;
     int Bot=0;
     int Player=0;
    int Number;
      
printf("      WELCOME BONJOURE*\n");
printf("      **ZOOOOOOOOM!!!!**\n");
printf("      HERE ARE SOME RULES OF THE GAME<*>\n");
printf("      THIS GAME IS BEING PLAYED BETWEEN 2 INDIVIDUA       \n THE FIRST ONE IS YOU-:)       \n AND THE SECOND ONE IS COMPUTER-:)");
printf("      \nYOU GET FIVE CHANCES TO WIN THE GAME\n");
printf("       IF YOUR SCORE IS HIGH       \nTHEN YOU WIN THE GAME\n");
printf("{R~>ROCK}...\t\t\t\t\t\t\t\n{P~>PAPER}...\t\t\t\t\t\t\t\n{S~>SCISSORS}...\n");
printf("       #:ROCK ELIMINATES SCISSORS BAAAMMMM!!!\t\t\t\t\t\t\t\n#:SCISSORS ELIMINATES PAPER GOTCHAAA!!!       \n#:PAPER ELIMINATES ROCK OUCH OUCH OUCH!!!\n");
printf("       IF USER DEFEATES THE COMPUTER THEN USER GET ONE SCORE\n");
printf("       IF COMPUTER DEFEATES USER THEN COMPUTER GETS ONE SCORE\n");
printf("       ROSES ARE RED VIOLETS ARE BLUE IF YOU WANNA WIN!!!TRY ASAP...:\n");
printf("       \tYOU ARE GOOD TO GO       \n BEST OF LUCK\n");
printf("            Enter the turns you want to play the game         \n");
int turns;
scanf("%d",&turns);
srand(time(0));
Number=rand()%100+1;
if(Number<33)
{
    computer='r';
}
else if(Number>33 && Number<66)
{
    computer='p';
}
else if(Number>66)
{
    computer='s';
}

for(int i=0;i<turns;i++)
{
    printf("Play Your Turn...\n");
   scanf(" %c", &user);
      
    printf("computer has Selected \n%c",computer);
    
    printf("\n--------------------------------------------\n");
int result = RPS(user,computer);    
    
switch(result)
{
case 1: Player++;
        printf("You Win\n");
        break;
case -1:Bot++;
        printf("You Lose\n");
        break;
case 0:draw++;
       printf("Its a Draw\n");
       break;
}
        


  printf("\n***ADIOS!!!**\n");
  printf("The score of the user is %d\n",Player);
printf("The score of the computer is %d\n",Bot);
printf("The number of match draw %d\n",draw);
}
if(Bot>Player)
{
    printf("Computer have won the game!!! bad luck try  ASAP\n");
}
else if(Player>Bot)
{
    printf(".....Hurrahhhh!!! you have won the game congratulations....\n");
}
else
{
    printf(".........Match is a tie try again ASAP.....\n");
}
}
