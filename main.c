/*
 * Simple Calculator Program v0.2
 * 
 * Copyright 2022 Rachel Sandover <rachelsandover@outlook.com>
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

// declare variables
double operand1;
double operand2;
double sum;
int x;
// declare functions
void add();
void subtract();
void multiply();
void divide();
	

int main()
{
	// welcome message
	printf("SimpleCalc v0.2 by Rachel Sandover\n\n");

	//take user input
	printf("Please select an operator:\n (1) - Add\n (2) - Subtract\n (3) - Multiply\n (4) - Divide\n");
	scanf("%d", &x);
	
	printf("Enter first operand: \n");
	scanf("%lf", &operand1);
	
	printf("Enter second operand: \n");
	scanf("%lf", &operand2);
	
	
	//evaluate user input
	switch(x) {
		case 1: //add
			add(); break;
		case 2: //subtract
			subtract(); break;
		case 3: //multiply
			multiply(); break;
		case 4:  //divide
			divide(); break;
			
	
		default: //throw error
		printf("Error!"); return 1;
	}

	// display calculated sum
	printf("Sum = %lf", sum);
	
	return 0;
}

// defining functions
void add() {
	sum = operand1 + operand2;
}
void subtract() {
	sum = operand1 - operand2;
}
void multiply() {
	sum = operand1 * operand2;
}
void divide(){
	if(operand2 == 0) {
		printf("Can't divide by zero!"); //throw error if user tries to divide by zero
	}else {
		sum = operand1 / operand2;
	}
	
}

