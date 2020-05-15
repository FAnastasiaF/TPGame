cmake_minimum_required(VERSION 2.8)
project(Army)

set(SOURCES ../Factories/FactoryBlack.cpp ../Factories/FactoryUnit.cpp ../Factories/FactoryWhite.cpp Army.cpp Detachment.cpp)

add_library(army SHARED ${SOURCES})

install(TARGETS army
        LIBRARY DESTINATION lib
        )
