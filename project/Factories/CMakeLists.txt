cmake_minimum_required(VERSION 2.8)
project(Factories)

set(
        SOURCES
        FactoryBlack.cpp
        FactoryWhite.cpp
        FactoryUnit.cpp
)

add_library(factories SHARED ${SOURCES})
target_link_libraries(factories units)

install(TARGETS factories
        LIBRARY DESTINATION lib
        )