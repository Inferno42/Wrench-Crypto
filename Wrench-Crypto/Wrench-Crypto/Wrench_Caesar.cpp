#include "Wrench_Caesar.h"

//The lazy function for lazy people
char* WCrypto_Caesar::Encrypt(const char* str, int off)
{
	offset = off;
	return Encrypt(str);
}

char* WCrypto_Caesar::Encrypt(const char* str)
{
	char* modstr = new char[sizeof(str) + 1];
	strcpy(modstr,str);
	
	//Normalize the offset
	while(offset > 25)
		offset - 25;

	//Start cycling
	for(int i = 0; i <= strlen(modstr) - 1; i++)
	{
		if(modstr[i] != ' ')
		{
			int pos = modstr[i] + offset;

			if(modstr[i] >= 65 && modstr[i] <= 90) //It is a capital letter
			{
				if(pos > 90)
				{
					modstr[i] = 65 + (pos - 90) - 1;
				}
				else
				{
					modstr[i] += offset;
				}
			}
			else if(modstr[i] >= 97 && modstr[i] <= 122) //It is a capital letter
			{
				if(pos > 122)
				{
					modstr[i] = 97 + (pos - 122) - 1;
				}
				else
				{
					modstr[i] += offset;
				}
			}
		}
	}
	return modstr;
}