#include  <stdio.h>
#include  <stdlib.h>

int  main()
{
float mat1[3][2], mat2[2][3], resp[10][10];
  int lin, col, mult;
  
  for(lin=0; lin<3; lin++)
  {
    for(col=0; col<2; col++)
    {
      printf("\nDigite o valor de Matriz 1 da L%d, C%d:\t", lin, col);
      scanf("%f", &mat1[lin][col]);
    }
  }
  
  lin=0;
  col=0;
    
  for(lin=0; lin<2; lin++)
  {
    for(col=0; col<3; col++)
    {
      printf("\nDigite o valor de Matriz 2 da L%d, C%d:\t:", lin, col);
      scanf("%f", &mat2[lin][col]);
    }
  }
  
  lin=0;
  col=0;
  
  for (lin=0;lin<2; lin++) 
  {
    for (col=0; col<2; col++) 
     {
      for (mult=0; mult<3; mult++) 
       {
         resp[lin][col] = mat1[lin][col] * (mat2[lin][mult] + resp[mult][col]); 
 
       }
     }
   }
  
  //_______________Disp Resultado_________________
  lin=0;
  col=0;
  printf("\n");
  printf("Matriz 1 x Matriz 2, resultado");
  for(lin=0; lin<3; lin++)
  {
    for(col=0; col<3; col++)
    {
      printf("%.2f\t", resp[lin][col]);
    }
    printf("\n");
  }
  printf("\n");
  
  return 0;
}