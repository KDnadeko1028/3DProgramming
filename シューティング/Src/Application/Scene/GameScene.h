#pragma once


class GameScene
{
public:
	/*
	static GameScene* Instance()
	{
		static GameScene instance;
		return &instance;
	}
	*/

	GameScene() {}
	~GameScene() { Release(); }


	void PreUpdate();
	void Update();
	void Draw();
	void Init();


private:
	void Release();

};
