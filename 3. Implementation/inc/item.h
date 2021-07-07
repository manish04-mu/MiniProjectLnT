/**
 * @file item.h
 * @author MAnish Kumar
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "owner.h"
#ifndef ITEM_H
#define ITEM_H
#define N 10
/**
 * @brief display the menu to the customer
 * 
 */
void item_display()
{
    printf("1-->%s      (Rs. %d)\n2-->%s       (Rs. %d)\n3-->%s    (Rs. %d)\n4-->%s (Rs. %d)\n5-->%s      (Rs. %d)\n",food_item[0],price[0],food_item[1],price[1],food_item[2],price[2],food_item[3],price[3],food_item[4],price[4]);
    printf("6-->%s        (Rs. %d)\n7-->%s    (Rs. %d)\n8-->%s   (Rs. %d)\n9-->%s      (Rs. %d)\n10-->%s  (Rs. %d)\n",food_item[5],price[5],food_item[6],price[6],food_item[7],price[7],food_item[8],price[8],food_item[9],price[9]);
}
#endif