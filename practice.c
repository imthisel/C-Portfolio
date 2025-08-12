#include <stdio.h>
#include <string.h>

int main (){
   char reason[50] = "";
   int days = 0;

   printf("How many days have u been journaling?: ");
   scanf(" %d", &days);
   getchar();

   if (days > 30){
      printf("You hav ebeen journaling for less than 30 days\n");
   }
   else{
      printf("You have been consistent with journaling and have surpassed a month of journaling! \n");
   }

   printf("What is the main reason you started journaling? ");
   fgets(reason, sizeof(reason), stdin);
   reason[strlen(reason) - 1] = '\0';

   printf("You have been journaling for %d days and the reason why is %s", days, reason);


   return 0;
}