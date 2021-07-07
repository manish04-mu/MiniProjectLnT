/**
 * @file owner.h
 * @author Manish Kumar
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef OWNER_H
#define OWNER_H
#define N 10
char food_item[N][20] = {"Frooti","Fanta","ColaCola","MountainDew","Nachos","Lays","Sandwich","HidenSeek","Kitkat","DairyMilk"};
int price[N] = {10,35,45,40,45,35,50,20,35,40};
int item_count[N] = {10,10,10,10,10,10,10,10,10,10};
/**
 * @brief display the name, price and quantity
 * 
 */
void display()
{
    for (int i=0;i<N;i++)
    {
        printf("%d.  %s\t%d\t%d\n",i+1,food_item[i],price[i],item_count[i]);
    }
}
/**
 * @brief update the name of the product
 * 
 */
void updateName()
{
    int i;
    printf("\nSelect the Product : ");
    scanf("%d",&i);
    printf("%s",food_item[i-1]);
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
 * @brief update the price of the product
 * 
 */
void updatePrice()
{
    int i;
    printf("\nSelect the Product : ");
    scanf("%d",&i);
    printf("Previous Price = %d",price[i-1]);
    //("The Price of s is updated to d"/*,food_item[i-1],price[i-1]*/);
    printf("\nEnter the New Price : ");
    int x;
    scanf("%d",&x);
    *(price+i-1) = x;
    printf("The Price of %s is updated to %d",food_item[i-1],price[i-1]);
}
/**
 * @brief update the quantity of the product
 * 
 */
void updateQuantity()
{
    int i;
    printf("\nSelect the Product : ");
    scanf("%d",&i);
    printf("\nEnter the New Quantity : ");
    int x;
    scanf("%d",&x);
    *(item_count+i-1) += x;
    printf("The Quantity of %s is increased to %d",food_item[i-1],item_count[i-1]);
}

#endif