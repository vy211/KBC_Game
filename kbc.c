//write on turbo c
/*
    @ Vipin Yadav
  */
  
  #include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
long int t=0;
char a;
//clrscr();
printf("=======================WELCOM TO KBC WITH VIPIN YADAV====================\n");
printf("\n\nNOTE:-You have 6 question each question for 10,00,000\n\n");
printf("\nARE YOU REDY                  #Y for yes & N for not\n\n\n");
a=getchar();
if(a=='y'||a=='Y'){
for(i=0;i<=6;i++){
switch(i){
case 1:
       printf("\nQue 1:-Who is the P.M of india ?\n");
      printf("(1)Manmohan Shingh            (2)Yogi Aditya Nath \n");
     printf("(3)Narendra Modi            (4)Rammanohar \n");
     scanf("%d",&j);
     if(j==3) {
     printf("Right Answers\n");
     printf("You Win 10,00,000 INR\n");
     t=t+1000000;
     printf("TOTAL=%ld INR",t);
     }
     else
     printf("Wrong Answers\n");
     break;
case 2:
      printf("\n\n\n\nQue 2:-Who is the CM of U.P ?\n");
      printf("(1)Akhilesh Yadav            (2)Yogi Aditya Nath \n");
     printf("(3)Kesaw P. Maurya            (4)Mayawati Devi \n");
     scanf("%d",&j);
     if(j==2){
     printf("Right Answers\n");
     printf("You Win 10,00,000 INR\n");
     t=t+1000000;
     printf("TOTAL=%ld INR",t);
     }
     else
     printf("Wrong Answers\n");
     break;
case 3:
	  printf("\n\n\n\nQue 3:-Who is the President of india ?\n");
      printf("(1)Manmohan Shingh            (2)Pranab Mukharjee \n");
     printf("(3)Narendra Modi            (4)Ramnath Kovind \n");
     scanf("%d",&j);
     if(j==4){
     printf("Right Answers\n");
     printf("You Win 10,00,000 INR\n");
     t=t+1000000;
     printf("TOTAL=%ld INR",t);
     }
     else
     printf("Wrong Answers\n");
     break;
case 4:
	 printf("\n\n\n\nQue 4:-Who is the President USA ?\n");
      printf("(1)Hileri Quenton            (2)Jack Spparow\n");
     printf("(3)Billy Gets            (4)Donald Trump \n");
     scanf("%d",&j);
     if(j==4) {
     printf("Right Answers\n");
     printf("You Win 10,00,000 INR\n");
     t=t+1000000;
     printf("TOTAL=%ld INR",t);
     }
     else
     printf("Wrong Answers\n");
     break;
case 5:
	 printf("\n\n\n\nQue 5:-Frist Women WWE fighert name ?\n");
      printf("(1)Kavita Devi            (2)Gita Fogat \n");
     printf("(3)The Lara           (4)Babita Fogat \n");
     scanf("%d",&j);
     if(j==1){
     printf("Right Answers\n");
     printf("You Win 10,00,000 INR\n");
     t=t+1000000;
     printf("-------------------------------------TOTAL=%ld INR",t);
     }
     else
     printf("Wrong Answers                        TOTAL=%ld INR\n",t);
    // printf("\n========================GAME OVER==========================");
	break;
case 6:
	printf("\n\n\n\nQue 6:-Speed of light in vaccume ?\n");
      printf("(1)332 m/sec            (2)0 m/sec\n");
     printf("(3)10 //sec          (4)Infinite \n");
     scanf("%d",&j);
     if(j==2){
     printf("Right Answers\n");
     printf("You Win 10,00,000 INR\n");
     t=t+1000000;
     printf("-------------------------------------TOTAL=%ld INR",t);
     }
     else
     printf("Wrong Answers                        TOTAL=%ld INR\n",t);
     printf("\n========================GAME OVER==========================");
	break;
default :
	  printf("Game Over");
}
 }
}
else
printf("********THANK YOU*******");

getch();
return 0;
}
