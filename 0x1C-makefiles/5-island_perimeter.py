#!/usr/bin/python3
"""finds the island's perimeter"""


def island_perimeter(grid):
    """solves the island puzzle"""
    y_size = len(grid)
    x_size = len(grid[0])
    perimeter = 0
    block_area = 0
    for i in range(y_size):
        for ii in range(x_size):
            if grid[i][ii] == 1:
                if i - 1 < 0 or grid[i - 1][ii] == 0:
                    block_area += 1
                if ii + 1 >= x_size or grid[i][ii + 1] == 0:
                    block_area += 1
                if i + 1 >= y_size or grid[i + 1][ii] == 0:
                    block_area += 1
                if ii - 1 < 0 or grid[i][ii - 1] == 0:
                    block_area += 1
                perimeter += block_area
                block_area = 0
    return perimeter
