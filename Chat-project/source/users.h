#pragma once
#include <string>
//#include <functional> //smart pointers
#include <vector>
namespace chat_users
{
//namespace start
//using Username = std::string;
using Name = std::string;
using Password = std::hash<std::string>;

class User
{
public:
	User(Name& login, Password& hash);
	~User() = default;
private:
	Name m_login;
	Password m_hash;
};

class UserDB
{
public:
	UserDB();
	~UserDB();
public:
	virtual User getUser(Name& login);
	virtual bool addUser(User& user);
private:
	Name m_name;
	std::vector<User> m_db;
};


//namespace end
}