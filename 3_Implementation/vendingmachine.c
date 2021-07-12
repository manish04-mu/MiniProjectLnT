/**
 * @file vendingmachine.c
 * @author Manish Kumar (you@domain.com)
 * @brief User Interface
 * @version 0.1
 * @date 2021-07-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <string.h>
#include "INC\item.h"
#include "INC\cash.h"
#include "INC\card.h"
#include "INC\owner.h"

int main()
{
  while(1)
  {
    int user;
    printf("\n\nPress '1' to begin : ");
    scanf("%d",&user);
    if(user==1)
    {
      int prod,mode;
      item_display(); 
      printf("\nSelect the Product : ");
      scanf("%d",&prod);
      printf("\nYou have selected %s.",food_item[prod-1]);
      if (itemCount(prod)==1)
      {
        printf("\nYour have selected product worth Rs. %d",price[prod-1]);
        printf("\n\nSelect Mode of Payment");
        printf("\nPress '1' for Cash Mode and '0' for Card Mode : ");
        scanf("%d",&mode);
        if (mode)
        {
          printf("\nYou have Selected Cash Mode\n");
          int i=0,amt_inserted=0,g;
          do
          {
            printf("\nEnter the Amount : ");
            scanf("%d",&i);
            if (deno(i)==1)
            {
              amt_inserted+=i;
              printf("\nTotal amount inserted : %d",amt_inserted);
              
            }
            printf("\nPress '1' to continue or '0' to stop :");
            scanf("%d",&g);             
          } while(g==1);
          cash(prod,amt_inserted);
        }
        else
        {
          int cusId,cusPassword;
          printf("You have Selected Card Mode");
          printf("\nEnter the Card Id : ");
          scanf("%d",&cusId);
          printf("\nEnter the Password : ");
          scanf("%d",&cusPassword);
          int x = authenticate(cusId,cusPassword);
          if (x)
          {
            int y = cardIndex(cusId);
            card(prod,y);
          }
        }
        
      }
      else
      {
        printf("\n%s is not Available",food_item[prod-1]);
      
      }    
    }
    else if (user == 5698)
    {
      printf("\nYou have entered in Admin Mode ");
      displayMenu();
    }
  }
}