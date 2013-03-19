// StringPermutation.cpp : Defines the entry point for the console application.
//

// 《剑指Offer——名企面试官精讲典型编程题》代码
// 著作权所有者：何海涛

#include <stdio.h>

static int i = 0;

void Permutation(char* pStr, char* pBegin);

void Permutation(char* pStr)
{
    if(pStr == NULL)
        return;

    Permutation(pStr, pStr);
}

void Permutation(char* pStr, char* pBegin)
{
    if(*pBegin == '\0')
    {
        printf("*:%s\n", pStr);
    }
    else
    {
        for(char* pCh = pBegin; *pCh != '\0'; ++ pCh)
        {
            //printf("i:%d, pCh:%s\n", i++, pCh);

            char temp = *pCh;
            *pCh = *pBegin;
            *pBegin = temp;

            Permutation(pStr, pBegin + 1);

            //printf("after i:%d, pCh:%s\n", i, pCh);

            temp = *pCh;
            *pCh = *pBegin;
            *pBegin = temp;
        }
    }
}

// ====================测试代码====================
void Test(char* pStr)
{
    if(pStr == NULL)
        printf("Test for NULL begins:\n");
    else
        printf("Test for %s begins:\n", pStr);

    Permutation(pStr);

    printf("\n");
}

int main(int argc, char* argv[])
{
    Test(NULL);
/*
    char string1[] = "";
    Test(string1);

    char string2[] = "a";
    Test(string2);

    char string3[] = "ab";
    Test(string3);

    char string4[] = "abc";
    Test(string4);
*/
    // a + bcd
    // b + acd
    // c + bad
    // d + bca
    char string5[] = "abcd";
    Test(string5);
    
    return 0;
}

