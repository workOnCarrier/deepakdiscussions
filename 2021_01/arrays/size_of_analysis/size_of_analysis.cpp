// size_of_analysis.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma warning(suppress : 4996)

union describe_int{
	char represent[4];
	int  any_value;
};

int main()
{
	int count=0;
	union describe_int my_union;

	for (; count < 10;count++) {
		my_union.any_value = count;
		printf("%d = ", count);
		for (int byte_count = 0; byte_count < 4; byte_count++) {
			for (int bit_count = 0; bit_count < 8; bit_count++) {
				unsigned char to_present;
				to_present = (my_union.represent[byte_count] >> bit_count) & 1;
				printf("%u", to_present);
			}
			printf(" ");
		}
		printf("\n");
	}
	scanf_s("%d", &count, 1);
    return 0;
}

