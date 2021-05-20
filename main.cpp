#include <iostream>


#include "Song.h"
#include "Album.h"

int main() {

Album album;
Song songs[14] ={{"Kendrick Lamar", "BLOOD", "Rap",  1.58, album}, {"Kendrick Lamar", "DNA", "Rap",  3.05, album}, {"Kendrick Lamar", "YAH", "Rap",  2.40, album},
                 {"Kendrick Lamar", "Element", "Rap",  3.28, album}, {"Kendrick Lamar", "FEEL", "Rap",  3.34, album},{"Kendrick Lamar", "Loyalty (FEAT. Rihanna)", "Rap",  3.47, album},
                 {"Kendrick Lamar", "PRIDE", "Rap",  4.35, album}, {"Kendrick Lamar", "HUMBLE", "Rap",  2.57, album},{"Kendrick Lamar", "LUST", "Rap",  5.07, album},
                 {"Kendrick Lamar", "LOVE (FEAT. ZACARI)", "Rap",  3.33, album}, {"Kendrick Lamar", "XXX (FEAT. U2)", "Rap",  4.14, album},{"Kendrick Lamar", "FEAR", "Rap",  7.40, album},
                 {"Kendrick Lamar", "GOD", "Rap",  4.08, album}, {"Kendrick Lamar", "DUCKWORTH", "Rap",  4.08, album},
                 };
    /*
    std::string artist;
    std::string songName;
    std::string genre;
    double length;
    Album albumName;
     * */


    album.artistName = "Kendrick Lamar";
    album.albumName ="Damn";
    album.albumLength = 55;
    album.genre = "Rap";
    album.songNumber  = 14;
    album.yearReleased = 2017;
    album.song songs;



}
