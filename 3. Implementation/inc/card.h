#ifndef CARD_H
#define CARD_H
#define N 10

int id[5] = {2478,5698,3256,7458,1234};
int password[5]= {2654,8569,5894,4521,8961};
int balance[5] = {100,100,100,100,100};

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