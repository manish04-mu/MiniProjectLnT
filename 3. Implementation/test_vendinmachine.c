#include "unity\unity.h"
#include "inc\item.h"
#include "inc\cash.h"
#include "inc\card.h"

void setUp()
{

}

void tearDown()
{
    
}

void test_authenticate(void)
{
    TEST_ASSERT_EQUAL_INT(1,authenticate(2478,2654));
    TEST_ASSERT_EQUAL_INT(1,authenticate(5698,8569));
    TEST_ASSERT_EQUAL_INT(1,authenticate(3256,5894));
    TEST_ASSERT_EQUAL_INT(1,authenticate(7458,4521));
    TEST_ASSERT_EQUAL_INT(-1,authenticate(2478,2655));
    TEST_ASSERT_EQUAL_INT(-1,authenticate(5698,2055));
    TEST_ASSERT_EQUAL_INT(-1,authenticate(3256,8954));
    TEST_ASSERT_EQUAL_INT(-1,authenticate(6458,4269));
}

void test_itemCount(void)
{
    TEST_ASSERT_EQUAL_INT(1,itemCount(1));
    TEST_ASSERT_EQUAL_INT(1,itemCount(3));
    TEST_ASSERT_EQUAL_INT(0,itemCount(6));
}

void test_deno(void)
{
    TEST_ASSERT_EQUAL_INT(1,deno(500));
    TEST_ASSERT_EQUAL_INT(1,deno(200));
    TEST_ASSERT_EQUAL_INT(1,deno(100));
    TEST_ASSERT_EQUAL_INT(1,deno(50));
    TEST_ASSERT_EQUAL_INT(1,deno(20));
    TEST_ASSERT_EQUAL_INT(1,deno(10));
    TEST_ASSERT_EQUAL_INT(1,deno(5));
    TEST_ASSERT_EQUAL_INT(0,deno(60));
    TEST_ASSERT_EQUAL_INT(0,deno(45));
}

void test_cardIndex()
{
    TEST_ASSERT_EQUAL_INT(0,cardIndex(2478));
    TEST_ASSERT_EQUAL_INT(1,cardIndex(5698));
    TEST_ASSERT_EQUAL_INT(2,cardIndex(3256));
    TEST_ASSERT_EQUAL_INT(3,cardIndex(7458));
    TEST_ASSERT_EQUAL_INT(4,cardIndex(1234));
}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_authenticate);
    RUN_TEST(test_itemCount);
    RUN_TEST(test_deno);
    RUN_TEST(test_cardIndex);

    return UNITY_END();
}