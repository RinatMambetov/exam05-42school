#ifndef TG_HPP
#define TG_HPP

#include "ATarget.hpp"
#include <string>
#include <map>

class TargetGenerator
{
private:
	TargetGenerator(TargetGenerator const &orig);
	TargetGenerator &operator=(TargetGenerator const &orig);

	std::map<std::string const &, ATarget *> m;

public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget *t);
	void forgetTargetType(std::string const &t);
	ATarget *createTarget(std::string const &t);
};

#endif
