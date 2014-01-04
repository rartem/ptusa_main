#ifndef w_tcp_client_h__
#define w_tcp_client_h__
#include "tcp_client.h"
#include <winsock2.h>

class win_tcp_client: public tcp_client
	{
	private:
		timeval tv;
		fd_set rfds;
	public:
		int InitLib();
		void DeinitLib();
		int Connect();
		void Disconnect();
		win_tcp_client(const char* client_ip, unsigned int client_port, unsigned int client_id, unsigned char alarm_subclass, unsigned int exchange_buf_size = 256, unsigned long send_receive_timeout = 100);
		virtual int Communicate( unsigned int bytestosend ) override;
		~win_tcp_client();

	};


#endif // w_tcp_client_h__
