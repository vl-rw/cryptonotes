# Cryptonotes

Program for encoding message with some password. Now (14.4.23) there
is 1.5 version - you can open program via terminal and choose what
you want to do - encode or decode message.

Follow the instructions appears. When encoding, message saved to 
the file "my-file". Old data re-writed.

I remove some functions from main file to library, so path to compiling
became a bit longer.

To compile, type:
```
make
```

You can use gcc instead. More about that [library-making](https://computer.howstuffworks.com/c15.htm).

* * *

Used cypher: [wiki](https://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher )
