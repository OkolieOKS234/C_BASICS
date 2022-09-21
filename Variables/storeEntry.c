#include <stdio.h>


int main(){
char topping[34];
int slices;
int month, day, year;
float cost;


printf("How much does a pizza cost in your area?");
printf("Enter in this format ($XX.XX)\n");
scanf("$%f", &cost);

printf("What is your favourite one-word pizza topping?\n");
scanf(" %s", topping);

printf("How many slices of %s pizza", topping);
printf("can you eat in one sitting?\n");
scanf(" %d", &slices);

printf("What is today's date(enter in XX/XX/XX format). \n");
scanf("%d/%d/%d", &month, &day, &year);

printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month,day,year);
printf("\nand have %d slices of %s pizza!\n", slices,topping);
printf("It will only cost you $%.2f!\n\n\n", cost);

return (0);



}
