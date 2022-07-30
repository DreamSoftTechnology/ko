// VtxPosDummy.h: interface for the CVtxPosDummy class.
//
//////////////////////////////////////////////////////////////////////

#pragma once


#include "TransDummy.h"

// ���� �̵���Ű�� ����� ������.
class CVtxPosDummy : public CTransDummy
{
public:
	CVtxPosDummy();
	virtual ~CVtxPosDummy();

// Attributes
public:
protected:
	CTypedPtrArray<CPtrArray, __VertexXyzT1*> m_SelVtxArray;	// ���õ� ����

// Operations
public:
	virtual void Tick();
	virtual void Render();
	virtual void Release();
	virtual void SetSelObj(CN3Transform* pObj);		// ���õ� ��ü �ٲٱ�
	virtual void AddSelObj(CN3Transform* pObj);	// ���õ� ��ü �߰�
	virtual BOOL MouseMsgFilter(LPMSG pMsg);			// ���콺 �޼��� ó��

	void SetSelVtx(__VertexXyzT1* pVtx);		// ���õ� �� �ٲٱ�
	void AddSelVtx(__VertexXyzT1* pVtx);				// ���õ� �� �߰�

	void AddPos(__Vector3 vAddPos) {m_vPos+=vAddPos;}
	void PosRotate(__Matrix44 vRotate,__Vector3 vCenterPos);
protected:
	virtual void TransDiff(__Vector3* pvDiffPos, __Quaternion* pqDiffRot, __Vector3* pvDiffScale);		// ���̸�ŭ ���õ� ������Ʈ���� ������Ų��.
};

