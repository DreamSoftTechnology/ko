// GameProcOption.cpp: implementation of the CGameProcOption class.
//
//////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "GameProcOption.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CGameProcOption::CGameProcOption() {}

CGameProcOption::~CGameProcOption() {}

void CGameProcOption::Init() {
    CGameProcedure::Init();
}

void CGameProcOption::Release() {
    CGameProcedure::Release();
}

void CGameProcOption::Render() {
    CGameProcedure::Render(); // UI �� �׹��� �⺻���� �͵� ������..
}

void CGameProcOption::Tick() {
    CGameProcedure::Tick(); // Ű, ���콺 �Է� ���..
}
