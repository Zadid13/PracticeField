// Recursion lesson
/*
prinf("Hello")- Cant call itself

I/P-> Factorial-> O/P
can call itself again from output
I/P-> Factorial<- O/P

We Need to stop this to get final ouput or to break from the loop
to do this we need a condition which is called #Base_Case#

For example:
For !5:

5!=5 X 4 X 3 X 2 X 1
4!=4 X 3 X 2 X 1
3!=3 X 2 X 1
2!=2 X 1
1!=1

Algorithm: n!= n X (n-1)!



Pseudocode:

fact(4)
fact(int n){
    if(n==1)
        return 1;
    else
        n X fact(n-1)

}

procces:

fact(4)
    4 X fact(3)
    3 X fact(2)
    2 X fact(1)
    Here n becomes 1==1 //returns 1 when base case or condition is met 
    So 1! == 1 
    And finally breaks from recursion or this loop

    

*/

#include <stdio.h>

void printsetb(int n, int cur, int count, int tot)
{
    if (cur > n)
    {
        printf("Sum of the  numbers divisble by 3 : %d\n", tot);
        return;
    }

    if (cur % 3 == 0)
    {
        printf("%d\n", cur);
        tot = tot+cur;
    }

    printsetb(n, cur + 1, count, tot);
}

int main()
{
    int n;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    printf("Numbers divisible by 3:\n");
    printsetb(n, 1, 0, 0);

    return 0;
}
