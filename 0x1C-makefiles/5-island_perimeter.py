#!/usr/bin/python3
"""Represent an island perimeter measure function."""


def island_perimeter(grid):
    """Returns an island representation where:

    Args:
        Grid (list): List of integers.
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid is completely surrounded by water.

    Returns: the perimeter of the island.
    """

    w = len(grid[0])
    h = len(grid)
    edges = 0
    size = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
