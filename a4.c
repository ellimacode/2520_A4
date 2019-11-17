/* Name: Camille Cua
 * Student ID: 1046663
 * Email: ccua@uoguelph.ca */

#include "a4.h"

/* Resources:
 * djb2 hash function: http://www.cse.yorku.ca/~oz/hash.html
 * https://www.esa.org/tiee/search/src/hash.c
 * Google, GeeksForGeeks
 * ----------------------------------
 * hash1 for key last_name
 * hash2 for key license_no
 * hash3 for key issue_date
 * ----------------------------------
 */


int hash1(char *string , int hash_size)
{
  unsigned hash_val = 0;
  
  for (; *string != '\0'; string++)
  {
	  hash_val = ((unsigned char) *string) + 23 * hash_val;
  }
  
  hash_val = hash_val % hash_size;
  
  return (int)hash_val;
}


int hash2(char *string, int hash_size)
{
  unsigned long hash_val = 0;
  unsigned long pow = 33;
	
  for(; *string != '\0'; string++) 
  {
	  hash_val = (hash_val + ((*string) - 'A' + 1)* pow);
	  pow = (pow * 6599);
  }
	
  hash_val = hash_val % hash_size;
	
  return (int)hash_val;
}



int hash3(char *string, int hash_size)
{
  unsigned long hash_val = 0;
  unsigned long pow = 31;
	
  for(; *string != '\0'; string++)
  {
	  hash_val = (hash_val + ((*string) - 'A' + 1)* pow);
	  pow = (pow * 6599);
  }
	
  hash_val = hash_val % hash_size;
	
  return (int)hash_val;
}

