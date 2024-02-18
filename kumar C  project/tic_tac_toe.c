#include <stdio.h>
#include <stdbool.h>

char board[3][3];

void initialize_board() 
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
	{
            board[i][j] = ' ' ;
        }
    }
}

void print_board() 
{
    printf("\n");
    for (int i = 0; i < 3; i++) 
    {
        printf(" | %c | %c | %c | ", board[i][0], board[i][1], board[i][2]);
        if (i != 2) 
	{
            printf("\n |---|---|---|\n");
        }
    }
    printf("\n");
}

bool check_win(char player) // Check rows, columns, and diagonals for a win
{
    for (int i = 0; i < 3; i++) 
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || (board[0][i] == player && board[1][i] == player && board[2][i] == player)) 
	{
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || (board[0][2] == player && board[1][1] == player && board[2][0] == player)) 
    {
        return true;
    }
    return false;
}

bool is_board_full() 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
	{
            if (board[i][j] == ' ') 
	    {
                return false;
            }
        }
    }
    return true;
}

int main() 
{
    char player = 'X';
    int row, col;

    initialize_board();

    while (true) 
    {
        print_board();
        // Player's turn
        printf("******Now player %c turn******\n",player);
	printf("Enter row (0-2) and column (0-2): ");
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') 
	{
            printf("******INVALID MOVE Mr.'%c' !!!TRY AGAIN WITH VALID MOVE******\n",player);
            continue;
        }

        board[row][col] = player;

        if (check_win(player)) 
	{
            print_board();
            printf("Player %c is the winner!!!!\n", player);
            break;
        } else if (is_board_full()) 
	{
            print_board();
            printf("It's a draw!!!!\n");
            break;
        }

        // Switch player for the next turn
        player = (player == 'X') ? 'Y' : 'X';
    }

    return 0;
}

