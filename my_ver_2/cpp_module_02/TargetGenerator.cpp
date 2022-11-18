#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
	std::map<std::string const &, ATarget *>::iterator it = m.begin();
	while (it != m.end())
	{
		delete it->second;
		++it;
	}
	m.clear();
}

void TargetGenerator::learnTargetType(ATarget *t)
{
	if (t)
		m.insert(std::pair<std::string const &, ATarget *>(t->getType(), t->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &n)
{
	if (m.find(n) != m.end())
		delete m.find(n)->second;
	m.erase(n);
}

ATarget *TargetGenerator::createTarget(std::string const &n)
{
	if (m[n])
		return m[n]->clone();
	return 0;
}
