#include<stdio.h>
/*find a chinese version, but i should learn English
https://www.cntofu.com/book/114/Booting/linux-bootstrap-1.md
*/
/*Part 1.*/
void main1()
{
	/*
	1.the 80386 CPU and later CPUs define the following predefined data in CPU registers after the computer resets:
	IP 0xfff0 (DEC 65520)
	CS selector 0xf000 (DEC 61440)
	CS base 0xffff0000 (DEC 4294901760)
	real mode(实模式）, memory segmentation（内存分段机制）,real mode is supported on all x86-compatiable processors;
	the 8086 processor has a 20-bit address bus,it could work with a 0-0xFFFFF or 1 megabyte address space;20bit,ervry bit have 8bit,so 2^20*8bit=1megabyte
	But it only has 16-bit registers,which have a maximum address of 2^16-1 or 0xffff(64kilobytes).

	2.memory segmentation is used to make use of all the address space available.All memory is divided into small,fixed-size segments of 65535 bytes(64KB)
	an address consists of two parts: a segment selector, which has a base address, and an offset from this base address.
	PhysicalAddress = Segment Selector*16+Offset equal hex((0x2000 << 4) + 0x0010),results:'0x20010'
	but CS:IP is 0xffff:0xffff,then the resulting address will be: hex((0xffff << 4)+0xffff),'0x10ffef'
	which is 65520 bytes past the first megabyte.Sinece only one megabyte is accessible in real mode,0x10ffef becomes 0x00ffef

	3.the CS register consists of two parts: the visible segment selector, and the hidden base address.
	while the base address is normally formed by multiplying the segment selector value by 16,during a hardware reset the segment selector in the CS register is loaded with 0xf000
	and the base address is loaded with 0xffff0000;the processor uses this special base address until CS is changed.
	the starting address is formed by adding the base address to the value in the EIP register:
	0xffff0000+0xfff0='0xfffffff0'4294967280,which is 16bytes below 4GB.this point is called the reset vector.
	this is the memory location at which the CPU expects to find the first instruction to execute after reset.It contains
	a jump(jmp) instruction that usually points to the BIOS entry point.For example, if we look in the coreboot source code
	(src/cpu/x86/16bit/reset16.inc),we will see:

	*/

	/*left move is equal mutiply 16;is 0x move one to left;*/

	int num = 1;
	num=num << 4;
	printf("%d",num);
	getchar();
}

/*Part 2.*/
void main()
{
	/**/
}