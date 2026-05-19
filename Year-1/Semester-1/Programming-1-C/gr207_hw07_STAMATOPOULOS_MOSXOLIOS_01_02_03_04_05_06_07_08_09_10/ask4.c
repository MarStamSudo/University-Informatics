#include <stdio.h>
int main(void)
{
 int x = 10, y = 1821, *pt;
 pt = &x;
 printf("*pt:%d \n", *pt);
 pt++; /* Αφού το τρέξετε, ξανατρέξτε το αλλάζοντας σε: pt++; */
 printf("*pt:%d \n", *pt);
 /* Δείχνει σε διαφορετικές θέσεις μνήμης */
 return 0;
}
