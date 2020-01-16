struct pdevinit {
	void (*pdev_attach)(int);		/* attach function */
	int pdev_count;					/* number of devices */
};