cmake_minimum_required(VERSION 2.8)
project(Employment)

set(SOURCES ../Army/Army.cpp ProxyWar.cpp ProxyCommunication.cpp War.cpp Communication.cpp Beat.cpp Command.cpp Defend.cpp Hostilities.cpp)

add_library(employment SHARED ${SOURCES})

install(TARGETS employment
        LIBRARY DESTINATION lib
        )