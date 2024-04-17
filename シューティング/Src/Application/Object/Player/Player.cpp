#include "Player.h"

void Player::Update()
{
	T = Math::Matrix::CreateTranslation(pos);
}

void Player::Draw()
{
	wawaw
	Math::Rectangle rect;
	KdShaderManager::Instance().m_spriteShader.DrawTex(&tex,0,0,&rect);
}

void Player::Init()
{
	tex.Load("Asset/Texture/player.png");
	pos = {};
	T = Math::Matrix::Identity;
}

void Player::Release()
{
}
