#include <vector>
#include <string>
using namespace std;

class MusicPlayer{
public:
	class Song{
	private:
		//attributes for song class:
		string title;
		string artist;

	public:
		//methods for song class:
		Song(string t, string a): title(t), artist(a){} //constructor defined

		string getTitle();
		string getArtist();
	};

	//Public methods class MusicPlayer:
	MusicPlayer(); //constructor unknown

	void addSong(const Song& song);
	void play();
	void pause();
	void nextSong();
	void previousSong();

	int getVolume();
	void setVolume(int v);

	bool isPlayingStatus();

private:
	//attributes class MusicPlayer:
	vector<Song> playlist;
	int currentSongIndex;
	bool isPlaying;
	int volume;

	void validateVolume(int v);
};