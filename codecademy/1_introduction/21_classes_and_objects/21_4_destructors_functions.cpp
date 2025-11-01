#include <iostream>
#include <string>
#include "21_4_destructors_headers.hpp"
/*FUNCTIONS*/
Song::Song(std::string new_title, std::string new_artist) {
        title = new_title;
        artist = new_artist;
}
// add the Song destructor here:
std::string Song::get_title() {
        return title;
}

std::string Song::get_artist() {
        return artist;
}
Song::~Song() {
        std::cout << "Deconstructed. Goodbye, " << title << "!\n";
}