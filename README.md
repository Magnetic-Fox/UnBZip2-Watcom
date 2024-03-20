# UnBZip2 for Open Watcom (16-bit targets)

This repository contains patched code of BZip2 v0.1 compression/decompression tool remade to decompress BZip2 data in memory.
I haven't patched compression algorithms yet, but it's possible that I'll do that sometime.

## Information about files inluded in this repository

The most important part of this repository are `unbzip2.c` and `unbzip2.h` codes.
`main.cpp` is provided only as a very simple testing code.

`main.cpp` contains raw data (compressed using BZip2) created from some articles from Wikipedia. These texts were created by authors listed on Wikipedia.

## Information about BZip2

I think it's good to provide some credits and information about BZip2 and where the original archive came from.

As can be found in the `bzip2.c` and `bzip2.h` codes, BZip2 was created by Julian Seward.
Here is the official site of the project: https://sourceware.org/bzip2/
You can find the original archive in the `Downloads` section.

## Why so old version?

For the first time I tried to compile the newest version, but after several hours and so many tries I still had no luck doing this. Of course the task wasn't easy - very old compiler and compiling for very old OS, such as Windows 3.11.
Then I thought of finding very old version believing that compiling it would be at least possible. At least somehow. And that's why I decided to use version yet from August 1997. It took me some time (several days, to be fair ;) ), but finally decompression algorithm was ready to use as a 16-bit program, which perfectly decompressed data in memory under Windows XP. :)

## What to use to compile this code?

The code provided here was made to compile using Open Watcom IDE, which is quite good for modern MS-DOS/WfW3.11 development.
It's possible that it would compile using old Microsoft compilers, but I haven't tested it. It's best to use Watcom for it.
In fact, this project is heavily tied to Watcom coding style, so I think there might be serious problems with compiling it outside such environment.

## Disclaimer

I've made much effort to provide here working and checked codes with hope it will be useful.
**However, these codes are provided here "AS IS", with absolutely no warranty! I take no responsibility for using them - DO IT ON YOUR OWN RISK!**

## License

As far as I know, the original code has GNU license, so probably this kind of license applies to my very simple patch too.
If You want to use this code(s), remember to give credits to the original author(s) of BZip2 and, eventually, to me too.

Remember that raw data in the test file `main.cpp` was created from articles from Wikipedia only for test purposes - it shouldn't be used in the production code.

*Bartłomiej "Magnetic-Fox" Węgrzyn,
14-20th March 2024*