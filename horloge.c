          //Author  : VLADCRACK
          //Contact : t.me/TheVLADCRACK_237
          //License :  Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/> 
          //[Attention] Je ne suis en rien responsable de l'usage de ce programme [Attention]



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


void temps() {

while(1){

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    printf("\n\n\n\n\n\t\t    ");
    printf("\033[35;5m");
    printf("%s\033[0;0m\t\t\t\t\t\t\t\t\033[36;2m \nBy VLADCRACK  ", asctime(tm));

    printf("\033[0;0m");
    sleep(1);
    system("clear");
          system("figlet -f slant '     HORLOGE'");
}}

int main (){
  system("clear");
   printf ("\e[8;17;67t");
    temps();

    return 0;

}


