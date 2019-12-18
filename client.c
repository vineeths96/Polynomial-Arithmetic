#include <stdio.h>
#include "header.h"

int main()
{
	while(1)
	{	
		// Declarations
		int flag = 0;
		struct node* a_poly = NULL;
		struct node* b_poly = NULL;

		// Polynomial inputs
		printf("\n*****************************************************************************");
		printf("\nEnter the coefficients as comma seperated value pair of format (power, coefficient)\n");

		flag = get_polynomial(&a_poly);	if(flag)	continue;
		flag = get_polynomial(&b_poly);	if(flag)	continue;
		
		// Division
		division(&a_poly, &b_poly);

		// Deleting lists to free up space
		delete_list(&a_poly);
		delete_list(&b_poly);
	}	
	
	
}
