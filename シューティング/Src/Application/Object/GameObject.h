#pragma once

class ObjectBase
{
public:
	ObjectBase() {}
	virtual ~ObjectBase() {}

	virtual void Update();
	virtual void Draw();
	virtual void Init();
	virtual void Release();
	void SetTex(std::string _failName);

protected:
	KdTexture tex;

	Math::Vector3 pos;
	Math::Matrix T;

	bool flg = false;

private:

};
