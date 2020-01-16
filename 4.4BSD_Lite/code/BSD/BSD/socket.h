struct sockaddr {				/* line 120 */
	u_char sa_len;				/* total length */
	u_char sa_family;			/* address family (Figure 3.19) */
	char sa_data[14];			/* actually longer; address value */
};										/* line 124 */

struct osockaddr {			/* line 271 */
	u_short sa_family;		/* address family (Figure 3.19) */
	char sa_data[14];			/* up to 14 bytes of direct address */
};										/* 274 */