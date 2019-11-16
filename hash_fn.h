/* Name: Camille Cua
 * Student ID: 1046663
 * Email: ccua@uoguelph.ca */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct record
{
  char *last_name;
  char *first_name;
  char *license_type;
};

struct array
{
  struct record *arr;
  int nelements;
  struct record **hash;
  int hash_size;
};


int hash1(char *string, int hash_size);
int hash2(char *string, int hash_size);
int hash3(char *string, int hash_size);

int str2int(char *s, int max);
struct array *read_records();
void build_hash(struct array *arrptr, int hash_size);
