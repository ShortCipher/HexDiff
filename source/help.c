#include <stdio.h>
#include "help.h"

void print_usage(int argc, char **argv)
{
	fprintf(stdout, "*** HexDiff v0.1.2 ***\n");
	fprintf(stdout, "GitHub.com/ShortCipher\n\n");

	fprintf(stdout, "Usage: %s file1 file2 [options]\n", argv[0]);
	fprintf(stdout, "Shows two columns of hexadecimal values of two different files.\n\n");

	fprintf(stdout, "Options:\n");
	fprintf(stdout, "\t-f, --file      Set the original file.\n");
	fprintf(stdout, "\t-m, --modified  Set the modified file.\n");
	fprintf(stdout, "\t-o, --output    Set the output file.\n");
	fprintf(stdout, "\t-O, --offset    Set the starting byte offset.\n");
	fprintf(stdout, "\t-L, --length    Set the length of bytes to compare.\n");
	fprintf(stdout, "\t-r, --range     Set the starting and ending byte offset range.\n");
	fprintf(stdout, "\t-R, --Range     Set the starting and ending difference offset range.\n");

	fprintf(stdout, "\t--linelength    Set the line length.\n");

	fprintf(stdout, "\t-I, --invert    Inverts selection.\n");
	fprintf(stdout, "\t-N              Print the number of differences and exit.\n");
	fprintf(stdout, "\t-D              Write differences to file and exit.\n");
	fprintf(stdout, "\t--no-color      Disables colors.\n");

	fprintf(stdout, "\t-h, --help      Display this help\n\n");

	// Add examples
	fprintf(stdout, "Examples:\n");
	fprintf(stdout, "\t%s file1 file2\n", argv[0]);
	fprintf(stdout, "\t%s -f ./original.mov -m ./mutated.mov -N\n", argv[0]);
	//fprintf(stdout, "%s -r 0:10\n", argv[0]);
	//fprintf(stdout, "%s -r 0:10 -r 5:15\n", argv[0]);
	//fprintf(stdout, "%s -R 0:10\n", argv[0]);
	//fprintf(stdout, "%s -R 0:10 -R 5:15\n", argv[0]);
	fprintf(stdout, "\n");

	fprintf(stdout, "Source code available at https://github.com/ShortCipher/HexDiff\n");
	fprintf(stdout, "(Originally forked from: https://github.com/uroboro/Hexdiff)\n\n");
}
