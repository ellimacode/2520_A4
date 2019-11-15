/* Name: Camille Cua
 * Student ID: 1046663
 * Email: ccua@uoguelph.ca */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "hash_fn.h"

int hash1(char *string, int hash_size)
{
  unsigned long hash_val = 0;
  int i;

  for (i = 0; string[i] != '\0'; i++)
  {
    hash_val += (long)pow(a, strlen(string) - (i+1)) * string[i];
    hash_val = hash_val % hash_size;
  }
  return (int)hash;
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
