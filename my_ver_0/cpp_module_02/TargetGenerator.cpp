#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
	for (size_t i = 0; i < m_targets.size(); ++i)
	{
		delete m_targets.at(i);
	}
	m_targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *t)
{
	if (t)
		m_targets.push_back(t->clone());
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
	for (size_t i = 0; i < m_targets.size(); ++i)
	{
		if (type.compare(m_targets.at(i)->getType()) == 0)
		{
			delete m_targets.at(i);
			m_targets.erase(m_targets.begin() + i);
		}
	}
}

ATarget *TargetGenerator::createTarget(std::string const &type)
{
	for (size_t i = 0; i < m_targets.size(); ++i)
	{
		if (type.compare(m_targets.at(i)->getType()) == 0)
		{
			return m_targets.at(i)->clone();
		}
	}
	return 0;
}
