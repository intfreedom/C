#define MGET(m, how, type){ \				/* line 154 */
		MALLOC((m), struct mbuf*, MSIZE,mbtypes[type],(how)); \
		if (m) {	\
			(m)->m_type = (type); \
			MBUFLOCK(mbstat.m_mtypes[type]++;) \
			(m)->m_next = (struct mbuf*)NULL;	\
			(m)->m_nextpkt = (struct mbuf*)NULL; \
			(m)->m_data = (m)->m_dat;	\
			(m)->m_flags = 0;	\
		} else \
			(m) = m_retry((how), (type));	\
}	/* line 165 */
