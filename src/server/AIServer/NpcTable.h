// NpcTable.h: interface for the CNpcTable class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_NPCTABLE_H__07FF861B_C3CB_4EE8_B64F_E9796B110101__INCLUDED_)
#define AFX_NPCTABLE_H__07FF861B_C3CB_4EE8_B64F_E9796B110101__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CNpcTable  
{
public:
	short	m_sSid;							// MONSTER(NPC) Serial ID
	TCHAR	m_strName[MAX_ID_SIZE+1];		// MONSTER(NPC) Name
	short	m_sPid;							// MONSTER(NPC) Picture ID
	short   m_sSize;						// ĳ������ ����(100 �ۼ�Ʈ ����)
	int 	m_iWeapon_1;		// ����迭(������)
	int 	m_iWeapon_2;		// ����迭(�޼�)
	BYTE	m_byGroup;			// �Ҽ�����
	BYTE	m_byActType;		// �ൿ����
	BYTE	m_tNpcType;			// NPC Type
								// 0 : Monster
								// 1 : Normal NPC
	BYTE	m_byFamilyType;		// ������̿��� �������踦 �����Ѵ�.
	BYTE	m_byRank;			// ����
	BYTE	m_byTitle;			// ����
	int 	m_iSellingGroup;	// ������ �׷�(���ǸŸ� ��� NPC�� ��츸)
	short	m_sLevel;			// level
	int		m_iExp;				// ����ġ
	int		m_iLoyalty;			// loyalty

	int 	m_iMaxHP;			// �ִ� HP
	short	m_sMaxMP;			// �ִ� MP

	short	m_sAttack;			// ���ݰ�
	short	m_sDefense;			// ��
	short	m_sHitRate;			// Ÿ�ݼ�����
	short   m_sEvadeRate;		// ȸ�Ǽ�����
	short	m_sDamage;			// �⺻ ������
	short	m_sAttackDelay;		// ���ݵ�����
	short	m_sSpeed;			// �̵��ӵ�	
	BYTE    m_bySpeed_1;		// �⺻ �̵� Ÿ��
	BYTE    m_bySpeed_2;		// �ٴ� �̵� Ÿ��..
	short	m_sStandTime;		// ���ִ� �ð�
	int		m_iMagic1;			// ��븶�� 1
	int		m_iMagic2;			// ��븶�� 2
	int		m_iMagic3;			// ��븶�� 3	

	BYTE	m_byFireR;			// ȭ�� ���׷�
	BYTE	m_byColdR;			// �ñ� ���׷�
	BYTE	m_byLightningR;		// ���� ���׷�
	BYTE	m_byMagicR;			// ���� ���׷�
	BYTE	m_byDiseaseR;		// ���� ���׷�
	BYTE	m_byPoisonR;		// �� ���׷�
	BYTE	m_byLightR;			// �� ���׷�
	short	m_sBulk;			// ������ ũ�� (���� ���� * 100)

	BYTE	m_bySearchRange;	// �� Ž�� ����
	BYTE	m_byAttackRange;	// �����Ÿ�
	BYTE	m_byTracingRange;	// �߰ݰŸ�

	short	m_sAI;				// �ΰ����� �ε���
	
	
	BYTE	m_tItemPer;			// �������� ������ Ȯ��
	BYTE	m_tDnPer;			// ���� ������Ȯ��

	int		m_iMoney;			// �������� ��
	int		m_iItem;			// �������� ������
	BYTE	m_byDirectAttack;	// ���ݹ��( 0 : ����, 1:�հ���(��������), 2:��,�������� )
	BYTE	m_byMagicAttack;	// ��������( 0:�������� ����, 1:��������, 2:������, 3:����)
		
public:
	CNpcTable();
	virtual ~CNpcTable();

	void Initialize();

};

#endif // !defined(AFX_NPCTABLE_H__07FF861B_C3CB_4EE8_B64F_E9796B110101__INCLUDED_)