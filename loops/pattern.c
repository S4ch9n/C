// //rectangle patterns
#include <stdio.h>
int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

// right-half triangle
#include <stdio.h>
int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

// right-half triangle print alphabets
#include <stdio.h>
int main()
{
  int n;
  printf("enter a number : ");
  scanf("%d", &n);
  char a = 'A';
  for (int i = 0; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%c", a++);
    }
    printf("\n");
  }
  return 0;
}

// inverted Right Half Pyramid Pattern in C
#include <stdio.h>
int main()
{
  for (int i = 5; i >= 0; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

// left half triangles
#include <stdio.h>
int main()
{
  int n;
  printf("enter a number : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if ((i + j) <= n)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }
  return 0;
}
