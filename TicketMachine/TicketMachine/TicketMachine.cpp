#include "TicketMachine.h"
#include <iostream>
using namespace std;
int global = 0;

TicketMachine::TicketMachine() :PRICE(0){

}

TicketMachine::~TicketMachine() {

}

void TicketMachine::showPrompt() {
	cout << "something"<<endl;
}

void TicketMachine::insertMoney(int money)
{
	balance += money;
}

void TicketMachine::showBalance()
{
	cout << balance<<endl;
}

void TicketMachine::printTicket()
{
	global += 1;
}

void TicketMachine::showTotal() 
{

}

