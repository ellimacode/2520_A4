#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int hash1(char *string, int hash_size)
{
	unsigned int hash_val;
	int i;

    for (i = 0; string[i] != '\0'; i++)
    {
		hash_val = (31*hash_val) + string[i];
	}
	
	return hash_val % hash_size;
}


int hash2(char *string, int hash_size)
{
	unsigned int hash_val;
	int i;
	
    for (i = 0; string[i] != '\0';  i++)
    {
		hash_val = (31*hash_val) + string[i];
	}
	
	return hash_val % hash_size;
}


int hash3(char *string, int hash_size)
{
	unsigned int hash_val;
	int i;
	
	for (i = 0; string[i] != '\0'; i++)
	{
		hash_val = (31*hash_val) + string[i];
	}
	
	return hash_val % hash_size;
}
