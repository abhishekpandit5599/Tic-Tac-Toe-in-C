#include<stdio.h>
#include<conio.h>
int n,i,ch;
display(char *a)
{
printf ("************************************\n");
printf ("          Tic-Tac-Toe Game       \n\n");
printf ("      -------------------------\n");
printf ("      |   %c   |   %c   |   %c   |\n",a[0],a[1],a[2]);
printf ("      -------------------------\n");
printf ("      |   %c   |   %c   |   %c   |\n",a[3],a[4],a[5]);
printf ("      -------------------------\n");
printf ("      |   %c   |   %c   |   %c   |\n",a[6],a[7],a[8]);
printf ("      -------------------------\n");
printf ("\n************************************\n");
printf ("---------------MENU-----------------\n\n");
printf ("FIRST PLAYER SYMBOL (X)\n");
printf ("SECOND PLAYER SYMBOL (0)\n");
printf ("\n************************************");
}

player1()
{ 
 printf ("YOUR TURN :>%d\n",i);
 printf ("FIRST PLAYER ENTER NO. OF BOX :>");
 scanf ("%d",&n);
}
exchange1(char *a)
{
 a[n-1]='x';
display(a);
if(((a[0]=='x')&&(a[4]=='x')&&(a[8]=='x'))||
   ((a[2]=='x')&&(a[4]=='x')&&(a[6]=='x'))||
   ((a[0]=='x')&&(a[1]=='x')&&(a[2]=='x'))||
   ((a[3]=='x')&&(a[4]=='x')&&(a[5]=='x'))||
   ((a[6]=='x')&&(a[7]=='x')&&(a[8]=='x'))||
   ((a[0]=='x')&&(a[3]=='x')&&(a[6]=='x'))||
   ((a[1]=='x')&&(a[4]=='x')&&(a[7]=='x'))||
   ((a[2]=='x')&&(a[5]=='x')&&(a[8]=='x')) )
 {
   printf ("FIRST PLAYER IS WINER\n\n");
   //exit(1);
   printf("1.PLAY AGAIN\n");
   printf ("2.EXIT\n");
   printf ("ENTER YOUR CHOICE :>");
   scanf ("%d",&ch);
    switch (ch)
    {
   case 1:
     main ();
     break ;
   case 2:
      exit(1);
      break ;
    }
 }
}
player2()
{
if(i==5)
{
 printf ("GAME DRAW\n\n");
 //exit(1);
   printf("1.PLAY AGAIN\n");
   printf ("2.EXIT\n");
   printf ("ENTER YOUR CHOICE :>");
   scanf ("%d",&ch);
    switch (ch)
    {
   case 1:
     main ();
     break ;
   case 2:
      exit(1);
      break ;
    }
}
printf ("YOUR TURN :>%d\n",i);
printf ("SECOND PLAYER ENTER NO. OF BOX :>");
scanf ("%d",&n);
}
exchange2(char *a)
{
 a[n-1]='0';
 display(a);
if(((a[0]=='0')&&(a[4]=='0')&&(a[8]=='0'))||
   ((a[2]=='0')&&(a[4]=='0')&&(a[6]=='0'))||
   ((a[0]=='0')&&(a[1]=='0')&&(a[2]=='0'))||
   ((a[3]=='0')&&(a[4]=='0')&&(a[5]=='0'))||
   ((a[6]=='0')&&(a[7]=='0')&&(a[8]=='0'))||
   ((a[0]=='0')&&(a[3]=='0')&&(a[6]=='0'))||
   ((a[1]=='0')&&(a[4]=='0')&&(a[7]=='0'))||
   ((a[2]=='0')&&(a[5]=='0')&&(a[8]=='0')) )
 {
   printf ("SECOND PLAYER IS WINER\n\n");
   //exit(1);
   printf("1.PLAY AGAIN\n");
   printf ("2.EXIT\n");
   printf ("ENTER YOUR CHOICE :>");
   scanf ("%d",&ch);
    switch (ch)
    {
   case 1:
     main ();
     break ;
   case 2:
      exit(1);
      break ;
    }
 }
}
void main ()
{
char a[9]={'1','2','3','4','5','6','7','8','9'};
clrscr();
display (a);
for(i=1;i<=5;i++)
{
player1();
clrscr ();
exchange1(a);
player2();
clrscr();
exchange2(a);
}

getch();
}