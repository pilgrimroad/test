#include "PacketFactoryManager.h"
#include "Packet.h"
#include "Type.h"
#include "Common.h"

PacketFactoryManager *g_pPacketFactoryManager = NULL;

PacketFactoryManager::PacketFactoryManager()
{
__ENTER_FUNCTION

	m_nSize = PACKET_MAX;

	m_pPacketFactory = new PacketFactory*[m_nSize];

	for ( unsigned int i = 0; i < m_nSize; ++i )
	{
		m_pPacketFactory[i] = NULL;
	}

__LEAVE_FUNCTION
}

PacketFactoryManager::~PacketFactoryManager()
{
__ENTER_FUNCTION

	for (unsigned int i = 0; i < m_nSize; ++i )
	{
		if ( m_pPacketFactory[i] != NULL )
		{
			delete m_pPacketFactory[i];
			m_pPacketFactory[i] = NULL;
		}
	}

	delete[] m_pPacketFactory;

__LEAVE_FUNCTION
}

int PacketFactoryManager::Register( PacketFactory* pPacketFactory )
{
__ENTER_FUNCTION

	if ( pPacketFactory->GetPacketID() >= 0
		&& pPacketFactory->GetPacketID() < m_nSize )
	{
		// 重复注册
		
		AssertEx( m_pPacketFactory[pPacketFactory->GetPacketID()] == NULL,
			"Repeat Register PacketID %d", pPacketFactory->GetPacketID() );
		m_pPacketFactory[pPacketFactory->GetPacketID()] = pPacketFactory;
	}

	return TRUE;
__LEAVE_FUNCTION
	return FALSE;
}

Packet* PacketFactoryManager::CreatePacket( PacketID nPacketID )
{
__ENTER_FUNCTION

	if ( CheckPacketID(nPacketID) )
	{
		return m_pPacketFactory[nPacketID]->CreatePacket();
	}

	// 未注册的协议
	AssertEx( FALSE, "No Register PacketID %d", nPacketID );
__LEAVE_FUNCTION
	return NULL;
}

BOOL PacketFactoryManager::RemovePacket( Packet* pPacket )
{
__ENTER_FUNCTION

	if ( pPacket != NULL )
	{
		delete pPacket;
	}

	return TRUE;
__LEAVE_FUNCTION
	return FALSE;
}

UINT PacketFactoryManager::GetPacketMaxSize( PacketID nPacketID )
{
__ENTER_FUNCTION

	if ( CheckPacketID(nPacketID) )
	{
		return m_pPacketFactory[nPacketID]->GetPacketMaxSize();
	}

	// 未注册的协议
	AssertEx( FALSE, "No Register PacketID %d", nPacketID );
__LEAVE_FUNCTION
	return 0;
}

BOOL PacketFactoryManager::CheckPacketID( PacketID nPacketID )
{
__ENTER_FUNCTION

	return (nPacketID >= 0 && nPacketID < m_nSize && m_pPacketFactory[nPacketID] != NULL);

__LEAVE_FUNCTION
	return FALSE;
}


BOOL PacketFactoryManager::Init()
{
	__ENTER_FUNCTION
		return TRUE;
	__LEAVE_FUNCTION
		return FALSE;
}