//
// Created by ranvi on 2021-05-19.
//

#ifndef SPOTIFYMUSICPLAYER_ALBUM_H
#define SPOTIFYMUSICPLAYER_ALBUM_H
#include <iostream>
#include "Song.cpp"

template <size_t a>
class Album {
public:
    std::string albumName;
    int yearReleased;
    int songNumber;
    double albumLength;
    std::string genre;
    Song songs[a];
};


#endif //SPOTIFYMUSICPLAYER_ALBUM_H
