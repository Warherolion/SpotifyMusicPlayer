//
// Created by ranvi on 2021-05-19.
//

#ifndef SPOTIFYMUSICPLAYER_ALBUM_H
#define SPOTIFYMUSICPLAYER_ALBUM_H
#include <iostream>
#include <vector>
#include "Song.cpp"


class Album {
public:
    std::string albumName;
    std::string artistName;
    int yearReleased;
    int songNumber;
    double albumLength;
    std::string genre;
    std::vector<Song> song;
};


#endif //SPOTIFYMUSICPLAYER_ALBUM_H
