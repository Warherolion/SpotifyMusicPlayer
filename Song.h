//
// Created by ranvi on 2021-05-14.
//

#ifndef SPOTIFYMUSICPLAYER_SONG_H
#define SPOTIFYMUSICPLAYER_SONG_H
#include <iostream>
#include "Album.cpp"

class Song {
public:
    std::string artist;
    std::string songName;
    std::string genre;
    double length;
    Album album;
};


#endif //SPOTIFYMUSICPLAYER_SONG_H
