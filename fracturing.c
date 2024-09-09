// Tatum Seaquist
//COP 3223-0006
//Assignment 1: Fracture
//9-8-24

//preprocessor directives
#include <stdio.h> //standard input/output header/library
#include <math.h> //math operations library
#define PI 3.14159  //gives name to a constant value

/*we will call this function in the other functions called from main. This will reduce the amount of lines needed in the other functions */
double askForUserInput()
{
double value;
printf("\nPlease enter a value: \n");
scanf("%lf",&value);

return value;
}



//calculates distance between points
double calculateDistance()
{
double x1, y1, x2, y2, distance;
//calling the helper function each time we enter a value
x1 = askForUserInput();
y1 = askForUserInput();
x2 = askForUserInput();
y2 = askForUserInput();

distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2)); //distance formula
//represents diameter of this circle

printf("\nPoint #1 entered: x1 = %lf; y1 = %lf \nPoint #2 entered: x2 = %lf; y2 = %lf",x1,y1,x2,y2);
    
printf("\nThe distance between the two points is %lf\n\n",distance);

return distance;
}



//calculates circumference of circle
double calculatePerimeter()
{
double x1, y1, x2, y2, perimeter, difficulty;
x1 = askForUserInput();
y1 = askForUserInput();
x2 = askForUserInput();
y2 = askForUserInput();
difficulty = 3;
perimeter=PI*sqrt(pow(x2-x1,2)+pow(y2-y1,2));//radius was distance divided by 2

printf("\nPoint #1 entered: x1 = %lf; y1 = %lf \nPoint #2 entered: x2 = %lf; y2 = %lf",x1,y1,x2,y2);
printf("\nThe perimeter of the city encompassed by your request is %lf\n\n",perimeter); 

return difficulty;
}



//calculates area of circle
double calculateArea()
{
double x1, y1, x2, y2, difficulty, area;
x1 = askForUserInput();
y1 = askForUserInput();
x2 = askForUserInput();
y2 = askForUserInput();
difficulty = 3;

area=PI*pow((sqrt(pow(x2-x1,2)+pow(y2-y1,2))/2),2);

printf("\nPoint #1 entered: x1 = %lf; y1 = %lf \nPoint #2 entered: x2 = %lf; y2 = %lf",x1,y1,x2,y2);
printf("\nThe area of the city encompassed by your request is %lf\n\n", area);

return difficulty;
}



/*width of circle is equivalent to distance between the two points per the assignment's specifications*/
double calculateWidth()
{
double x1, y1, x2, y2, difficulty, width;//defining variables
x1 = askForUserInput();
y1 = askForUserInput();
x2 = askForUserInput();
y2 = askForUserInput();
difficulty = 1; //assigning a value to the variable

width=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

printf("\nPoint #1 entered: x1 = %lf; y1 = %lf \nPoint #2 entered: x2 = %lf; y2 = %lf",x1,y1,x2,y2);
printf("\nThe width of the city encompassed by your request is %lf\n\n", width);

return difficulty;
}



//height is also equal to distance since it is a circle
double calculateHeight()
{
double x1, y1, x2, y2, difficulty, height;
x1 = askForUserInput();
y1 = askForUserInput();
x2 = askForUserInput();
y2 = askForUserInput();
difficulty = 1;

height=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

printf("\nPoint #1 entered: x1 = %lf; y1 = %lf \nPoint #2 entered: x2 = %lf; y2 = %lf",x1,y1,x2,y2);
printf("\nThe width of the city encompassed by your request is %lf\n\n", height);

return difficulty;
}



//main function calls the other functions
int main(int argc, char **argv) 
{
    calculateDistance () ;
    calculatePerimeter () ;
    calculateArea () ;
    calculateWidth () ;
    calculateHeight () ;

    return 0;
}


