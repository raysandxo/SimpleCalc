/*
 * Simple Calculator v0.1
 * 
 * Copyright 2022  <Rachel Sandover>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main()
{
	//define variables
	double operand1;
	double operand2;
	double sum;
	int x;
	
	//take user input
	printf("Enter a number: \n");
	scanf("%lf", &operand1);
	
	printf("Enter another number: \n");
	scanf("%lf", &operand2);
	
	printf("What operator? : (1) - Add (2) - Subtract (3) - Multiply (4) - Divide\n");
	scanf("%d", &x);
	
	//evaluate user input
	switch(x) {
		case 1: //add
			sum = operand1 + operand2; break;
		case 2: //subtract
			sum = operand1 - operand2; break;
		case 3: //multiply
			sum = operand1 * operand2; break;
		case 4:  //divide
			sum = operand1 / operand2; break;
			
	
		default: //throw error
		printf("Error!"); return 1;
	}

	//calculate sum
	printf("Sum = %lf", sum);
	
	return 0;
}

