#include <stdio.h>
#define HALF_BITS_LENGTH 4
#define FULLMASK 255
#define LMASK (FULLMASK << HALF_BITS_LENGTH)//Got 11110000
#define RMASK (FULLMASK >> HALF_BITS_LENGTH)//Got 00001111
//The right side of b to be n;
#define RSET(b, n) (b = ((LMASK & b) ^ n))
//The left side of b to be n;
#define LSET(b, n) (b = ((RMASK & b) ^ (n << HALF_BITS_LENGTH)))
//Got the right side of b;
#define RGET(b) (RMASK & b)
//Got the left side of b;
#define LGET(b) ((LMASK & b) >> HALF_BITS_LENGTH)
#define GRIDW 3

int main()
{
	unsigned char b;
	for(LSET(b, 1); LGET(b) <= GRIDW*GRIDW; LSET(b, (LGET(b) + 1)))
		for(RSET(b, 1); RGET(b) <= GRIDW*GRIDW; RSET(b, (RGET(b) + 1)))
			if(LGET(b) % GRIDW != RGET(b) % GRIDW)
				printf("A = %d, B = %d\n", LGET(b), RGET(b));
	return 0;
}
