#include "../inc/pgh.h"

void menu(sf::RenderWindow &window) 
{
	sf::Texture menuTextureOne, menuTextureTwo, menuTextureThree, aboutTexture, menuBackground;
	menuTextureOne.loadFromFile("images/111.png");
	menuTextureTwo.loadFromFile("images/222.png");
	menuTextureThree.loadFromFile("images/333.png");
	aboutTexture.loadFromFile("images/about.png");
	menuBackground.loadFromFile("images/pingPong.png");

	sf::Sprite menuOne(menuTextureOne), menuTwo(menuTextureTwo), menuThree(menuTextureThree), about(aboutTexture), menuBg(menuBackground);
	menuOne.setPosition(100, 30);
	menuTwo.setPosition(100, 120);
	menuThree.setPosition(100, 230);
	menuBg.setPosition(600, 0);
 
	bool isMenu = true;
	int  menuNum = 0;

	//////////////////////////////МЕНЮ///////////////////
	while (isMenu)
	{
		menuOne.setColor(sf::Color::White);
		menuTwo.setColor(sf::Color::White);
		menuThree.setColor(sf::Color::White);
		menuNum = 0;
		window.clear(sf::Color(129, 181, 221));
 
		if (sf::IntRect(100, 30, 300, 50).contains(sf::Mouse::getPosition(window))) { menuOne.setColor(sf::Color::Blue); menuNum = 1; }
		if (sf::IntRect(100, 120, 300, 50).contains(sf::Mouse::getPosition(window))) { menuTwo.setColor(sf::Color::Blue); menuNum = 2; }
		if (sf::IntRect(100, 230, 300, 50).contains(sf::Mouse::getPosition(window))) { menuThree.setColor(sf::Color::Blue); menuNum = 3; }
 
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (menuNum == 1) isMenu = false;//если нажали первую кнопку, то выходим из меню 
			if (menuNum == 2) { window.draw(about); window.display(); while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)); }
			if (menuNum == 3)  { window.close(); isMenu = false; }
 
		}
 
		window.draw(menuBg);
		window.draw(menuOne);
		window.draw(menuTwo);
		window.draw(menuThree);
		
		window.display();
	}
	////////////////////////////////////////////////////
}