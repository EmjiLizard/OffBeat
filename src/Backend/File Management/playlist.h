#include <string.h>
#ifndef playlist
#define playlist


typedef struct Playlist {

    char* name; //The Name of the Playlist
    char** tracklist; //The list of files assigned to the playlist, stored as their filepaths
    int size*; //Array pointer size[0] is number of tracks in playlist, size[x] is the String length of track[x-1]
} Playlist;

//Array container funcs
void arrayInit(char* playlistName);
void freePlaylist();


//Indexing and Management
char* getTrack(int index);
void addTrack(char* track);
void removeTrack(char* track);
void changeTrackIndex(char* track, int* newIndex);
void renamePlaylist(char* newName);
#endif
