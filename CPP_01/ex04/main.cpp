#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc > 4)
	{
		std::cout << "Too many arguments!!" << std::endl;
		return (1);
	}
	else if (argc < 4)
	{
		std::cout << "Too few arguments!!" << std::endl;
		return (1);
	}
	std::ifstream	file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Cannot open the file!!" << std::endl;
		return (1);
	}
	else if (file.peek() == EOF)
	{
		std::cout << "Empty file!!" << std::endl;
		return (1);
	}
	std::string	line;
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Empty string!!" << std::endl;
		return (1);
	}
	std::string	extension = ".replace";
	std::string	newFile = argv[1] + extension;
	std::ofstream	replaceFile(newFile);
	if (!replaceFile.is_open())
	{
		std::cout << "Failed to create new file!!" << std::endl;
		return (1);
	}
	int	idx;
	while (file)
	{
		getline(file, line);
		idx = 0;
		while (true)
		{
			idx = line.find(s1, idx);
			if (idx == -1)
			{
				replaceFile << line;
				if (!file.eof())
					replaceFile << "\n";
				break ;
			}
			else
			{
				line = line.insert(idx, s2).erase(idx + s2.length(), s1.length());
				idx += s2.length();
			}
		}
	}
	return (0);
}