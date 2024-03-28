//
//  main.c
//  C Program to check Year is leap year or not
//
//  Created by Smita Kankayya on 28/03/24.
//

#include <stdio.h>

void leap_year(int year)
{
    if (year % 4 == 0)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
}
  
int main()
{
    leap_year(2000);
    leap_year(2002);
    leap_year(2008);
  
    return 0;
}
