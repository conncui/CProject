#include <iostream>
#include <map>



int main()
{
	std::map<std::string, int> map =
	{
		
		
		{"Java", 2014},
		{"Java2", 2017}
	};

	for (const auto &entry: map)
	{
		auto key = entry.first;
		std::cout << entry.second << '\n';
		std::cout << entry.first << '\n';
	}

	return 0;
}
