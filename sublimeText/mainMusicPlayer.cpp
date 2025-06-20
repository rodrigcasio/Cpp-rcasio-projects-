#include <iostream>
#include "h_MusicPlayer.hpp"
#include <string>
#include <vector>
using namespace std;

int main(){

	//object 1:
	MusicPlayer player;

	//add songs to the playlist (constructor from Song class)
	player.addSong(MusicPlayer::Song("Song One", "Artist A"));
	player.addSong(MusicPlayer::Song("Song Two", "Artist B"));
	player.addSong(MusicPlayer::Song("Song Three", "Artist C"));

	//Play Music
	player.play();
									//ternary condition:
	cout <<"Music is playing: " << (player.isPlayingStatus() ? "Yes" : "No") << endl;

	//Adjust volume
	player.setVolume(75);
	cout <<"Current volume "<< player.getVolume() << endl;

	//Move to the next song
	player.nextSong();
	cout <<"Playing next song. "<< endl;

	//pause music 
	player.pause();
	cout <<"Music is playing: "<<(player.isPlayingStatus() ? "Yes" : "No") << endl;

	//set an invalid volume to text validation:
	player.setVolume(150);
	cout <<"Volume after setting to 150: "<< player.getVolume() << endl;


	return 0;
}