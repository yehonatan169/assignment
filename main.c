#include "my_mat.h"
#include <stdio.h>
#include <stdlib.h> 

int main()
{
  char a;
  int readed=0,i,j;
  //printf("enter\n A: to read matrix\n B: to calculate if there is a route between two vertexes \n C: to print the shortest route between two vertexes\n D: to close program");
  scanf("%c",&a);
  while(a!='D')
  {
    if(a=='A')
    {
      A();
      ans[V][V] = floydWarshall(mat);
      readed = 1;
    }
    else
    {
      if(readed==0)
      {
        //printf("error graph wasn't readed");
      }
      else
      {
        //printf("enter two vertexes\n");
    
        if(a=='B')
        {
          scanf("%d",&i);
          scanf("%d",&j);
          B(i, j);
        }
        if(a=='C')
        {
          scanf("%d",&i);
          scanf("%d",&j);
          C(i, j);
        }
      }
    }
    //printf("enter\n A: to read new matrix\n B: to calculate if there is a route between two vertexes \n C: to print the shortest route between two vertexes\n D: to close program");
    scanf("%c",&a);
  }
  return 0;
}