#include <vector>
#include <string>
uisng namespace std;

class MusicPlayer{
public:
  class Song{
  private:
    string title;
    string artist;

  public:
    Song(string t, string a): title(t), artist(a) {}
    //methods of class Song
    string getTitle();
    string getArtist();
  };
  //public methods clas MusicPlayer:
  MusicPlayer(); //constructo unknown

  void addSong(const Song &song);
  void play();
  void pause();
  void nextSong();
  void perviousSong();

  int getVolume();
  void setVolume(int v);

  bool isPlayingStatus();

private: 
  //attributes class MusicPlayer 
  vector<Song> playlist;
  int currentSongSindex;
  bool isplaying;
  int volume;

  void validateVolume(int v);
};
