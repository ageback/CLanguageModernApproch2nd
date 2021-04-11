/*
 * repdigit.c
 * 
 * Copyright 2021 Mike <Mike@DESKTOP-VC39K67>
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

#include <stdbool.h> // C99 only
#include <stdio.h>

int main(int argc, char **argv)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while (n > 0 ){
		digit=n%10;
		if(digit_seen[digit])
			break;
		digit_seen[digit]=true;
		n/=10;
	}
	
	if(n>0)
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");
		
	return 0;
}

