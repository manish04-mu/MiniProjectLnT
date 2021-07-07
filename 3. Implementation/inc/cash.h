/**
 * @file cash.h
 * @author Manish Kumar
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef CASH_H
#define CASH_H
#define N 10

/**
 * @brief cash module for vending machine
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int cash(int x,int y)
{
  int denomination[8] = {500,200,100,50,20,10,5};
  int deno_count[8] = {100,100,100,100,100,100,100,100};

  int prod_val= price[x-1];

  int balance = y-prod_val;
  //int i=0;
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
      int i=0;  
      while(balance)
      {  
        while(i<7 )
        {
          if (balance<denomination[i] || deno_count[i]<0)
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
          printf("\ni = %d",i);
          printf("\nRs. %d",denomination[i]);
          balance-=denomination[i];
        }
        else if (i>=7)
        {
          printf("Error1");
          break;
        }
        else
        {
          i++;
        }
      
      }
      printf("\n%s is dispensed",food_item[x-1]);
    } 
  }
  else
  {
    printf("\n%s is not available",food_item[x-1]);

  }
  

}

#endif