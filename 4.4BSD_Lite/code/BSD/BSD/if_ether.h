struct arpcom {						/* line 95 */
	struct ifnet ac_if;					/* network-visible interface */
	u_char ac_enaddr[6];			/* ethernet hardware address */
	struct in_addr ac_ipaddr;		/* copy of ip address - XXX */
	struct ether_multi* ac_mutiaddrs;	/*list of ehter multicast addrs */
	int ac_multicnt;					/* length of ac_multiaddrs list */
};												/* line 101 */