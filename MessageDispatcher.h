#pragma once
#include <set>
#include "Message.h"
#include <thread>

class MessageDispatcher
{
	std::set<Message> pqueue_messages;
public:
	MessageDispatcher();
	~MessageDispatcher();
};

