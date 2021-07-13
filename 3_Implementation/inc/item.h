#include <stdio.h>
#include <string.h>
#ifndef __ITEM_H
#define __ITEM_H
#define N 10

char food_item[N][20] = {"Frooti","Fanta","ColaCola","MountainDew","Nachos","Lays","Sandwich","Hide'n'Seek","Kitkat","DairyMilk"};
int price[N] = {10,35,45,40,45,35,50,20,35,40};
int item_count[10] = {2,10,5,10,10,0,10,0,10,10};
/**
 * @brief Display the menu
 * 
 */
void item_display()
{
    printf("\n\n\nID  Name          Price       Quantity\n");
    printf("1   %s        (Rs. %d)    %d\n",food_item[0],price[0],item_count[0]);
    printf("2   %s         (Rs. %d)    %d\n",food_item[1],price[1],item_count[1]);
    printf("3   %s      (Rs. %d)    %d\n",food_item[2],price[2],item_count[2]);
    printf("4   %s   (Rs. %d)    %d\n",food_item[3],price[3],item_count[3]);
    printf("5   %s        (Rs. %d)    %d\n",food_item[4],price[4],item_count[4]);
    printf("6   %s          (Rs. %d)    %d\n",food_item[5],price[5],item_count[5]);
    printf("7   %s      (Rs. %d)    %d\n",food_item[6],price[6],item_count[6]);
    printf("8   %s   (Rs. %d)    %d\n",food_item[7],price[7],item_count[7]);
    printf("9   %s        (Rs. %d)    %d\n",food_item[8],price[8],item_count[8]);
    printf("10  %s     (Rs. %d)    %d\n",food_item[9],price[9],item_count[9]);
    
    
}

/**
 * @brief Check whether the selected product is available or not
 * 
 * @param n Product ID/No.
 * @return int 
 */
int itemCount(int n)
{
    if(item_count[n-1]>0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
#endif