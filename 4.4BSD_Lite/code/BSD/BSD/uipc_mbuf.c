struct mbuf*		/* line 92*/
	m_retry(i, t)
	int i, t;
{
	struct mbuf* m;
	m_reclaim();
#define m_retry(i, t) (struct mbuf*)0
	MGET(m, i, t);
#undef m_retry
	return (m);
}		/* line 102 */