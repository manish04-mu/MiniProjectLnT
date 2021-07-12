#include <stdio.h>
#include "item.h"
#include <string.h>
#ifndef __OWNER_H
#define __OWNER_H
/**
 * @brief Update the name of the product
 * 
 */
void updateName()
{
    int i;
    printf("\nSelect the Product : ");
    scanf("%d",&i);
    printf("\nEnter the New Product : ");
    char f[20];
    scanf("%19s",f);
    int y = strlen(f);
    for (int x=0;x<y;x++)
    {
        *(*(food_item+i-1)+(x)) = f[x];
    }
    for (int x=y;x<N;x++)
    {
        *(*(food_item+i-1)+(x)) = ' ';
    }
    printf("Product Name is changed to %s.",food_item[i-1]);
}

/**
 * @brief Update the price of the product
 * 
 */
void updatePrice()
{
    int i,x;;
    printf("\nSelect the Product : ");
    scanf("%d",&i);
    printf("Previous Price = %d",price[i-1]);
    printf("\nEnter the New Price : ");
    scanf("%d",&x);
    *(price+i-1) = x;
    printf("The Price of %s is updated to %d",food_item[i-1],price[i-1]);
}

/**
 * @brief Update the quantity of the product
 * 
 */
void updateQuantity()
{
    int i,x;
    printf("\nSelect the Product : ");
    scanf("%d",&i);
    printf("\nEnter the New Quantity : ");
    scanf("%d",&x);
    *(item_count+i-1) += x;
    printf("The Quantity of %s is increased to %d",food_item[i-1],item_count[i-1]);
}

/**
 * @brief Display the Menu for the Admin User
 * 
 */
void displayMenu()
{
    printf("\n\nPress 1 to view the Menu");
    printf("\nPress 2 to update the Product Name");
    printf("\nPress 3 to update the Product Price");
    printf("\nPress 4 to update the Product Quantity");
    printf("\nSelect your Option : ");
    int x;
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        item_display();
        break;
    case 2:
        item_display();
        updateName();
        break;
    case 3:
        item_display();
        updatePrice();
        break;
    case 4:
        item_display();
        updateQuantity();
        break;        
    default:
        printf("Select Valid Option ");
        break;
    }
}
#endif