#include <iostream>

// Game Loop.
void ProcessInput() {}
void Tick(float deltaTime) {}
// Draw/Render
void Draw() {}

int main()
{
	// Game Loop.
	while (true)
	{
		ProcessInput();
		Tick(1.0f / 120.0f);
		Draw();
	}
}