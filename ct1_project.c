/*Start of program*/

# include <stdio.h>

int main () {
	
  int choice ;
  printf ("Please enter the serial number for any function you want to use: \n") ;
  printf ("1. Basic arithmetic calculator for 2 values\n") ;
  printf ("2. Finding the largest of 3 values\n") ;
  printf ("3. Area calculator\n") ;
  printf ("Enter choice: ") ;
  scanf ("%d", &choice) ; /*User enters the initial option here*/
  
  switch (choice)
  {
  case 1: /*User selects basic calculator*/
    int calc_choice;
    printf ("You have selected the function 'Basic Arithmetic Calculator for 2 values', please select one of the following operations:\n") ;
    printf ("1. Addition \n") ;
    printf ("2. Subtraction \n") ;
    printf ("3. Multiplication \n") ;
    printf ("4. Division \n ") ;
    printf ("Enter choice here:") ;
    scanf ("%d", &calc_choice) ;
    int num1 , num2 ;
    printf ("Enter first number:") ;
    scanf ("%d", &num1) ;
    printf ("Enter second number:") ;
    scanf ("%d", &num2) ;

    if (calc_choice == 1) { 
	    int sum ;
	    sum = num1 + num2 ;
	    printf ("Addition: %d", sum);
    }

    else if (calc_choice == 2) {  
	    int diff ;
	    diff = num1 - num2 ; 
	    printf ("Subtraction: %d", diff);
    }

    else if (calc_choice == 3) {  
	    int mult ; 
	    mult = num1 * num2 ;
	    printf ("Multiplication: %d", mult);
    }

    else if (calc_choice == 4) {  
      int div ;
      div = num1 / num2 ;
      printf ("Division: %d", div) ;
    }
    break;
  
  case 2:
    printf ("You have selected the function 'Finding the largest of 3 values'.") ; /*User selects value comparison*/
    int val1, val2, val3 ;
    printf ("Enter the 3 values with a space in between them:") ;
    scanf ("%d%d%d", &val1, &val2, &val3);
    
    if (val1 >= val2 && val1 >= val3) {
      printf ("%d is the biggest value", val1) ;
    }

    else if (val2 >= val1 && val2 >= val3){
      printf ("%d is the biggest value", val2) ;
    }

    else if (val3 >= val1 && val3 >= val2) {
      printf ("%d is the biggest value", val3) ;
    }
    break;

  case 3: /*User selects area calculator*/
    printf ("You have selected the function 'Area calculator'. Please select any of the following shapes: \n") ;
    printf ("1. Square \n") ;
    printf ("2. Rectangle \n") ;
    printf ("3. Circle \n") ;
    printf ("4. Triangle \n") ;
    int shape_no ;
    printf ("Enter shape number:") ;
    scanf ("%d", &shape_no) ;
    
    if (shape_no == 1) {
      float s, a ;
      printf ("Enter length of side:") ;
      scanf ("%f", &s) ;
      a = s * s;
      printf ("Area of square: %.3f square units", a);
    }

    else if (shape_no == 2) {
      float l, b, a ;
      printf ("Enter length and breadth of rectangle with space in between:") ;
      scanf ("%f%f", &l, &b) ;
      a = l*b ;
      printf ("Area of rectangle: %.3f square units", a);
    }

    else if (shape_no == 3) {
      float r, pi, a ;
      printf ("Enter radius of circle:") ;
      scanf ("%f", &r) ;
      pi = 3.14 ;
      a = pi * r * r ;
      printf ("Area of circle: %.3f square units", a) ;
    }

    else if (shape_no == 4) {
      float h, b, a ;
      printf ("Enter base and height of triangle with a space in between:") ;
      scanf ("%f%f", &b, &h) ;
      a = (b*h)/2 ;
      printf ("Area of triangle: %.3f square units", a) ;
    }

  default:
  break;
  }
}

/*End of the program*/