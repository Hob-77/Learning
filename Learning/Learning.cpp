#include <string>
#include <iostream>

int main()
{
	const std::string correctUsername{ "bob" };
	const std::string correctPassword{ "bobby123" };

	std::string getUsername;
	std::string getPassword;

	std::cout << "Enter username: " << "\n";
	std::cin >> getUsername;
	
	std::cout << "Enter password: " << "\n";
	std::cin >> getPassword;

	bool loginUsername = (getUsername == correctUsername);
	bool loginPassword = (getPassword == correctPassword);

	bool login = (loginUsername && loginPassword);

	if (login)
	{
		std::cout << "CONGRA CONGRA" << "\n";
	}
	else
	{
		std::cout << "Get out" << "\n";
	}

	return 0;

}