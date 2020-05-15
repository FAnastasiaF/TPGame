cmake_minimum_required(VERSION 2.8)
project(Units)

set(
        SOURCES
        Unit.cpp
        Wizard.cpp
        Elf.cpp
        Giant.cpp
        BlackWizard.cpp
        BlackElf.cpp
        BlackGiant.cpp
        WhiteWizard.cpp
        WhiteElf.cpp
        WhiteGiant.cpp
)

add_library(units SHARED ${SOURCES})

install(TARGETS units
        LIBRARY DESTINATION lib
)