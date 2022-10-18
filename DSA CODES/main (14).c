#include<stdio.h>
int
main ()
{
  int a[5][4];
  int *ptr = &a[0][0];
  for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 4; j++)
	{
	  printf ("enter the element %d %d", i, j);
	  scanf ("%d", &a[i][j]);
	}
    }
  for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 4; j++)
	{
	  printf ("%d", *(a[i]+ j));
    }
    }
  return 0;
}
