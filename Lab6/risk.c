
#include <stdio.h>
#include <stdbool.h>

int main (void){ 

char Attacker;
int AT;
char Defender;
int DT;

// Ask for players names and print them in a table
printf("Enter Attacker:\n");
scanf("%s", &Attacker);
printf("Enter troops attacking:\n");
scanf("%d", &AT);

printf("Enter Defender\n");
scanf("%s", &Defender);
printf("Enter troops defending:\n");
scanf("%d", &DT);

//Making table
printf("\t Attacker:%s Defender:%s\n ------- ------- -------\n",Attacker,Defender);

//Attacking to compleation?


//Attacking until 


return 0;


}

