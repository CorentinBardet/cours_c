#include<stdio.h>
#include<string.h> //strlen
#include<sys/socket.h>
#include<arpa/inet.h> //inet_addr
#include<unistd.h> //sleep
#include<errno.h>



int create_socket(void) {
	int socket_desc = -1;
	int socket_error;
	socket_desc = socket(AF_INET, SOCK_STREAM, 0);
	if (socket_desc == -1) {
		socket_error = errno;
		error_printf("Could not create socket");
		close(socket_desc);
		socket_desc = -1;
		sleep(1);
	}
	debug_printf(0, "socket created\n", socket_desc);
	return socket_desc;
}


int client_connection(void) {
	while(1){
		int socket_desc = create_client_socket();
		struct sockaddr_in server;
		server.sin_addr.s_addr = inet_addr(SRV_IP);
		server.sin_family = AF_INET;
		server.sin_port = htons(SRV_PORT);
		int connection_status;
		if (connect(socket_desc , (struct sockaddr *)&server , sizeof(server)) < 0) {
				puts("connect error");
				return 1;
		}
		puts("Connected");
		return 0;
	}
}


int send_msg(int socket_desc, char* message) {
	int already_send = -1;
	int error_send;
	int lenght = strlen(message); //taille du msg
	while (1){
		send status = sned(socket_desc, message, lenght, 0);
		if (already_send == -1) {
			error_send = errno;
			error_printf("info not found");
		}
	}
}
