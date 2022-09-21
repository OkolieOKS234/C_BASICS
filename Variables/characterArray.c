#include <stdio.h>
#include <string.h>


int main(){

char kid1[12];

kid1[0]='D';
kid1[1]= 'A';
kid1[2]= 'V';
kid1[3]= 'I';
kid1[4]= 'D';
kid1[5]= '\0';

char crypto[25]= "Bitcoin";

//strcpy(crypto, "Ethereum");

printf("The second cryptocurrency ever created was %s\n", crypto);
printf("It has a value of %.2f", 1340.5);
return 0;
}
