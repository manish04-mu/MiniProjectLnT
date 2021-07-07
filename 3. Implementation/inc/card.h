/**
 * @file CARD.H
 * @author Manish Kumar
 * @brief Functions related to the card module in vendingmachine
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "owner.h"

#ifndef CARD_H
#define CARD_H
#define N 10

int id[10] = {2478,5698,3256,7458,1234};
int password[10]= {2654,8569,5894,4521,8961};
int balance[10] = {100,100,100,100,100};

/**
 * @brief function to authenticate the card transaction
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int authenticate(int x,int y)
{
    int p_word=0;
    for (int i=0;i<10;i++)
    {
        if (x==id[i])
        {
            p_word = password[i];
        } 
    }
    if (y==p_word)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

/**
 * @brief return the customer id
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int au(int x,int y)
{
    int i;

    for (i=0;i<10;i++)
    {
        if (x==id[i])
        {
            break;
        } 
    }
    return i;
}

/**
 * @brief function to update the balance  
 * 
 * @param p 
 * @param y 
 * @return int 
 */
int card(int p,int y)
{
    if (balance[y]>price[p-1] && item_count[p-1]>0)
    {
        printf("\nYour remaining balance is Rs. %d",balance[y]-price[p-1]);
        printf("\n%s delivered",food_item[p-1]);
    }
    else if (item_count[p-1]<=0)
    {
        printf("\n%s is not available.",&food_item[p-1]);
    }
    else 
    {
        printf("\nBalance is Low");
    }
}
#endif