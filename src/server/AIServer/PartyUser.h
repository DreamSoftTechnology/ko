// PartyUser.h: interface for the CPartyUser class.
//
//////////////////////////////////////////////////////////////////////

#pragma once

class CPartyUser {
  public:
    char m_strUserID[MAX_ID_SIZE + 1]; // ĳ������ �̸�
    int  m_iUserId;                    // User�� ��ȣ
  public:
    CPartyUser();
    virtual ~CPartyUser();
};
