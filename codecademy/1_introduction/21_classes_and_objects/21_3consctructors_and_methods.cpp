#include <iostream>
#include <string>

class Song {
private:
        std::string title;
        std::string artist;
public:
        Song(std::string new_title, std::string new_artist);
        std::string get_title();
        std::string get_artist();
};
std::string Song::get_title() {
        return title;
}

std::string Song::get_artist() {
        return artist;
}
Song::Song(std::string new_title, std::string new_artist) {
        title = new_title;
        artist = new_artist;
}
int main() {
  Song back_to_black("Back to Black", "Amy Winehouse");
  std::cout << back_to_black.get_title() << "\n";
  std::cout << back_to_black.get_artist() << "\n";
}