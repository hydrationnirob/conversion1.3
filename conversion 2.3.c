
#include<stdio.h>
#define DAYSINWEEK 7
#include<string.h>
int main()
{
    int con; //for switch1
    int num1; //for switch2
    int a,b; //for max and mini viriable
    int num; //for negetive or positive
    int n1; //even or odd
    int put,divi;
    int area;//switch 3
    float radius, diameter, circumference, area1;
    float length, width, area2=0;
    char yes;
    float length1, width1, perimeter;
    int time;

menu:
    printf("      ***** conversion 2.3 *****\n");
    printf("       ___Author : RHS NIORB___ \n");
    printf("****Enter the number for Seletc conversion:***\n\n\n\n");
    printf("1 :simple conversion: (available NOW)\n");
    printf("2 :Area conversion: (available NOW)\n");
    printf("3 :Time conversion: (available NOW)\n\n");
    printf("4 :Date conversion: (available on next update...)\n");
    printf("5 :Numberic conversion: (available on next update...)\n");



    scanf("%d",&con);

    switch(con)   //main funticon
    {
    case 1:

agi:
        printf("****Enter the number for Seletc:***\n");
        printf("1 : find the max and min number\n");
        printf("2 : check whether a number is negative, positive or zero.\n");
        printf("3 : check whether a number is even or odd.\n");
        printf("4 : check whether a number is divisible or not.\n");
        printf("5:  Back\n");
        scanf("%d",&num1);
        switch(num1)  //sub funticon
        {
        case 1:

            printf("find the max and min into two number\n");
            printf("enter the 1st number : ");
            scanf("%d",&a);
            printf("enter the 2snd number : ");
            scanf("%d",&b);
            if(a<b)
            {
                printf("%d is the max number\n",b);
            }
            else
            {
                printf("%d is the max number\n",a);
            }

            printf("Do you want go main Menu? (y/n)\n");
            scanf("%s",&yes);

            if (yes=='y')
            {
                goto menu;
            }
            if (yes =='n')
            {
                goto agi;
            }
            break ;
        case 2:
            printf(" ***check whether a number is negative, positive or zero***\n");
            printf("Enter any number: ");
            scanf("%d", &num);


            if(num > 0)
            {
                printf("Number is POSITIVE\n");
            }
            if(num < 0)
            {
                printf("Number is NEGATIVE\n");
            }
            if(num == 0)
            {
                printf("Number is ZERO\n");
            }
            printf("Do you want go main Menu? (y/n)\n");
            scanf("%s",&yes);

            if (yes=='y')
            {
                goto menu;
            }
            if (yes =='n')
            {
                goto agi;
            }
            break ;
        case 3:
            printf("*** check whether a number is even or odd***\n");
            printf("Enter any number to check even or odd: ");
            scanf("%d", &n1);
            if(num % 2 == 0)
            {

                printf("Number is Even.\n");
            }
            else
            {

                printf("Number is Odd.\n");
            }
            printf("Do you want go main Menu? (y/n)\n");
            scanf("%s",&yes);

            if (yes=='y')
            {
                goto menu;
            }
            if (yes =='n')
            {
                goto agi;
            }
            break ;

        case 4:
            printf("***check whether a number is divisible or not***\n");
            printf("Enter the number:\n");

            scanf("%d",&put);
            printf("Enter the divisible number:");
            scanf("%d",&divi);
            if (put%divi==0)
            {
                printf("The number is Divisible %d with %d\n",put,divi);
            }
            else
            {
                printf("Not Divisible %d with %d\n",put,divi);
            }
            printf("Do you want go main Menu? (y/n)\n");
            scanf("%s",&yes);

            if (yes=='y')
            {
                goto menu;
            }
            if (yes =='n')
            {
                goto agi;
            }
            break ;
        case 5:
            goto menu;


        default :
            printf("Plz Enter Valid Numer\n\n");
            goto agi;
        }


area:
    case 2: //area conversion
        printf(" 1 : enter radius of a circle and find its diameter,\n");
        printf(" 2 : enter length and breadth of a rectangle and find its area\n");
        printf(" 3 : enter length and breadth of a rectangle and find its perimeter.\n");
        printf(" 4 : Back\n");

        scanf("%d",&area);
        switch(area)
        {
        case 1:
            printf("***enter radius of a circle and find its diameter,***\n");


            printf("Enter radius of circle:\n ");
            scanf("%f", &radius);


            diameter = 2 * radius;
            circumference = 2 * 3.14 * radius;
            area = 3.14 * (radius * radius);


            printf("Diameter of circle = %.2f units \n\n", diameter);
            printf("Circumference of circle = %.2f units \n\n", circumference);
            printf("Area of circle = %.2f sq. units\n\n ", area);

            printf("Do you want go main Menu? (y/n)\n");
            scanf("%s",&yes);

            if (yes=='y')
            {
                goto menu;
            }
            if (yes =='n')
            {
                goto area;
            }
            break ;

        case 2:
            printf(" ***length and breadth of a rectangle and find its area***\n");

            printf("Enter length of rectangle: ");
            scanf("%f", &length);
            printf("Enter width of rectangle: ");
            scanf("%f", &width);


            area2 = length * width;


            printf("Area of rectangle = %.2f sq. units \n", area2);

            printf("Do you want go main Menu? (y/n)\n");
            scanf("%s",&yes);

            if (yes=='y')
            {
                goto menu;
            }
            if (yes =='n')
            {
                goto area;
            }
            break ;

        case 3 :
            printf("*** length and breadth of a rectangle and find its perimeter***\n");

            printf("Enter length of the rectangle: ");
            scanf("%f", &length1);
            printf("Enter width of the rectangle: ");
            scanf("%f", &width1);
            perimeter = 2 * (length1 + width1);
            printf("Perimeter of rectangle = %.2f units \n", perimeter);
            printf("Do you want go main Menu? (y/n)\n");
            scanf("%s",&yes);

            if (yes=='y')
            {
                goto menu;
            }
            if (yes =='n')
            {
                goto area;
            }
            break ;
        case 4:
            goto menu;

        default :
            printf("Plz Enter Valid Number\n\n");
            goto area;
        }
time:
    case 3:
        printf("-------------Time converton----------------\n");
        printf(" 1: Check Whether a given Year is a Leap Year \n");
        printf(" 2: Convert Days into Years\n");
        printf(" 3: Convert Time from 12 Hour to 24 Hour\n");
        printf(" 4: Back\n");
        scanf("%d",&time);
        switch(time)
        {


        case 1:
            printf(" ______Check Whether a given Year is a Leap Year _____\n\n\n");

            int year;

            printf("Enter a year \n");
            scanf("%d", &year);
            if ((year % 400) == 0)
                printf("%d is a leap year \n", year);
            else if ((year % 100) == 0)
                printf("%d is a not leap year \n", year);
            else if ((year % 4) == 0)
                printf("%d is a leap year \n", year);
            else
                printf("%d is not a leap year \n\n\n", year);

            printf("Do you want go main Menu? (y/n)\n");
            scanf("%s",&yes);

            if (yes=='y')
            {
                goto menu;
            }
            if (yes =='n')
            {
                goto time;
            }
            break ;


        case 2:
            printf(" ________Convert Days into Years______\n\n\n");

            int ndays, year2, week2, days2;

            printf("Enter the number of days\n");
            scanf("%d", &ndays);
            year2 = ndays / 365;
            week2 =(ndays % 365) / DAYSINWEEK;
            days2 =(ndays % 365) % DAYSINWEEK;
            printf ("%d is equivalent to %d years, %d weeks and %d days \n\n\n",
                    ndays, year2, week2, days2);

         printf("Do you want go main Menu? (y/n)\n");
            scanf("%s",&yes);

            if (yes=='y')
            {
                goto menu;
            }
            if (yes =='n')
            {
                goto time;
            }
            break ;

        case 3:
            printf(" ________Convert Time from 12 Hour to 24 Hour________\n");

            int hh, mm, ss;
            char a[3];
            printf("Enter hours 'hh' \t");
            scanf("%d", &hh);
            printf("Enter minutes 'mm' \t");
            scanf("%d", &mm);
            printf("Enter seconds 'ss' \t");
            scanf("%d", &ss);
            printf("Enter string 'am' or 'pm' \t");
            scanf("%s", &a);

            if(hh <= 12 && mm <= 59 && ss <= 59)
            {
                if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0)
                        && (hh != 0) && (hh != 12))
                {
                    hh = hh + 12;
                }
                if((strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0) && (hh == 12))
                {
                    hh = 0;
                }
                printf("The obtained 24-hour format of input is = \t");
                printf("%02d:%02d:%02d", hh, mm, ss);
                printf("\n\n");
            }
            else
            {
                printf("---Provide the correct inputs.--- \n");
            }

           printf("Do you want go main Menu? (y/n)\n");
            scanf("%s",&yes);

            if (yes=='y')
            {
                goto menu;
            }
            if (yes =='n')
            {
                goto time;
            }
            break ;

        case 4:
            goto menu;

         default :
            printf("_____Plz Enter Valid Number_____\n\n");
            goto time;


        }
default :
            printf("_____Plz Enter Valid Number_____\n\n");
            goto menu;
    }



    return 0 ;







}
