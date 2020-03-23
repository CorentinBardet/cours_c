#include<stdio.h>
#include<string.h> //strlen
#include<sys/socket.h>
#include<arpa/inet.h> //inet_addr
#include<unistd.h> //sleep
#include "debug.h"
#include<errno.h>


int create_socket() {
	int socket_desc; error_create;
	socket_desc = socket(AF_INET, SOCK_STREAM, 0);
	if (socket_desc == -1) {
		error_create = errno;
		error_printf("Could not create socket");
	}
	return socket_desc;
}

int connect_socket() {
	int error_connect;
	struct sockaddr_in server;

	int socket_desc = -1;
	while (socket_desc == -1) {
		socket_desc = create_socket();
		if (socket_desc == -1) {
			sleep(2);
		}
		else {
			server.sin_addr.s_addr = inet_addr(SRV_IP);
			server.sin_family = AF_INET;
			server.sin_port = htons(SRV_PORT);
			int connection_status = -1;
			connection_status = connect(socket_desc, (struct sockaddr*) &server,
					sizeof(server));
			if (connection_status == -1) {
				error_connect = errno;
				error_printf(
						"Error to connect. Error = %d (%s). \n New attempt to connect \n",
						error_connect, strerror(error_connect));
				sleep(1);
				close(socket_desc);
				socket_desc = -1;
			}
		}
	}
	debug_printf(1, "Connect done");
	return socket_desc;
}





int main(int argc, char *argv[]) {

	socket_desc = connect_socket();
	int send_status = -1;
	while (send_status = -1) {
			char* message = "test send data \n";
			send_status = send_msg(socket_desc, message);
	}

}


