struct le_softc {								/* line 69*/
	struct arpcom sc_ac;					/* common Ethernet structures */
#define sc_if  sc.ac.ac_if					/* network-visible interface */
#define sc_addr sc.ac.ac_enaddr		/* hardware Ethernet address */
} le_softc[NLE];									/* line 95 */

leattach(hd)										/* line 106 */
struct hp_device* hd;
{
	struct lereg0* ler0;
	struct lereg2* ler2;
	struct lereg2* lemem = 0;
	struct le_softc* le = &le_softc[hd->hp_unit];
	struct ifnet* ifp = &le->sc_if;
	char* cp;
	int i;


	/*
	* Read the ethernet address off the board, one nibble at a time.
	*/
	cp = (char*)(lestd[3] + (int)hd->hp_addr);
	for (i = 0; i < sizeof(le->sc_addr); i++) {
		le->sc_addr[i] = (*++cp & 0xF) << 4;
		cp++;
		le->sc_addr[i] |= *++cp & 0xF;
		cp++;
	}
	printf("le%d: hardware address %s\n", hd->hp_unit,
		ether_sprintf(le->sc_addr));


	ifp->if_unit = hd->hp_unit;
	ifp->if_name = "le";
	ifp->if_mtu = ETHERMTU;
	ifp->if_init = leinit;
	ifp->if_reset = lereset;
	ifp->if_ioctl = leioctl;
	ifp->if_output = ether_output;
	ifp->if_start = lestart;
	ifp->if_flags = IFF_BROADCAST | IFF_SIMPLEX | IFF_MULTICAST;
	bpfattach(&ifp->if_bpf, ifp, DLT_EN10MB, sizeof(struct ether_header));
	if_attach(ifp);
	return(1);
}															/* line 162 */