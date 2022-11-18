#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
	std::map<std::string const &, ATarget *>::iterator bit = m.begin();
	std::map<std::string const &, ATarget *>::iterator eit = m.end();

	while (bit != eit)
	{
		delete bit->second;
		++bit;
	}
	m.clear();
}

void TargetGenerator::learnTargetType(ATarget *t)
{
	if (t)
		m.insert(std::pair<std::string const &, ATarget *>(t->getType(), t->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &t)
{
	std::map<std::string const &, ATarget *>::iterator it = m.find(t);
	if (it != m.end())
		delete it->second;
	m.erase(t);
}

ATarget *TargetGenerator::createTarget(std::string const &t)
{
	ATarget *target = m[t];
	if (target)
		return target->clone();
	return 0;
}
