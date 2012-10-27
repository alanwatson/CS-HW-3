Program Description: GIVEN THE HEIGHT OF A SIDE OF A RIGHT TRIANGLE AND THE OPPOSITE ANGLE IN DEGREES DISPLAY THE LENGTHS OF ALL THREE SIDES AND THE ARE OF THE SQUARES THAT WOULD BE CREATED OFF EACH SIDE. 

#include<stdio.h>
#include<math.h>

#define TOTALANGLE 180 //ALL ANGLES IN A TRIANGLE ADD UP TO 180 DEGREES
#define RIGHTANGLE 90 //A RIGHT ANGLE IS EQUAL TO 90 DEGREES

double getTriangleheight(); //INPUTS THE GIVEN TRIANGLE HEIGHT
double getAngle(); //INPUTS THE GIVEN TRIANGLE ANGLE IN DEGREES
void printHeightentered(double); //PRINTS THE INPUT HEIGHT
double calAdjacentside(double, double); //CALCULATES THE ADJACENT SIDE LENGTH
double calHypotenuse(double, double); //CALCULATES THE HYPOTENUSE
void displayResultside(double, double); //PRINTS THE RESULTS OF THE ADJACENT SIDE AND HYPOTENUSE
double calHeightarea(double); //CALCULATES THE INPUT LENGTH SIDE AREA
void printArea(double); //PRINTS THE INPUT LENGTH SIDE AREA
double calAdjacentarea(double); //CALCULATES THE ADJACENT SIDE AREA
double calHypotenusearea(double); //CALCULATES THE HYPOTENUSE AREA
void printResultarea(double, double); //PRINTS RESULTS OF ADJACENT SIDE AREA AND HYPOTENUSE AREA

int main()
{
 //VARIABLES
 double Triangle_h; //INPUTED TRIANGLE HEIGHT
 double Angle_degrees; //INPUTED TRIANGLE ANGLE IN DEGREES
 double Adj_s; //ADJACENT SIDE LENGTH
 double hyp; //HYPOTENUSE SIDE LENGTH
 double Height_a; //INPUT LENGTH SIDE AREA
 double Adj_a; //ADJACENT SIDE AREA
 double hyp_a; //HYPTENUSE AREA

 //EXECUATABLE STATEMENTS
 //INPUT FUNCTIONS
 Triangle_h = getTriangleheight();
 Angle_degrees = getAngle();

 //CALCULATIONS AND PRINTS FOR SIDE LENGTHS
 printHeightentered(Triangle_h);
 Adj_s = calAdjacentside(Angle_degrees, Triangle_h);
 hyp = calHypotenuse(Triangle_h, Adj_s);
 displayResultside(Adj_s, hyp);

 //CALCULATIONS AND PRINTS FOR SIDE AREAS
 Height_a = calHeightarea(Triangle_h);
 printArea(Height_a);
 Adj_a = calAdjacentarea(Adj_s);
 hyp_a = calHypotenusearea(hyp);
 printResultarea(Adj_a, hyp_a);

 return(0);
}

double getTriangleheight()
{
 //VARIABLES
 double Triangle_h; //INPUT TRIANGLE HEIGHT

 //EXECUATABLE STATEMENTS
 printf("Enter the triangle height: ");
 scanf("%lf", &Triangle_h);

 return(Triangle_h);
}

double getAngle()
{
 //VARIABLES
 double Angle_degrees; //INPUT TRIANGLE ANGLE IN DEGREES

 //EXEUTABLE STATEMENTS
 printf("Enter the angle in degrees: ");
 scanf("%lf", &Angle_degrees);

 return(Angle_degrees);
}

void printHeightentered(double Triangle_h)
{
 //EXECUATABLE STATEMENTS
 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
 printf("Length of Sides: \n");
 printf("Height Entered: %10.2f\n", Triangle_h);
}

double calAdjacentside(double Angle_degrees, double Triangle_h)
{
 //VARIABLES
 double Adj_s; //ADJACENT SIDE AREA
 double Adj_angle; //ADJACENT ANGLE IN DEGREES

 //EXECUATABLE STATEMENTS
 Adj_angle = TOTALANGLE - RIGHTANGLE - Angle_degrees; 
 Adj_s = ((Triangle_h / (sin(Angle_degrees * M_PI / TOTALANGLE)))*(sin(Adj_angle * M_PI / TOTALANGLE)));

 return(Adj_s);
}

double calHypotenuse(double Triangle_h, double Adj_s)
{
 //VARIABLES
 double hyp; //HYPOTENUSE SIDE LENGTH

 //EXECUATABLE STATEMTNETS
 hyp = sqrt((pow(Triangle_h, 2)) + (pow(Adj_s, 2)));

 return(hyp);
}

void displayResultside(double Adj_s, double hyp)
{
 //EXECUATABLE STATEMENTS
 printf("Adjacent Side: %11.2f\n", Adj_s);
 printf("Hypotenuse: %14.2f\n", hyp);
}

double calHeightarea(double Triangle_h)
{
 //VARAIBLES
 double Height_a; //INPUT LENGTH SIDE AREA

 //EXECUATABLE STATEMENTS
 Height_a = Triangle_h * Triangle_h;

 return(Height_a);
}

void printArea(double Height_a)
{
 //EXECUATABLE STATEMENTS
 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
 printf("Area of Squares: \n");
 printf("Input length side area: %8.2f\n", Height_a);
}

double calAdjacentarea(double Adj_s)
{
 //VARIABLES
 double Adj_a; //ADJACENT SIDE AREA

 //EXECUATABLE STATEMENTS
 Adj_a = Adj_s * Adj_s;

 return(Adj_a);
}

double calHypotenusearea(double hyp)
{
 //VARIABLES
 double hyp_a; //HYPOTENUSE AREA

 //EXECUATABLE STATEMENTS
 hyp_a = pow(hyp, 2);

 return(hyp_a);
}

void printResultarea(double Adj_a, double hyp_a)
{
 //EXECUATABLE STATEMENTS
 printf("Adjacent side area: %12.2f\n", Adj_a);
 printf("Hypotenuse area: %15.2f\n", hyp_a);
}
