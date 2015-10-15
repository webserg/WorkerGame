#include "Message.h"
#include <filesystem>


Message::Message(int sender_i, int receive_i, int msg, double delay):sender{sender_i},receiver{receive_i},msg{msg},delay{delay}
{
	using namespace std::chrono;
	milliseconds ms = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
	time = ms.count();
}

Message::~Message()
{
}

bool Message::operator<(const Message& rhs){
	return time < rhs.time;
}