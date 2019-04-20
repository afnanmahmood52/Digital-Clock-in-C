//---------------------------------------------------
//	Author: Afnan Mahmood
//  Filename: Digital_Clock.c
//
//	This code demonstrates how a digital clock works.
//
//---------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	// Setting the values of digits intially
	unsigned int sec_2_digit = 4;
	unsigned int sec_1_digit = 2;

	unsigned int min_2_digit = 8;
	unsigned min_1_digit = 4;

	unsigned int hr = 10;

	// In order to calculate the current time
	// we run this while loop continuously
	while (1)
	{
		// For Second 2nd digit --> 5[9]
		if (sec_2_digit == 9)
		{
			sec_2_digit = 0;
			// For Second 1st digit --> [5]9
			if (sec_1_digit == 5)
			{
				sec_1_digit = 0;
				// For min 2nd digit --> 5[9]
				if (min_2_digit == 9)
				{
					min_2_digit = 0;
					// For min 1st digit --> [5]9
					if (min_1_digit == 5)
					{
						min_1_digit = 0;
						// For Hours
						if (hr == 12)
							hr = 1;
						else hr++;
					}
					// if min_1_digit <5 then increment it
					else
					{
						min_1_digit++;
					}
				}

				// if min_2_digit <9 then increment it
				else
				{
					min_2_digit++;
				}
			}

			// if sec_1_digit <5 then increment it
			else
			{
				sec_1_digit++;
			}
		}

		// if sec_1_digit <9 then increment it
		else
		{
			sec_2_digit++;
		}


		system("cls");	//clear the screen in order to update time on the screen/second
		printf("%d%d:%d%d:%d%d\n", hr/10, hr%10, min_1_digit, min_2_digit, sec_1_digit, sec_2_digit);
		Sleep(1000);

	}

	_getch();
	return 0;
}





