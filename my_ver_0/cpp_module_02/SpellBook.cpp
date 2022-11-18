#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
	for (size_t i = 0; i < m_book.size(); ++i)
	{
		delete m_book.at(i);
	}
	m_book.clear();
}

void SpellBook::learnSpell(ASpell *s)
{
	if (s)
		m_book.push_back(s->clone());
}

void SpellBook::forgetSpell(std::string const &name)
{
	for (size_t i = 0; i < m_book.size(); ++i)
	{
		if (name.compare(m_book.at(i)->getName()) == 0)
		{
			delete m_book.at(i);
			m_book.erase(m_book.begin() + i);
		}
	}
}

ASpell *SpellBook::createSpell(std::string const &name)
{
	for (size_t i = 0; i < m_book.size(); ++i)
	{
		if (name.compare(m_book.at(i)->getName()) == 0)
		{
			return m_book.at(i)->clone();
		}
	}
	return 0;
}
