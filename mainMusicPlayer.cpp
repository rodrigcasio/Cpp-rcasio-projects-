#include <iostream>
#include "h_MusicPlayer.hpp"
#include <vector>
#include <string>
using namespace std;

int main(){

  //object1:
  MusicPlayer player;

  //add songs to the playlist (constructor from Song class):
  player.addSong(MusicPlayer::Song("Song One", "Artist A")); //it seems we are using the constructor as an argument of the method .addSong.
  player.addSong(MusicPlayer::Song("Song Two", "Artist B"));
  player.addSong(MusicPlayer::Song("Song Three". "Artist C"));


  //play music:
  player.play(); //turns bool isPlaying() = true if we added song.
                              //ternary condition: if isPlaying is true = "Yes" or "No"
  cout <<"Music is playing: "<< (player.isPlaying() ? "Yes" : "No") << endl;   //this will show yes if isPlaying is true: if we added songs in it.

  
  player.setVolume(75); //adjust volume:
  cout << "Current Volume: " << player.getVolume() << endl;

  //move to next song
  player.nextSong();
  cout <<"Playing next song. "<< endl;

  //pause music:
  player.pause(); //if we use this, turns isPlayingStatus = false.
  cout <<"Music is playing: " << (player.isPlayingStatus() ? "Yes" : "No") << endl;

  //set an invalid volume to text validation:
  player.setVolume(140);
  cout <<"Volume after setting to 140: " << player.getVolume() << endl;
  
  return 0;
}
