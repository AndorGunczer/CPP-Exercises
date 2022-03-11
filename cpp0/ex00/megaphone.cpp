#include <string>
#include <iostream>
#include <cstdlib>

int	main(int argc, char **argv)
{
	std::string sentence[argc - 1];

	for (int i = 0; i < argc - 1; i++)
	{
		sentence[i] = argv[i + 1];
	}
	for (int i = 0; i < argc - 1; i++)
	{
		for (int j = 0; j < sentence[i].length(); j++)
		{
			sentence[i][j] = std::toupper(sentence[i][j]);
		}
		std::cout << sentence[i];
	}
}