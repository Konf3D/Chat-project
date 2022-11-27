#pragma once
#include <string>
#include "users.h"

class BaseMessage
{
public:
	BaseMessage();
	~BaseMessage();
private:
	std::string m_content;
	chat_users::User m_sender;
};

class PrivateMessage : private BaseMessage
{
	chat_users::User m_reciever;
};

class GroupMessage : private BaseMessage
{
	chat_users::UserDB& m_reciever;
};

class ChatHistory : private chat_users::UserDB
{
	std::vector<BaseMessage> data;
};