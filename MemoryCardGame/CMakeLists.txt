##cmake_minimum_required(VERSION 3.29)
##project(MemoryCardGame)
##
##set(CMAKE_CXX_STANDARD 20)
##add_executable(MemoryCardGame main.cpp)
#cmake_minimum_required(VERSION 3.20)
#project(MemoryCardGame)
#
#set(CMAKE_CXX_STANDARD 20)
#
## Add your main.cpp and header files here
#add_executable(MemoryCardGame
#        main.cpp
#        Card.h
#        StandardCard.h
#        BonusCard.h
#        PenaltyCard.h
#        Deck.h
#        Player.h
#        Game.h
#        StandardCard.h
#)
cmake_minimum_required(VERSION 3.10)
project(MemoryCardGame)

set(CMAKE_CXX_STANDARD 11)

# Specify the source files
set(SOURCES
        main.cpp
)

# Specify the header files (optional, but good practice)
set(HEADERS
        Card.h
        StandardCard.h
        BonusCard.h
        PenaltyCard.h
        Deck.h
        Player.h
)

# Add the executable
add_executable(MemoryCardGame ${SOURCES} ${HEADERS})