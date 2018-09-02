#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c , d , e , f , g ,h , i , j;
    printf("                                           WELCOME TO THE GAME \n");
    printf("                                          KAUN BANEGA CROREPATI \n");
    printf("Here is your first question \n\n\n");
    printf("1.)In what direction muslim pray\n 1.East\n 2.South\n 3.Nearby Mosque's direction\n 4.Mecca's direction\n");
    scanf("%d" ,&a);
    if(a == 4)
        {
     printf("You have entered the correct answer Now you have won Rs.5000  \n");
     printf("so here is the next question \n");
     printf("2.)The International Literacy Day is observed on \n1.Sep 8 \n2.Nov 28 \n3.May 2 \n4.Sep 22\n");
     scanf("%d" , &b);
     if(b == 1)
        {
        printf("You have entered the correct answer Now you have won Rs.10000 \n");
        printf("so here is the next question\n");
        printf("3.)The language of Lakshadweep. a Union Territory of India, is \n1.Tamil \n2.Hindi \n 3.Malayalam \n4.Telugu \n");
        scanf("%d" , &c);
        if(c == 3)
        {
            printf("You have entered the correct answer Now you have won Rs.20000 \n");
             printf("so here is the next question\n");
             printf("4.) Bahubali festival is related to\n 1. Islam\n 2.Hinduism\n  3.Buddhism\n 4.Jainism\n");
               scanf("%d" , &d);
               if(d == 4){
                printf("You have entered the correct answer Now you have won Rs.50000 \n");
                printf("so here is the next question\n");
                printf("5).Which day is observed as the World Standards  Day?\n 1.June 26\n 2.Oct 14\n 3.Nov 15\n 4.Dec 2\n ");
                scanf("%d" , &e);
                if(e == 2){
                  printf("You have entered the correct answer Now you have won Rs.200000 \n");
                  printf("so here is the next question\n");
                  printf("6.) September 27 is celebrated every year as \n1.Teachers' Day\n 2.National Integration Day \n3.World Tourism Day\n 4.International Literacy Day\n");
                  scanf("%d" , &f);
                  if(f == 2){
                    printf("You have entered the correct answer Now you have won Rs.1000000 \n");
                    printf("so here is the next question\n");
                    printf("7.)  Who is the author of 'Manas Ka-Hans' ?\n 1. Khushwant Singh \n2.Prem Chand \n3. Jayashankar Prasad \n 4.Amrit Lal Nagar \n");
                    scanf("%d", &g);
                    if(g == 4){
                        printf("You have entered the correct answer Now you have won Rs.2000000 \n");
                        printf("so here is the next question\n");
                        printf("8.) Which is the capital of India ? \n 1.Ambala \n 2.Chandigarh \n 3.Delhi \n 4.Orissa \n");
                        scanf("%d" , &h);
                        if(h == 3){
                            printf("You have entered the correct answer Now you have won Rs.3000000\n");
                            printf("so here is the next question\n");
                            printf("9.) Who is the current Indian cricket team captian ?\n 1.Virat Kohli \n 2.MS Dhoni\n 3.Shikar Dhawan \n 4.Rohit Sharma \n");
                            scanf("%d" , &i);
                            if(i == 1){
                                printf("You have entered the correct answer Now you have won Rs.4000000 \n");
                                printf("so here is the next question\n");
                                printf("10.) Who is the current President of India ?\n 1.Narendra Modi \n 2.Rahul Ghandi \n 3.Ram Nath Kovind \n 4.Prathiba patel \n");
                                scanf("%d" , &j);
                                if(j == 3){
                                 printf("You have entered the correct answer Now you have won Rs.5000000 \n");
                                 printf("CONGRATULATIONS YOU HAVE WON THE GAME");
                                }else{printf("you lost the game");
                                      printf("Thanks for playing");}
                            }else{printf("you lost the game");
                                  printf("Thanks for playing"); }
                        }else{printf("you lost the game");
                              printf("Thanks for playing");}
                    }else{printf("you lost the game");
                          printf("Thanks for playing"); }
                  }else{printf("you lost the game");
                        printf("Thanks for playing");}
                }else{printf("you lost the game");
                      printf("Thanks for playing");}
               }else{printf("you lost the game");
                    printf("Thanks for playing");}
        }else{printf("you lost the game");
              printf("Thanks for playing");  }
        }else{printf("you have lost the game");
               printf("Thanks for playing");}
    }else{printf("you have lost the game");
         printf("Thanks for playing");
    }


    return 0;
}
