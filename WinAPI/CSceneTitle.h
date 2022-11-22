#pragma once
#include "CScene.h"
#include "CTitleImage.h"

class CTitleImage;

class CSceneTitle : public CScene
{
public:
	CSceneTitle();
	virtual ~CSceneTitle();

	CSound* pSound = RESOURCE->LoadSound(L"Title", L"Sound\\Scene\\titleScreenLoop.wav");

private:
	void Init()		override;
	void Enter()	override;
	void Update()	override;
	void Render()	override;
	void Exit()		override;
	void Release()	override;
};
