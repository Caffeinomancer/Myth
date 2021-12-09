#include "Window.h"

Window::Window()
{
	CreateWindow();
}

Window::~Window()
{
	delete m_Window;
}

Window* Window::getInstance()
{
	if (!instance)
	{
		instance = new Window;
	}

	return instance;
}

void Window::CreateWindow()
{
	m_Window = new sf::RenderWindow(sf::VideoMode(m_WindowWidth, m_WindowHeight), m_WindowName);
}