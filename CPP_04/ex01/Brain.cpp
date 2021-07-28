#include "Brain.hpp"

Brain::Brain()
{
	const std::string ideas[] = {
		"🥱",
		"🥵",
		"😢",
		"😱",
		"🥶",
		"🤯",
		"🤩",
		"🥰",
		"🥳",
		"🥴",
		"🤤",
		"🤢",
		"🤧",
		"🤮",
		"🤡",
		"🤠",
		"🤥",
		"🤤",
	};
	std::cout << "Constructor Brain:";
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
		std::cout << " " << this->ideas[i];
	}
	std::cout << std::endl;
}

Brain::Brain(Brain const & copy)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = copy.getIdea(i);
}

Brain &Brain::operator=(Brain const & copy)
{
	if (this != &copy) {
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = copy.getIdea(i);
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain:";
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
		std::cout << " " << this->ideas[i];
	}
	std::cout << std::endl;
}

std::string const &Brain::getIdea(int index) const
{
	return this->ideas[index];
}

void Brain::setIdea(int index) {
	const std::string other[] = {
		"💖",
		"🧡",
		"💛",
		"💚",
		"💙",
		"💜",
		"🤎",
		"🖤",
		"🤍",
		"💗",
		"💘",
		"💝",
		"💓",
		"💞",
		"💕",
		"💟",
		"💌",
		"💔",
	};
	this->ideas[index] = other[rand() % (sizeof(other) / sizeof(std::string))];
}
