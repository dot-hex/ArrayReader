#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "data.h"

using namespace std;

/* This is the public version of this array reader, which uses cleaned data. */

int main(){

int mm;
int dd;
int yy;
int test;

 /* Need input loop here */
    std::cout<< "Please enter the month in mm: ";
    std::cin>> mm; 
    std::cout<< "Please enter the day in dd: ";
    std::cin>> dd;
    std::cout<< "Please enter the year in yy: ";
    std::cin>> yy;
   


    

    int ActualDay = dd - 1;
int dCode = 0;
/*Currently only switches for the months, planned to add year switching. Currently, this application generates data for 2020 only. Stops tool if year input is not 2020. */
if (yy != 20)
{
    cout<<"This tool only works for 2020 \n";
    cout<<"Press any key to continue.";
    getch();
    exit(1);

}
/*Switch function for the months, in the future, this will likely move off main function. */
   switch (mm)
   {
   case 1:
  dCode = Jan[ActualDay];
       break;
    case 2:
   dCode =Feb[ActualDay];
    break;
    case 3:
  dCode =Mar[ActualDay];
    break;
    case 4:
  dCode =Apr[ActualDay];
    break;
    case 5:
  dCode =May[ActualDay];
    break;
    case 6:
  dCode =June[ActualDay];
    break;
    case 7:
  dCode =July[ActualDay];
    break;
    case 8:
  dCode =Aug[ActualDay];
    break;
    case 9:
  dCode =Sept[ActualDay];
    break;
    case 10:
  dCode =Oct[ActualDay];
    break;
    case 11:
  dCode =Nov[ActualDay];
    break;
    case 12:
  dCode =Dec[ActualDay];
    break;
   default:

        break;
   };
/*Checks if the date is valid, if not, outputs "Invalid Date"*/
if (dCode != 0)
{
    std::cout<<"The code for: " << mm <<" " << dd <<" " << yy << " is " <<dCode;
};
if (dCode == 0)
{
    std::cout<<"Invalid date";
}

cout<<"\n Press any key to continue.";
getch();
/*End of program*/
    
}

