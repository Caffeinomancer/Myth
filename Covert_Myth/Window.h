#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Window
{
public:
	~Window();

	static Window* getInstance();

	sf::RenderWindow* GetWindow()
	{
		return m_Window;
	}

private:
	static Window *instance;
	
	//Private constructor so no other objects can be created
	Window();


	void CreateWindow();

	sf::RenderWindow *m_Window;

	const unsigned int m_WindowWidth = 800;
	const unsigned int m_WindowHeight = 600;

	const std::string  m_WindowName = "Myth";

protected:

};