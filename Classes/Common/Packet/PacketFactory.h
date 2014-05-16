#ifndef __PACKETFACTORY_H__
#define __PACKETFACTORY_H__


namespace Packets
{
	// 消息工厂基类

	class Packet;

	class PacketFactory
	{
	public:

		PacketFactory() {}
		virtual ~PacketFactory() {}

		virtual Packet* CreatePacket() = 0;

		virtual int GetPacketID() = 0;
		virtual unsigned int GetPacketMaxSize() = 0;
	};
};

#endif // __PACKETFACTORY_H__