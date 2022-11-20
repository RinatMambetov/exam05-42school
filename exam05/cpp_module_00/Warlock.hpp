#ifndef WL_HPP
#define WL_HPP

#include <string>
#include <iostream>

class Warlock
{
private:
	std::string name;
	std::string title;

	Warlock();
	Warlock(Warlock const &orig);
	Warlock &operator=(Warlock const &orig);

public:
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &t);

	Warlock(std::string const &n, std::string const &t);
	~Warlock();

	void introduce() const;
};

#endif
