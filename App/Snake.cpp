#include <iostream>
#include "CoreAPI.h"
#include "MainWindow.h"

int main()
{
	//auto window = sf::RenderWindow(sf::VideoMode({ 1920u, 1080u }), "Snake");
	//window.setFramerateLimit(144);

	//while (window.isOpen())
	//{
	//	while (const std::optional event = window.pollEvent())
	//	{
	//		if (event->is<sf::Event::Closed>())
	//		{
	//			window.close();
	//		}
	//	}

	//	window.clear();
	//	window.display();
	//}

	TestUIAPI();


	std::cout << "Before CoreFunctionality()" << std::endl;
	CoreFunctionality();
	std::cout << "After CoreFunctionality()" << std::endl;
	std::cout << "Hello World!" << std::endl;
	return 0;
}