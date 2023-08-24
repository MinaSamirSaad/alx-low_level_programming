#!/usr/bin/python3
"""island_perimeter module"""


def island_perimeter(grid):
    """
    Calculater the Island's perimeter

    Parameter:
        grid (array): An 0's and 1's array that represents an island (1)
        sourrounded by water (0)

    Returns:
        The island's perimeter
    """
    sz = 0
    space = 0
    common_sides = 0
    length = len(grid)
    width = len(grid[0])
    for ln in range(length):
        for w in range(width):
            if grid[ln][w] == 1:
                sz += 1
                if w > 0 and grid[ln][w - 1] == 1:
                    common_sides += 1
                if ln > 0 and grid[ln - 1][w] == 1:
                    common_sides += 1
    space = sz * 4
    return space - common_sides * 2
