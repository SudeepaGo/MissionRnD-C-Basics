/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/
int isValid(char *);
int isOlder(char *dob1, char *dob2) {
	int d1 = 0, d2 = 0, m1 = 0, m2 = 0, y1 = 0, y2 = 0, p,q,t,u,i;
	p = isValid(dob1);
	q = isValid(dob2);
	if (p == 1 || q == 1) return -1;
	else
	{
		for (i = 0; i < 2; i++)
		{
			t = dob1[i] - '0';
			d1 = t + d1 * 10;
			u = dob2[i] - '0';
			d2 = u + d2 * 10;
		}
		for (i = 3; i < 5; i++)
		{
			t = dob1[i] - '0';
			m1 = t + m1 * 10;
			u = dob2[i] - '0';
			m2 = u + m2 * 10;
		}
		for (i = 6; i < 10; i++)
		{
			t = dob1[i] - '0';
			y1 = t + y1 * 10;
			u = dob2[i] - '0';
			y2 = u + y2 * 10;
		}
		if (m1 > 12 || m2 > 12) return -1;
		else if (y1 % 4 != 0 && d1 == 29) return -1;
		else if (y2 % 4 != 0 && d2 == 29) return -1;
			if (y1 > y2) return 2;
			else if (y1 < y2) return 1;
			else if (y1 == y2){
				if (m1>m2) return 2;
				else if (m1 < m2) return 1;
				else if (m1 == m2){
					if (d1>d2) return 2;
					else if (d1 < d2) return 1;
					else return 0;
			}
		}
	}
	}
int isValid(char *str)
{
	int i=0;
	if (str[2] != '-' || str[5] != '-') return 1;
	while (i < 10)
	{
		if (i != 2 || i != 5)
		{
			if (str[i] < 48 && str[i]>57) return 1;
		}
		i++;
	}
}
//if (Regex.IsMatch(theString, @"^6\.2\.[1-9]{4}\.0+$"))