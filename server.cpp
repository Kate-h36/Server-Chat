#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>
#include <mutex>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>

::std::vector<int> client_sockets;
::std::mutex client_sockets_mutex;
void handle_client(int client_sockets)
