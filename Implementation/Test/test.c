#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
void setUp(void){}
void tearDown(void){}
char confirm;
void check(void)
{
    TEST_ASSERT_EQUAL('y',confirm);
}
/**
 * @brief Check Whether any score is present
 * @brief Check File is empty or not
 * @brief Using unit Test case
 * 
 */
int main(){
    FILE *fp;
	fp=fopen("score.txt","r");
     if(fp == NULL)
    {
        confirm='n';
    }else{
        confirm='y';
    }
    UNITY_BEGIN();
    RUN_TEST(check);
    return UNITY_END();
}
