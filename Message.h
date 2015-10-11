#pragma once
#include "BaseGameEntity.h"
#include <string>

enum message_type
{
	Msg_HiHoneyImHome,
	Msg_StewReady,
};


inline std::string MsgToStr(int msg)
{
	switch (msg)
	{
	case Msg_HiHoneyImHome:

		return "HiHoneyImHome";

	case Msg_StewReady:

		return "StewReady";

	default:

		return "Not recognized!";
	}
}

class Message
{
	int sender;
	int receiver;
	int msg;
	double delay;
	double time;
public:
	Message(int sender_i, int receive_i, int msg, double delay);
	~Message();
	bool operator<(const Message& rhs);
};

