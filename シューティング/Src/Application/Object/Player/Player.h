#pragma once
#include"../GameObject.h"

class Player:public ObjectBase
{
public:
	Player(){}
	~Player(){}

private:


	void Update() override;
	void Draw()   override;
	void Init()   override;
	void Release()override;
};
