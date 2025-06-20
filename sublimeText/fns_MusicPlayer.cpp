#include "h_MusicPlayer.hpp"
#include <vector>
#include <string>

//MusicPlayer:: (method from class from MusicPlayer)
//Song:: (method from class from Song)
//MusicPlayer::Song:: (method from class MusicPlayer communicating into inner Song class)

//constructor unknown MusicPlayer class:
MusicPlayer::MusicPlayer(): currentSongIndex(0), isPlaying(false), volume(50){}


//method Song class:
string MusicPlayer::Song::getTitle(){
	return title;
}
//method Song class:
string MusicPlayer::Song::getArtist(){
	return artist;
}
//method of MusicPlayer class
void MusicPlayer::addSong(const Song &song){
	playlist.push_back(song);
}

//method MusicPlayer:
void MusicPlayer::play(){
	if(!playlist.empty()){
		isPlaying = true;
	}
}

void MusicPlayer::pause(){
	isPlaying = false;
}

void MusicPlayer::nextSong(){
	if(!playlist.empty() && currentSongIndex < playlist.size() - 1){
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
	validateVolume(v);
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





