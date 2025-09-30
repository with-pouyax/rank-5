#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int main(int argc, char **argv) {

	(void)argc;                                                                      // we ignore the argc
    int w = atoi(argv[1]);                                                         // we save the width
    int h = atoi(argv[2]);                                                         // we save the height
    int iter = atoi(argv[3]);                                                       // we save the iterations

    int board[h][w];                                          // board is a 2D array of size h x w
    int next[h][w];                                          // next is a 2D array of size h x w
    
    int x = 0;                                                // x is the current x position
    int y = 0;                                                // y is the current y position
    int pen = 0;                                              // pen is the current pen state of the pen, 0 is up, 1 is down
                                                              // down means that the pen is down and can draw
                                                              // up means that the pen is up and cannot draw
    
    char c;                                                    // c is the current character read from the standard input
    
    // Initialize
    for (int i = 0; i < h; i++)                 // we iterate through the height of the board
        for (int j = 0; j < w; j++)                //for each row we iterate through the width of the board
            board[i][j] = 0;                          // we initialize the whole board to 0
    
    // Draw

    // w, s, a, d, x came from keyboard movement and x is the pen up and down
    while (read(0, &c, 1) == 1) {                // read return -1 if end of file is reached, 1 if read successfully
        if (c == 'w' && y > 0) y--;              // if we have w and y is greater than 0, we move the pen down
        else if (c == 's' && y < h-1) y++;      // if we have s and y is less than h-1, we move the pen up
        else if (c == 'a' && x > 0) x--;        // if we have a and x is greater than 0, we move the pen left
        else if (c == 'd' && x < w-1) x++;      // if we have d and x is less than w-1, we move the pen right
        else if (c == 'x') pen = !pen;          // if we have x, we toggle the pen state
        if (pen) board[y][x] = 1;               // if the pen is down, we draw a 1 in the board grid we are at
    }
    
    // Simulate
    for (int t = 0; t < iter; t++)
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                int n = 0;
                for (int di = -1; di <= 1; di++)
                    for (int dj = -1; dj <= 1; dj++)
                        if ((di || dj) && i+di >= 0 && i+di < h && j+dj >= 0 && j+dj < w)
                            n += board[i+di][j+dj];
                next[i][j] = (board[i][j] && (n == 2 || n == 3)) || (!board[i][j] && n == 3);
            }
        }
        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++)
                board[i][j] = next[i][j];
    }
    
    // Print
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++)
            putchar(board[i][j] ? '0' : ' ');
        putchar('\n');
    }
    return 0;
}
//
//111
//111
//111
//
