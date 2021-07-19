#include "Squad.hpp"

Squad::Squad()
{
	this->count = 0;
	this->member = NULL;
}

Squad::Squad(const Squad& copy)
{
	*this = copy;
}

Squad& Squad::operator=(const Squad& copy)
{
	this->count = copy.count;
	if (this->member != NULL)
		delete[] this->member;
	this->member = new ISpaceMarine*[copy.count];
	for (int i = 0; i < copy.count; i++)
		this->member[i] = copy.member[i]->clone();
	return *this;
}

Squad::~Squad()
{

}

int Squad::getCount() const
{
	return this->count;
}

ISpaceMarine* Squad::getUnit(int idx) const
{
	return this->member[idx];
}

int Squad::push(ISpaceMarine* unit)
{
	if (unit == NULL)
		return this->count;
	for (int i = 0; i < this->count; i++)
		if (this->member[i] == unit)
			return this->count;
	ISpaceMarine** tmp = new ISpaceMarine*[this->count + 1];
	for (int i = 0; i < this->count; i++)
		tmp[i] = this->member[i];
	tmp[this->count] = unit;
	this->count++;
	delete[] this->member;
	this->member = tmp;
	return this->count;
}
