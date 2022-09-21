#include <stdio.h>
#include <string.h>
#define PI 3.14

main(){
   // int radius;
    int BTC;
//printf("What is the radius of the circle you want to calculate?\n");
//scanf("%.1f", &radius);
//printf("The value of the circle is %d %.1f %.1f", 3, PI,radius);


printf("Enter the value of the BTC you wish to convert\n");
scanf("%d", &BTC);

printf("The satoshi price is %d",BTC*100000000.0000);



}
