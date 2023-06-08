cmake_minimum_required(VERSION 3.7)
set(PROJECT_NAME sfml_project)

project(${PROJECT_NAME})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -static")

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp DrawingCard.cpp DrawingCard.h suitEnum.h rankEnum.h Deck.cpp Deck.h Card.cpp Card.h CardHand.h CardHand.cpp CardHandScore.cpp CardHandScore.h PokerScore.cpp PokerScore.h Scores.h Position.cpp Position.h DrawingAllScores.cpp DrawingAllScores.h DrawCardHand.cpp DrawCardHand.h PokerTextScore.cpp PokerTextScore.h DrawPokerHand.cpp DrawPokerHand.h PokerTextScore1.cpp PokerTextScore1.h DrawScoreName.cpp DrawScoreName.h DrawScoreRate.cpp DrawScoreRate.h)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_executable(${PROJECT_NAME} WIN32 ${SOURCE_FILES})
else ()
    add_executable(${PROJECT_NAME} ${SOURCE_FILES})
endif ()

set(SFML_ROOT C:/SFML-2.5.1)
set(SFML_STATIC_LIBRARIES TRUE)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
#set(SFML_DIR C:/SFML/SFML-2.5.1/lib/cmake/SFML)
find_package(SFML  REQUIRED COMPONENTS audio graphics window system)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif ()