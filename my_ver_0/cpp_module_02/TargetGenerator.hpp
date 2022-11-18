#ifndef TG_HPP
#define TG_HPP

#include "ATarget.hpp"
#include <vector>
#include <string>

class TargetGenerator
{
private:
	TargetGenerator(TargetGenerator const &orig);
	TargetGenerator &operator=(TargetGenerator const &orig);

	std::vector<ATarget *> m_targets;

public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget *t);
	void forgetTargetType(std::string const &type);
	ATarget *createTarget(std::string const &type);
};

#endif
