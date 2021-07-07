/**
 * @file vendingmachine.c
 * @author ManishKumar
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <string.h>
#include "owner.h"
#include "item.h"
#include "cash.h"
#include "card.h"
int main()
{
    char u;
    printf("\nPress 'u' to start the Vending Machine : ");
    scanf("%c",&u);
    if(u =='u')
    {

      item_display(); 
      printf("\nSelect the Product : ");
      int p;
      scanf("%d",&p);
      printf("\nYou have selected %s.",food_item[p-1]);
      printf("\nYour have selected product worth Rs. %d",price[p-1]);
      printf("\nSelect Mode of Payment");
      printf("\nPress '1' for Cash Mode and '0' for Card Mode : ");
      int mode;
      scanf("%d",&mode);

      if (mode)
      {
        printf("\nYou have Selected Cash Mode\n");
        int i=0,amt_inserted=0;
        int g;
        do{
            printf("\nEnter the Amount : ");
            scanf("%d",&i);
            amt_inserted+=i;
            printf("\nTotal amount inserted : %d",amt_inserted);
            printf("\nPress '1' to continue or '0' to stop ");
            scanf("%d",&g);             
        } while(g==1);
        cash(p,amt_inserted);
        
      }
      else
      {
        printf("You have Selected Card Mode");
        int i;
        printf("\nEnter the Card Id : ");
        scanf("%d",&i);

        int pass;
        printf("\nEnter the Password : ");
        scanf("%d",&pass);

        int x = authenticate(i,pass);
        
        if (x)
        {
          int y = au(i,pass);
          card(p,y);
        }
      }
    }
    else if(u=='o')
    {
      printf("\n1. Display the Items, Price and Quantity");
      printf("\n2. Update the Name of the product");
      printf("\n3. Update the Price of the Product");
      printf("\n4. Update the Quantity of the Product");
      printf("\n\nSelect the Option : ");
      int x;
      scanf("%d",&x);
      switch (x)
      {
      case 1:
        display();
        break;
      case 2:
        updateName();
        break;
      case 3:
        updatePrice();
        break;
      case 4:
        updateQuantity();
        break; 
      default:\
        printf("Select from Menu");
      }
    }    
}