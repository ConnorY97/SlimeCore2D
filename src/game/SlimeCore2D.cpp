#include "pch.h"
#include "engine/Window.h"
#include "Game2D.h"

Input* Input::m_instance = 0;

int main()
{
	Window app = Window(1536, 852, "SlimeCore2D");
	Game2D game = Game2D();
	Input* inputManager = Input::GetInstance();

	while (!app.Window_shouldClose())
	{
		inputManager->Update();
		app.Update_Window();

		game.Update(app.GetDeltaTime());
		game.Draw();
	}

	delete Input::GetInstance();

	return 0;
}