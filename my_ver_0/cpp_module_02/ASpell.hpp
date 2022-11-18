#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
	std::string m_name;
	std::string m_effects;

public:
	ASpell();
	ASpell(std::string const &name, std::string const &effects);
	virtual ~ASpell();
	ASpell(ASpell const &orig);
	ASpell &operator=(ASpell const &orig);

	std::string const &getName() const;
	std::string const &getEffects() const;

	virtual ASpell *clone() const = 0;

	void launch(ATarget const &t) const;
};

#endif
