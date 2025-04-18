#include <vector>
#include <string>
#include "h_MusicPlayer.hpp"

//MusicPlayer:: (method from class MusicPlayer)
//Song:: (method from class Song)
//MusicPlayer::Song:: (method from class MusicPlayer communicating into inner Song class)

//constructor unknown MusicPlayer class:
MusicPlayer::MusicPlayer(): currentSong(0), isPlaying(false), volume(50) {}

//method Song class:
string MusicPlayer::Song::getTitle(){
  return title;
}
string MusicPlayer::Song::getArtist(){
  return artist;
}

//method of MusicPlayer:
void MusicPlayer::addSong(const Song &song){
  return playlist.push_back(song);
}

void MusicPlayer::play(){
  if(!playlist.empty()){
    isPlaying = true;
  }
}

void MusicPlayer::pause(){
   isPlaying = false;
}

void MusicPlayer::nextSong(){
  if(!plalist.empty() && currentSongIndex < playlist.size() - 1){
    currentSongIndex++;
  }
}

void MusicPlayer::previousSong(){
  if(!playlist.empty() && currentSongIndex > 0){
    currentSongIndex--;
  }
}

int MusicPlayer::getVolume(){
  return volume;
}

void MusicPlayer::setVolume(int v){
  validateVolume(v); //private method inside of MusicPlayer
  volume = v;
}

bool MusicPlayer::isPlayingStatus(){
  return isPlaying;
}

void MusicPlayer::validateVolume(int v){
  if(v < 0){
    volume = 0;
  }
  else if(v > 100){
    volume = 100;
  }
  else{
    volume = v;
  }
}
