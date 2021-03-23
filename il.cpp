#include <iostream>
#include <cstring>

int main(int argc, char *argv[]) {
    std::string cmdstr = "youtube-dl -i --add-metadata -x --audio-format mp3 --youtube-skip-dash-manifest --output ~/Desktop/%(title)s.%(ext)s " + (std::string)argv[1];
    system(cmdstr.c_str());
    return 0;
}