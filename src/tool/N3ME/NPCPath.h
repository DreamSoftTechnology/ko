// NPCPath.h: interface for the CNPCPath class.
//
//////////////////////////////////////////////////////////////////////

#pragma once

#include "N3Base/N3Base.h"
#include <list>

class CLyTerrain;

class CNPCPath : public CN3Base {
  public:
    char m_strPathName[256]; // ���̸�..
    char m_strNPCName[80];   // NPC �̸�.
    int  m_iNPCID;           // NPC ����..
    int  m_iNumNPC;          // ���?..

    __Vector3 m_LTStartVertex; // ���ۿ����� �𼭸� ����..
    __Vector3 m_RBStartVertex;

    //CRect	m_rcStartRect;		// NPC����� ����.
    int m_iRegenTime; // NPC�� �׾��ٰ� �ٽ� ��Ƴ��µ� �ɸ��� �ð�.
    int m_iActType;
    int m_iZoneID;

    std::list<__Vector3> m_Path; //path�����ϴ� ����....������~����..

    CLyTerrain * m_pRefTerrain;

    DWORD m_dwColor;
    int   m_iVersion;

    __Vector3 m_LTActVertex; // ���ۿ����� �𼭸� ����..
    __Vector3 m_RBActVertex;

    unsigned char m_cAttr_Create;
    unsigned char m_cAttr_Regen;
    unsigned char m_cAttr_Group;
    unsigned char m_cAttr_Option;

  public:
    bool CheckValid();
    void TransPos(float x, float z);
    void Load(HANDLE hFile);
    void Save(HANDLE hFile);
    int  GetSize() { return m_Path.size(); }
    bool GetPath(int idx, __Vector3 * pPos); // idx° �� ��������..
    void AddPos(__Vector3 Path);             //path���ϱ�.
    void DelPrevPos();
    CNPCPath();
    virtual ~CNPCPath();
};
