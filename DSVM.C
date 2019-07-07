#include<stdio.h>
#include<conio.h>
int main()
{
int money, selection, coin, i, pre, ch;
int count=0,c=0,co=0,cou=0,coun=0;
int v=20,w=20,x=20,y=20,z=20;
char b = 'y';
int limca[20];
int thumsup[20];
int mountaindew[20];
int redbull[20];
int appyfizz[20];
const char *a[5];
money = 0;
count=sizeof(limca);
c=sizeof(thumsup);
co=sizeof(mountaindew);
cou=sizeof(redbull);
coun=sizeof(appyfizz);
printf("Welcome to the Vending Machine! \n");
a[0]="1.Limca           Rs.20      20";
a[1]="2.Thums Up        Rs.20      20";
a[2]="3.Mountain Dew    Rs.25      20";
a[3]="4.Red Bull        Rs.30      20";
a[4]="5.Appy Fizz       Rs.25      20";
printf("Items \n");
  for(i=0;i<5;i++)
  printf("%s \n",a[i]);
printf("Please insert coins (5,10) or enter 0 to end \n" );
 do{

  do{
   printf("Insert Coins: ");
   scanf("%d" ,&coin);
   if(coin == 0 || coin == 5 || coin == 10 ){
   if(money<0)
   money=pre+coin;
   else
   {money +=coin;
    pre=money;
   }
  }

else
printf("Sorry, coin not accepted. \n");

 }while(coin != 0);
  printf("Enter your choice:");
  scanf("%d",&selection);

 switch(selection){
  case 1:
printf("You have selected Limca as your choice. \n");
money-=20;
if (money >=0){
   printf("Please take your Limca \n");
   if(count==0)
   printf("No Stock");
   else if(v==20)
   printf("Available Limca: %d \n",--v);
   else if(v<20)
   printf("Available Limca: %d \n",--v);

}

break;

 case 2:
  printf("You have selected Thums Up as your choice. \n");
   money-=20;
  if (money >= 0){
  printf("Please Take your Thums Up \n");
  if(c==0)
  printf("No Stock");
  else if(w==20)
  printf("Available Thums Up: %d \n",--w);
  else if(w<20)
  printf("Available Thums Up: %d \n",--w);

}

  break;

 case 3:
  printf("You have selected Mountain Dew as your choice. \n");
   money-=25;
  if (money >= 0){
  printf("Please Take your Mountain Dew \n");
  if(co==0)
  printf("No Stock");
  else if(x==20)
  printf("Available Mountain Dew: %d \n",--x);
  else if(x<20)
  printf("Available Mountain Dew: %d \n",--x);


}

  break;

 case 4:
  printf("You have selected Red Bull as your choice. \n");
   money-=30;
  if (money >= 0){
  printf("Please Take your Red Bull \n");
  if(cou==0)
  printf("No Stock");
  else if(y==20)
  printf("Available Red Bull: %d \n",--y);
  else if(y<20)
  printf("Available Red Bull: %d \n",--y);


 }

  break;

 case 5:
  printf("You have selected Appy Fizz as your choice. \n");
   money-=25;
  if (money >= 0){
  printf("Please Take your Appy Fizz \n");
  if(coun==0)
  printf("No Stock");
  else if(z==20)
  printf("Available Appy Fizz: %d \n",--z);
  else if(z<20)
  printf("Available Appy Fizz: %d \n",--z);

}

  break;

 default:
  printf("Option not valid!");
  break;

 }

  if (money > 0){
    printf("Please take your change: Rs.%d \n",money);
    money=0;
    }

  else if (money < 0){
    printf("Insufficient amount \n");
    }

  else
    printf("Change: Rs.0 \n");

    printf("\n Quantity \n");
    printf("Available Limca (Rs.20):          %d \n",v);
    printf("Available Thums Up (Rs.20):       %d \n",w);
    printf("Available Mountain Dew (Rs.25):   %d \n",x);
    printf("Available Red Bull (Rs.30):       %d \n",y);
    printf("Available Appy Fizz (Rs.25):      %d \n",z);


    printf("\n Do you want to continue (current/next) order or do you want to exit (y/n) \n");
    fflush(stdin);
    scanf("%c",&b);

 }

 while(b=='y');
 if(b=='n'&& money<0)
 printf("Please take your change: Rs.%d \n",pre);
 printf("Bye");
return 0;
}
