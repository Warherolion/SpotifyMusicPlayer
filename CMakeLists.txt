cmake_minimum_required(VERSION 3.14)
project(SpotifyMusicPlayer)

set(CMAKE_CXX_STANDARD 14)

add_executable(SpotifyMusicPlayer main.cpp Song.cpp Song.h Album.cpp Album.h)