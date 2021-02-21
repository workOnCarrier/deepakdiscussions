#include <stdio.h>

float temperature[] = { 13.0, 2.0, 14.0, 3.0, 3.0, 18.0, 11.0,
						4.0, 20.0, 11.0, 5.0, 18.0, 13.0, 6.0,
						17.0, 12.0, 7.0, 16.0, 9.0, 8.0, 16.0,
						10.0, 9.0, 13.0, 9.0, 10.0, 12.0, 9.0,
						11.0, 11.0, 7.0,
						13.0, 2.0, 14.0, 3.0, 3.0, 18.0, 11.0,
						4.0, 20.0, 11.0, 5.0, 18.0, 13.0, 6.0,
						27.0, 12.0, 7.0, 16.0, 9.0, 8.0, 16.0,
						10.0, 9.0, 13.0, 9.0, 10.0, 12.0, 9.0,
						11.0, 11.0, 7.0 ,
						13.0, 2.0, 14.0, -3.0, 3.0, 18.0, 11.0,
						4.0, 20.0, 11.0, 5.0, 18.0, 13.0, 6.0,
						17.0, 12.0, 7.0, 16.0, 9.0, 8.0, 16.0,
						10.0, 9.0, 13.0, 9.0, 10.0, 12.0, 9.0,
						11.0, 11.0, 7.0 };


int main() {
	size_t size_of_array = sizeof(temperature);
	printf("size of temperature is %d\n", size_of_array);
	float city_temperature_table[3][31];
	int temperature_input_count = 0;
	// float temperature_input;
	// scanf("%f", &temperature_input);
	for (int city_count = 0; city_count < 3; city_count++) {
		for (int day_count = 0; day_count < 31; day_count++, temperature_input_count++) {
			city_temperature_table[city_count][day_count] = temperature[temperature_input_count];
			// city_temperature_table[city_count][day_count] = temperature_input;
		}
	}
	int city_count_out;
	for (city_count_out = 0; city_count_out < 3; city_count_out++) {
		for (int day_count_out = 0; day_count_out < 31; day_count_out++) {
			// printf("for city %d, for day %d, temperature=%f \n", city_count_out+1, day_count_out+1, city_temperature_table[city_count_out][day_count_out]);
			// city_temperature_table[city_count][day_count] = temperature_input;
		}
	}
	// find maximum
	int city_with_max = 0;
	int day_with_max = 0;
	for (int city_count_max = 0; city_count_max < 3; city_count_max++) {
		for (int day_count_max = 0; day_count_max < 31; day_count_max++) {
			printf("%f %d %d -- %f %d %d\n", city_temperature_table[city_with_max][day_with_max], city_with_max, day_with_max, \
											city_temperature_table[city_count_max][day_count_max], city_count_max, day_count_max);
			if (city_temperature_table[city_with_max][day_with_max] < city_temperature_table[city_count_max][day_count_max]) {
				city_with_max = city_count_max;
				day_with_max = day_count_max;
			}
		}
	}
	printf(" city %d has maximum temperature %f on %d", city_with_max + 1, city_temperature_table[city_with_max][day_with_max], day_with_max + 1);
	printf(" city %d has maximum temperature %f on %d", city_count_out + 1, city_temperature_table[city_with_max][day_with_max], day_with_max + 1);

	return 0;
}


