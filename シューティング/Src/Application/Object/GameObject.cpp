#include "GameObject.h"

void ObjectBase::Update()
{
}

void ObjectBase::Draw()
{
}

void ObjectBase::Init()
{
}

void ObjectBase::Release()
{
}

void ObjectBase::SetTex(std::string _fileName)
{
	tex.Load(_fileName);
}
