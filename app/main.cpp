#include <iostream>
#include <ctime>
#include <optional>

#include <tend.hpp>

int main(void)
{
	std::cout << "tendxx version is " << tend::version() << std::endl;

	tend::Entity entity(1, time(NULL), std::nullopt);
	tend::Alias alias(1, time(NULL), std::nullopt, entity, "My entity");

	std::cout << "My alias is " << alias.name << std::endl;
}
