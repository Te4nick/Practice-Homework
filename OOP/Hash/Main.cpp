#include <iostream>
#include "Hash.h"


int main()
{
	Hash h;
	std::string command = "help", name;
	int id, group;
	while (command != "exit")
	{
		if (command == "help") std::cout <<
			"help - display this page\n" <<
			"incert <id> <group> <name> - add entry\n" <<
			"remove <id> - remove entry\n" <<
			"find <id> - find entry by id\n" <<
			"print - prints HashMap\n" <<
			"set - set default values\n" <<
			"clear - erase all data\n" <<
			"exit - close program\n";
		else if (command == "incert")
		{
			std::cin >> id >> group;
			std::getline(std::cin, name);
			h.incert(id, group, name);
		}
		else if (command == "remove")
		{
			std::cin >> id;
			h.remove(id);
		}
		else if (command == "find")
		{
			std::cin >> id;
			std::cout << h.find(id) << "\n";
		}
		else if (command == "print") h.print();
		else if (command == "set")
		{
			h.clear();
			h.incert(1344, 1, "Anohin Mihail Semenovich");
			h.incert(2134, 5, "Nekrasova Ekaterina Vitalievna");
			h.incert(3412, 3, "Nagin Boris Vsevolodovich");
			h.incert(1344, 1, "Veklich Viktor Anatolievich");
			h.incert(1344, 2, "Semenova Anastasia Sergeevna");
		}
		else if (command == "clear") h.clear();
		else std::cout << "Unknown command. Try \"help\".\n";
		command.clear();
		std::cin >> command;
	}

}
