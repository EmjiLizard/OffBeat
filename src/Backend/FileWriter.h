#ifndef FileWriter
#define FileWriter

#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <cjson/cJSON.h>

typedef struct playlists;

playlists* load_content();
int save_file(); //returns 0 or 1 depending on successful save
char* create_playlist(char* playlist_name);
void add_track_to_playlist(char* playlist_name,char* track_name);
void remove_track_from_playlist(char* playlist_name,char* track_name);
void remove_playlist(char* playlist_name);
char* get_specific_track(char* playlist_name,int index);
char* get_next_track(char* playlist_name,int* shuffle);
void change_track_index(char* playlist_name,int initial_index,int target_index);




#endif