#include "Message.h"


Message::Message(int sender_i, int receive_i, int msg, double delay):sender{sender_i},receiver{receive_i},msg{msg},delay{delay}
{
	time = 1;
}

Message::~Message()
{
}

bool Message::operator<(const Message& rhs){
	return time < rhs.time;
}