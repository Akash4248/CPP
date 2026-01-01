#include <iostream>
#include <string>
using namespace std;

// Node structure for a song
struct Song {
    string title;
    string artist;
    float duration; // in minutes
    Song* next;

    Song(string t, string a, float d) : title(t), artist(a), duration(d), next(nullptr) {}
};

// Linked List class
class Playlist {
private:
    Song* head;
    Song* tail;
    Song* current;

public:
    Playlist() : head(nullptr), tail(nullptr), current(nullptr) {}

    // Add a song to the playlist
    void addSong(string title, string artist, float duration) {
        Song* newSong = new Song(title, artist, duration);
        if (!head) {
            head = tail = current = newSong;
        } else {
            tail->next = newSong;
            tail = newSong;
        }
        cout << "Added: " << title << " by " << artist << endl;
    }

    // Delete a song from the playlist
    void deleteSong(string title) {
        if (!head) {
            cout << "Playlist is empty!" << endl;
            return;
        }

        Song* temp = head;
        Song* prev = nullptr;

        while (temp && temp->title != title) {
            prev = temp;
            temp = temp->next;
        }

        if (!temp) {
            cout << "Song not found!" << endl;
            return;
        }

        if (temp == head) {
            head = head->next;
        } else {
            prev->next = temp->next;
        }

        if (temp == tail) {
            tail = prev;
        }

        if (current == temp) {
            current = head;
        }

        delete temp;
        cout << "Deleted: " << title << endl;
    }

    // Display all songs in the playlist
    void displayPlaylist() {
        if (!head) {
            cout << "Playlist is empty!" << endl;
            return;
        }

        Song* temp = head;
        while (temp) {
            cout << temp->title << " by " << temp->artist << " [" << temp->duration << " mins]" << endl;
            temp = temp->next;
        }
    }

    // Play the current song
    void playCurrentSong() {
        if (!current) {
            cout << "No song to play!" << endl;
            return;
        }
        cout << "Playing: " << current->title << " by " << current->artist << endl;
    }

    // Go to the next song
    void nextSong() {
        if (!current || !current->next) {
            cout << "No next song available!" << endl;
            return;
        }
        current = current->next;
        playCurrentSong();
    }

    // Reset to the first song
    void resetPlaylist() {
        current = head;
        cout << "Playlist reset to the first song." << endl;
    }

    ~Playlist() {
        while (head) {
            Song* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Main function
int main() {
    Playlist myPlaylist;

    myPlaylist.addSong("Song 1", "Artist A", 3.5);
    myPlaylist.addSong("Song 2", "Artist B", 4.0);
    myPlaylist.addSong("Song 3", "Artist C", 2.8);

    cout << "\nPlaylist:" << endl;
    myPlaylist.displayPlaylist();

    cout << "\nPlaying the current song:" << endl;
    myPlaylist.playCurrentSong();

    cout << "\nSkipping to the next song:" << endl;
    myPlaylist.nextSong();

    cout << "\nResetting playlist:" << endl;
    myPlaylist.resetPlaylist();
    myPlaylist.playCurrentSong();

    cout << "\nDeleting 'Song 2':" << endl;
    myPlaylist.deleteSong("Song 2");
    myPlaylist.displayPlaylist();

    return 0;
}
