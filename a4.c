/* Name: Camille Cua
 * Student ID: 1046663
 * Email: ccua@uoguelph.ca */

#include "a4.h"

/* first hash function for last_name */
int hash1(char *string , int hash_size)
{
  int collisions, buckets;
  struct array *arrptr;

  collisions = 0;
  buckets = 0;

  arrptr = read_records();

  build_hash( arrptr, 500000 );

  buckets = str2int(string, hash_size);

  while (collisions < hash_size)
  {
    /* insert item in next empty bucket */
    if ((arrptr->hash)[buckets] == NULL)
    {
       strcpy( (arrptr->arr)[buckets].last_name, string );
    }

    /* increment bucket index and number of collisions */
    else
    {
       buckets = (buckets + 1) % hash_size;
       collisions++;
    }
  }

  return collisions;
}

/* second hash function for license_type */
int hash2(char *string, int hash_size)
{
  return 0;
}


/* third hash function for issue_date */
int hash3(char *string, int hash_size)
{
  return 0;
}

