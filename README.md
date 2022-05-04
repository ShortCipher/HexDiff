HexDiff
=======

CLI tool for viewing differences between two similar files.

Overview
--------

The default interface is two columns of hexadecimal values; one for each file,
with the starting offset of each line.

HexDiff displays differences by highlighting the bytes with colors.

Other uses of this tool include returning the number of differences between files,
and saving a range of differences to a new file.

HexDiff supports multiple ranges for bytes and differences.

Building (OS X / Linux)
-----------------------

	$ ./build.sh

To Do
-----

- Add option to *only* display diff lines.
- Use a structure to pass data around instead of numerous args?
- Find a workaround for global variables.
