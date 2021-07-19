#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = copy._materia[i]->clone();
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	if (this != &copy)
	{
		MateriaSource::~MateriaSource();
		for (int i = 0; i < 4; i++)
			this->_materia[i] = copy._materia[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			break ;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (!type.compare("ice") || !type.compare("cure"))
		return NULL;
	AMateria* tmp = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i]->getType().compare(type))
		{
			tmp = this->_materia[i];
			this->_materia[i] = NULL;
			break ;
		}
	}
	return tmp;
}
