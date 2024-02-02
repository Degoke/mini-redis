cmake_minimum_required(VERSION 3.13)
project(mini-redis)

set(CMAKE_CXX_STANDARD 20)
set(SERVER_FILES hashtable.cpp avl.cpp zset.cpp server.cpp)
set(CLIENT_FILES client.cpp)

add_executable(server ${SERVER_FILES})
add_executable(client ${CLIENT_FILES})
