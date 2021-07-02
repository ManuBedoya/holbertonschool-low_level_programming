#!/usr/bin/python3
"""Module island perimeter
"""
def island_perimeter(grid):
    """find the perimeter of the island
    """
    if grid is None:
        return 0

    max_col = 0
    max_row = 0
    count = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                count += 1
        if max_col < count:
            max_col = count
        count = 0

    for col in range(len(grid[0])):
        for row in range(len(grid)):
            if grid[row][col] == 1:
                count += 1
        if max_row < count:
            max_row = count
        count = 0

    return 2 * (max_row * (max_col - 1))
