Analyzing the file on any online analysis tool will indicate steganography, on the other hand, using binwalk, file, exiftool or strings won't indicate any clue. 
The "r3dh3av3n" string is also an indication, which is the passphrase used with steghide.The catto.jpg contains a .exe file embedded using steghide.

this command followed by the passphrase will extract the ```important.exe``` file.
```
steghide extract -sf catto.jpg
```

Upon inspection using binwalk will fool the participant but file or exiftool command will make clear that the .exe extension is fake. It is actually a .wav file.

The file renamed with .wav extension will have playable sound with a noise and also sound of cat. If uploaded to any audio spectrum analyzer tool, will reveal the flag(NB: flag might look distorted if logarithmic scale is used).