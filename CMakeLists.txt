cmake_minimum_required(VERSION 3.15)
project(Wirtualne_Zoo)
add_compile_options(-Wall -Wextra)
set(CMAKE_CXX_STANDARD 14)

add_executable(Wirtualne_Zoo main.cpp Player.cpp Player.h HumanPlayer.cpp HumanPlayer.h MonkeyPlayer.cpp MonkeyPlayer.h DonkeyPlayer.cpp DonkeyPlayer.h ElephantPlayer.cpp ElephantPlayer.h GameManager.cpp GameManager.h)