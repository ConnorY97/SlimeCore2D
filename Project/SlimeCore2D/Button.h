#pragma once
#include "GameObject.h"

class Button : public GameObject
{
public:
	Button();
	~Button();

	void OnHover();
	void OnPress();
	void Update(float deltaTime);
	void Create(glm::vec3 pos, glm::vec3 color, std::string name, glm::vec3 scale, int id);

	std::string GetText();
	void SetText(std::string newText);

private:
	std::string text = "";
};
