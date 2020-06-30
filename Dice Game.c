#include <stdio.h>
#include<time.h>

int main(){

printf("Welcome to Dice game \n\n");
float balance=100.00;
int x,d1,d2,sum;
char a;
printf("> Your account balance is %.2f\n",balance);


for(;;){
printf("\nGuess the number:"); scanf("%d",&x);

if(2>x || x>12){
    printf("\nInvalid input. Please input a number between 2 and 12.\n\n");}

else{
    srand(time(0));
    d1=rand()%6+1;
    d2=rand()%6+1;
    sum=d1+d2;
    printf("\n> Rolling...\n\n");
    printf("Dice 1 : %d\n",d1);
    printf("Dice 2 : %d\n\n",d2);

    if(sum==x)
        {printf("WIN!!!");
        balance+=x;}
    else
        {printf("YOU LOSE :( \n\n");
        balance-=1;}
    }


printf("> Your account balance is %.2f\n\n",balance);


if(balance==0){
    break;}
else{
    printf("Do you want to play another round of game (y/n) : ");

    scanf(" %c",&a);

    if (a=='n')
        break;
    }
}
}
