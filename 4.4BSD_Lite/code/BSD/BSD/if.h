struct ifnet {								/* line 80 */
	struct ifnet* if_next;				/* all struct ifnets are chained */
	struct ifaddr* if_addrlist;		/* linked list of addresses per if */
	char* if_name;						/* name, e.g. 'le' or 'lo' */
	short if_unit;						/* sub-unit for lower level driver */
	u_short if_index;					/* numeric abbreviation for this if */
	short if_flags;						/*Figure 3.7 */
	short if_timer;						/* time 'til if_watchdog called */
	int if_pcount;						/* number of promiscuous listeners */
	caddr_t if_bpf;						/* packet filter structure */	/* line 89 */
	struct if_data {
		/*generic interface information */
		u_char ifi_type;					/* Figure 3.9 */
		u_char ifi_addrlen;			/* media address length */
		u_char ifi_hdrlen;				/* media header length */
		u_char ifi_mtu;					/* maximum transmission unit */
	};
};