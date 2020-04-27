#pragma once
#include "Renderer2D.h"
#include "Player.h"

class ObjectManager
{
public:
	ObjectManager(Renderer2D* renderer);
	~ObjectManager();

	GameObject* CreateGameObject(glm::vec3 pos, glm::vec2 size, glm::vec3 color);
	GameObject* CreateQuad(glm::vec3 pos, glm::vec2 size = glm::vec2(1), glm::vec3 color = glm::vec3(1));
	GameObject* CreateQuad(glm::vec3 pos, glm::vec2 size, Texture* tex);
	Player* CreatePlayer(glm::vec3 pos, glm::vec2 size = glm::vec2(1), glm::vec3 color = glm::vec3(1));

	void Update(float deltaTime);

	GameObject* Get(int index);
	int Size();
protected:
	Renderer2D* renderer = nullptr;
	std::vector<GameObject*> objects;
};
