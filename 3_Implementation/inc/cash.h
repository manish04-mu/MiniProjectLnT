#include "item.h"
#include <stdio.h>
#include <string.h>
#ifndef CASH_H
#define CASH_H
#define N 10
int denomination[7] = {500,200,100,50,20,10,5};
int deno_count[7] = {100,100,100,100,100,100,100};
/**
 * @brief To carry out the Cash Transaction
 * 
 * @param x Product ID/No.
 * @param y Total Entered Amount
 * @return int 
 */
int cash(int x,int y)
{
  //int denos[10] = {0,0,0,0,0,0,0,0,0,0};
  int prod_val= price[x-1];
  int balance = y-prod_val;
  //int j=0;
  if (item_count[x-1]>0)
  {
    if (balance<0)
    {
      printf("\nNot enough money");
    }
    else if (balance==0)
    {
      printf("\n%s is dispensed",food_item[x-1]);
    }
    else
    {
      int i=0,j=0,denos[10] = {0,0,0,0,0,0,0,0,0,0};  
      while(balance)
      {  
        while(i<7)
        {
          if (balance<denomination[i] && deno_count[i]>0)
          {
            i++;
          }
          else
          {
            break;
          } 
        }
        
        if( i<7 && deno_count[i]>0)
        {
          deno_count[i]--;
          denos[j] = denomination[i];
          balance-=denomination[i];
          j++;
        }
        else if (i>=7)
        {
          printf("\nError1");
          break;
        }
        else
        {
          i++;
        }
      
      }
      if (balance==0)
      {
        printf("\n%s is dispensed",food_item[x-1]);
        for (int _=0;_<10;_++)
        {
          if(denos[_]!=0)
          {
            printf("\nRs. %d dispensed.",denos[_]);
          }
        }
      }
    } 
  }
  else
  {
    printf("\n%s is not available",food_item[x-1]);

  }
}

/**
 * @brief To verify whether the inserted note is valid or not
 * 
 * @param d Note Value/Money
 * @return int 
 */
int deno(int d)
{
  for (int i=0;i<7;i++)
  {
    if (denomination[i]==d)
    {
      return 1;
    }
  }
  return 0;
}
#endif