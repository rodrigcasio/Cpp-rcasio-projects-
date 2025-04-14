#include "hClassConstructoEx.hpp"

//method def and constructor def:
//def methods:
std::string Song::get_title(){
  return title;
}

std::string Song::get_artist(){
  return artist;
}

//def constructor:
Song::Song(std::string new_title, std::string new_artirst): 
  title(new_title) artist(new_artist) {}
