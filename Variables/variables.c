#include <stdio.h>
#define PI 3.145

int main(){

/*
Defining variables
using char, int and float
*/
char answer;
int quantity;
float price;

char initialValue,middleValue;

//Let's create a simple cashier calculator app

char firstName;
char lastName;
float priceOfShawarma;
float priceOfPizza;
float priceOfFish;
float priceOfRice;
float priceOfSausages;
float priceOfSweets;

firstName = 'D';
lastName = 'J';
priceOfShawarma =  2500.50;
priceOfPizza = 5000.60;
priceOfFish = 2450.85;
priceOfRice = 2312.45;
priceOfSausages = 155.22;
priceOfSweets = 19.99;



printf("%c.%c bought goods worth %f\n", firstName,lastName,priceOfShawarma*3+priceOfPizza);
// output => D.J bought goods worth 12502.099609
printf("Here is a breakdown of some of the stuffs that were bought by him\n");
// output => Here is a breakdown of some of the stuffs that were bought by him
printf("Goods\t\t\tPrice\n");
// output => Goods                   Price
printf("1.Shawarma\t\t%d\n", 3);
// output => 1.Shawarma              3
printf("2.Pizza\t\t\t%d\n",1);
// output => 2.Pizza                 1
printf("The price for each Shawarma is %.2f\n", 2500.50);
// output => The price for each Shawarma is 2500.50
printf("The price for each Pizza is %.2f\n",5000.60);
//output => The price for each Pizza is 5000.60


//Character array

char month[25]= "January"; //Leaving space for longer string
strcpy(month, "October"); // used for reassigning
printf("My birthday is %s", month);


    printf("\n%f", PI);


return 0;
}
