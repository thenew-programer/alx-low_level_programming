#!/usr/bin/env python3
"""Define a function called island_perimeter"""


def island_perimeter(grid):
    """
    Return the perimeter of the island described in grid

    Args:
        grid: is a list of lists of integers
        """
    perimeter = 0
    edges = 0
    for n in range(len(grid)):
        for j in range(len(grid[n])):
            if grid[n][j] == 1:
                perimeter += 1
                if (grid[n][j - 1] == 1):
                    edges += 1
                if (grid[n - 1][j] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
