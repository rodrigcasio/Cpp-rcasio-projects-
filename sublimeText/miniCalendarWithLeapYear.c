#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int);
void add_days_to_date(int*, int*, int*, int);

int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
	int month, day, year, dayToAdd;

	printf("Enter a year (1800-10000) to check if it's a leap year: ");
	scanf("%d", &year);

	if(is_leap_year(year)){
		printf("Leap year\n");
	}
	else{
		printf("Not leap year\n");
	}

	printf("Enter a date (mm dd yyyy) and days to add: ");
	scanf("%d %d %d %d", &month, &day, &year, &dayToAdd);

	add_days_to_date(&month, &day, &year, dayToAdd);
	printf("%02d/%02d/%d\n", month, day, year);

	return 0;
}

bool is_leap_year(int a){
	if(a % 4 != 0){
		return false;
	}
	else if(a % 100 != 0){
		return true;
	}
	else if(a % 400 != 0){
		return false;
	}
	else{
		return true;
	}
}

void add_days_to_date(int *mm, int *dd, int *yy, int days_to_add){
	while(days_to_add > 0){
		//calculate days in current month (accounting for leap year)
		int days_in_current_month = days_in_month[*mm];
		if(*mm == 2 && is_leap_year(*yy)){
			days_in_current_month = 29;
		}

		// Days remaining until end of month:
		int days_until_month_end = days_in_current_month - *dd + 1;

		if(days_to_add >= days_until_month_end){
			//move to next month
			days_to_add -= days_until_month_end;
			*dd = 1;
			if(*mm == 12){
				*mm = 1;	
				(*yy)++;  //next year 
			}
			else{
				(*mm)++; //next month.
			}
		}
		else{
			*dd += days_to_add;
			days_to_add = 0;
		}
	}
}

