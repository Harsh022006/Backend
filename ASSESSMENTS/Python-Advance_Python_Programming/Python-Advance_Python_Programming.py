# MusicBox - Playlist Manager
# Author: Harsh
# Module: Advance Python Programming
# Concepts Used: OOP, File Handling, Exception Handling, Tkinter GUI

from tkinter import *
from tkinter import messagebox
import os

# Make folder for playlists if not exists
if not os.path.exists("playlists"):
    os.mkdir("playlists")

# -------- Playlist Class --------
class Playlist:
    def __init__(self, name, songs):
        self.name = name.strip()
        self.songs = songs

    def save(self):
        try:
            if self.name == "" or len(self.songs) == 0:
                raise ValueError("Playlist name or song list cannot be empty!")

            file_path = f"playlists/playlist_{self.name}.txt"

            if os.path.exists(file_path):
                raise FileExistsError("Playlist already exists!")

            with open(file_path, "w") as f:
                f.write("\n".join(self.songs))

            messagebox.showinfo("Success", f"Playlist '{self.name}' saved!")
        except Exception as e:
            messagebox.showerror("Error", str(e))

# -------- GUI Application --------
class MusicBox:
    def __init__(self, root):
        self.root = root
        self.root.title("🎵 MusicBox")
        self.root.geometry("400x400")

        Label(root, text="Playlist Name:").pack()
        self.name_entry = Entry(root, width=30)
        self.name_entry.pack()

        Label(root, text="Enter Songs (one per line):").pack()
        self.song_box = Text(root, width=40, height=6)
        self.song_box.pack()

        Button(root, text="Save Playlist", command=self.save_playlist).pack(pady=5)
        Button(root, text="View Playlists", command=self.view_playlists).pack(pady=5)

        self.listbox = Listbox(root, width=40)
        self.listbox.pack()
        self.listbox.bind("<<ListboxSelect>>", self.show_songs)

        self.song_label = Label(root, text="", justify=LEFT)
        self.song_label.pack(pady=5)

    def save_playlist(self):
        name = self.name_entry.get()
        songs = self.song_box.get("1.0", END).strip().split("\n")
        playlist = Playlist(name, [s for s in songs if s.strip() != ""])
        playlist.save()
        self.view_playlists()

    def view_playlists(self):
        self.listbox.delete(0, END)
        for file in os.listdir("playlists"):
            if file.endswith(".txt"):
                self.listbox.insert(END, file.replace("playlist_", "").replace(".txt", ""))

    def show_songs(self, event):
        try:
            name = self.listbox.get(ACTIVE)
            with open(f"playlists/playlist_{name}.txt") as f:
                data = f.read()
            self.song_label.config(text=f"Songs in {name}:\n{data}")
        except:
            messagebox.showerror("Error", "File not found!")

# -------- Run App --------
root = Tk()
app = MusicBox(root)
root.mainloop()
