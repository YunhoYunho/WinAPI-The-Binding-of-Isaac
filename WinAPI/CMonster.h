#pragma once
#include "CGameObject.h"
class CMonster : public CGameObject
{
public:
	CMonster();
	virtual ~CMonster();

	bool up;
	bool down;
	bool left;
	bool right;

	int m_HP;

	float m_fSpeed = 200.0f;
	float m_fTimer = 0;
	float fCooltime;
	float m_fRange = 0;

	float targetDist;

public:
	Vector m_vecMoveDir;
	Vector m_vecLookDir;
	Vector m_vecPlayerPos;

public:
	void Dead();
	void Trace();
	void PingPong();

	void TargetDist();
	void TargetPos();
	void CreateMissile();
	float m_fShotTimer;
	float m_fShotSpeed;

public:
	Vector GetLookDir();
	void SetLookDir(Vector vecLookDir);
	void SetMoveDir(Vector vecMoveDir);
	
private:
	void Init() override;
	void Update() override;
	void Render() override;
	void Release() override;

	void OnCollisionEnter(CCollider* pOtherCollider) override;
	void OnCollisionStay(CCollider* pOtherCollider) override;
	void OnCollisionExit(CCollider* pOtherCollider) override;
};
