#include "framework.h"
#include "CGroundTile.h"

#include "CResourceManager.h"
#include "CRenderManager.h"
#include "CCollider.h"
#include "CObstacle.h"

#include "CPlayer.h"
#include "CMonster.h"

CGroundTile::CGroundTile()
{
}

CGroundTile::~CGroundTile()
{
}

void CGroundTile::Init()
{
	CTile::Init();

	m_strName = L"Wall";
	m_layer = Layer::GroundTile;

	AddCollider(ColliderType::Rect,
		Vector(CTile::TILESIZE, CTile::TILESIZE),
		Vector(CTile::TILESIZE / 2, CTile::TILESIZE / 2));
}

void CGroundTile::Update()
{
	CTile::Update();
}

void CGroundTile::Render()
{
	CTile::Render();

	ComponentRender();
}

void CGroundTile::Release()
{
	CTile::Release();
}

void CGroundTile::OnCollisionEnter(CCollider* pOther)
{
	// 땅타일과 충돌했을 경우 처리
}

void CGroundTile::OnCollisionStay(CCollider* pOther)
{
	// 땅타일과 충돌했을 경우 처리
	if (pOther->GetObjName() == L"플레이어")
	{
		CObstacle* OnCollisionStay();
	}

	if (pOther->GetObjName() == L"Boomfly")
	{
		CObstacle* OnCollisionStay();
	}
}

void CGroundTile::OnCollisionExit(CCollider* pOther)
{
	// 땅타일과 충돌했을 경우 처리
}
