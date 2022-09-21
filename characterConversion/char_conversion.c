#include <stdio.h>

int main(){

/* Controlling how you use Character conversion
* %d: stands for integer
*%f: floating point
*%c: character
* %s: string
*/
printf("Sam is %d years and has a score of %f ",20, 85.66);

/*controling the number of decimal places in C
*%.2f: 2 Decimal places
*%.3f: 3 Decimal Places
* %.1f: 1 Decimal place
*/
printf("\n %.2f", 20.66);
//print 20.66
printf("\n %.3f", 20.66);
//prints 20.660
printf("\n %.1f\n", 20.66);
//prints 20.7

//USING CHARACTER CONVERSION AND SEQUENCE
printf("Quantity\tCost\tTotal\n");
// Quantity        Cost    Total
printf("%d\t\t$%.2f\t$%.2f\n", 20,99,119);

printf("Too many spaces   \b\b\b can be fixed with the ");
//Too many spaces can be fixed with the \b Escape character
printf("\\%c Escape character\n", 'b');
//
printf("\n\a\n\a\n\aSkip a few lines, and beep ");
printf("a few beeps. \n\n\n");
//


//Skip a few lines, and beep a few beeps.

printf("%s %c.", "You are kicking butt learning", 'C');

printf("%.lf%c of the book.\n", 12.500, '%');

//You are kicking butt learning C.13% of the book.
printf("%.3f or %.4f", 0.33333, 0.33333);
//0.333 or 0.3333

return 0;
}
