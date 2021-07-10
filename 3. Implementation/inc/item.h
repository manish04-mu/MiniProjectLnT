#ifndef __ITEM_H
#define __ITEM_H
#define N 10
char food_item[N][20] = {"Frooti","Fanta","ColaCola","MountainDew","Nachos","Lays","Sandwich","HidenSeek","Kitkat","DairyMilk"};
int price[N] = {10,35,45,40,45,35,50,20,35,40};
int item_count[10] = {2,10,5,10,10,0,10,0,10,10};
void item_display()
{
    printf("1-->%s      (Rs. %d)\n2-->%s       (Rs. %d)\n3-->%s    (Rs. %d)\n4-->%s (Rs. %d)\n5-->%s      (Rs. %d)\n",food_item[0],price[0],food_item[1],price[1],food_item[2],price[2],food_item[3],price[3],food_item[4],price[4]);
    printf("6-->%s        (Rs. %d)\n7-->%s    (Rs. %d)\n8-->%s   (Rs. %d)\n9-->%s      (Rs. %d)\n10-->%s  (Rs. %d)\n",food_item[5],price[5],food_item[6],price[6],food_item[7],price[7],food_item[8],price[8],food_item[9],price[9]);
}

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