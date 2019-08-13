#include<stdio.h>
#include<string.h>

#define _CTR_SECURE_NO_WARNINGS
#define IN 1
#define HASHSIZE 101

static struct nlist *hashtab[HASHSIZE];	/* pointer table */

struct nlist {	/* table entry: */
	struct nlist *next;	/* next entry in chain */
	char *name;	/* defined name */
	char *defn;	/* replacement text */
};

/* hash£ºform hash value for string s */
unsigned hash(char *s)
{
	unsigned hashval;

	for (hashval = 0; *s != '\0'; s++)
		hashval = *s + 31 * hashval;
	return hashval % HASHSIZE;
}

/* lookup: look for s in hashtab */
struct nlist *lookup(char *s)
{
	struct nlist *np;

	for (np = hashtab[hash(s)]; np != NULL; np = np->next)
		if (strcmp(s, np->name) == 0)
			return np;	/* found */
	return NULL;	/* not found */

}

struct nlist *lookup(char *);
char *_strdup(char *);

/* install: put(name,defn) in hashtab */
struct nlist *install(char *name, char *defn)
{
	struct nlist *np;
	unsigned hashval;

	if ((np = lookup(name)) == NULL) {/* not found */
		np = (struct nlist *)malloc(sizeof(*np));
		if (np == NULL || (np->name = _strdup(name)) == NULL)
			return NULL;
		hashval = hash(name);
		np->next = hashtab[hashval];
		hashtab[hashval] = np;
	}
	else   /* already there */
		free((void *)np->defn);	/* free previous defn */
	if ((np->defn = _strdup(defn)) == NULL)
		return NULL;
	return np;

}

void main()
{

	getchar();
}