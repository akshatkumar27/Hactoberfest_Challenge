#include <stdio.h>
#include <stdlib.h> 

int random(int a)
{
    int i;
    int num = (rand() % (a + 1));
    return num;
}
int function(int n)
{
    int i;

    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = random(n - 1);
        printf("this\n");
        return function(i) + function(n - 1 - i);
    }
}



int main(){
    function(6);
    return 0;
}