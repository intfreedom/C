main(framep)					/* line 70*/
void* framep;
{
	cpu_startup();				/* locate and initialize devices */


	/* Attach pseudo-devices.(e.g., SLIP and loopback interfaces */
	for (pdev = pdevinit; pdev_attach != NULL; pdev++)
		(*pdev->pdev_attach)(pdev->pdev_count);
	/*
	* Initialize protocols.	Block reception of incoming packets
	* until everything is ready.
	*/
	s = splimp();
	ifinit();
	domaininit();			/* initialize network interfaces */
	splx(s);						/* initialize protocal domains */
	/* The scheduler is an infinite loop. */
	scheduler();
	/* NOTREACHED */		/* line 233 */
}