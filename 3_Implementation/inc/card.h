#ifndef CARD_H
#define CARD_H
#define N 10

int id[5] = {2478,5698,3256,7458,1234};
int password[5]= {2654,8569,5894,4521,8961};
int balance[5] = {100,100,100,100,100};
/**
 * @brief Used to authenticate the ID and Password to carryout the Card Transaction
 * 
 * @param x ID of the Card
 * @param y Password of the Card
 * @return int 
 */
int authenticate(int x,int y)
{
    int p_word=0;
    for (int i=0;i<5;i++)
    {
        if (x==id[i])
        {
            p_word = password[i];
            break;

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
 * @brief Used to find the User ID stored
 * 
 * @param x Card ID
 * @return int 
 */
int cardIndex(int x)
{
    int i;
    for (i=0;i<5;i++)
    {
        if (x==id[i])
        {
            break;
        } 
    }
    return i;
}

/**
 * @brief To carry out the card Transaction
 * 
 * @param p Product Id/No.
 * @param y User ID
 * @return int 
 */
int card(int p,int y)
{
    if (balance[y]>price[p-1] && item_count[p-1]>0)
    {
        (*balance)-=price[p-1];
        printf("\nYour remaining balance is Rs. %d",balance[y]);
        
        printf("\n%s is delivered",food_item[p-1]);
    }
    else if (item_count[p-1]<=0)
    {
        printf("\n%s is not available.",&food_item[p-1]);
    }
    else 
    {
        printf("\nYour balance is low");
    }
}
#endif