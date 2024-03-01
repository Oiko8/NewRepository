/* File : pyramid.c */
#include <stdio.h>
#define SIZE 20

int main () 
{
	int i,j;
	for ( i=0 ; i<SIZE ; i++){
	   for ( j=0 ; j<(SIZE-i) ; j++) 
	      putchar(' ');
	   for ( j=0 ; j < ((2*i)+1) ; j++)
	      putchar('*');
	   printf("\n"); 
	}       



}	
  

