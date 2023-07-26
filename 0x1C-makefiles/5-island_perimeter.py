#!/usr/bin/python3
"""Module that houses the function to calculate the perimeter of a grid"""

def island_perimeter(grid):
    """Function to calculate the perimeter of a grid

    Returns:
        int: perimeter of the grid.
    """
    return len(grid[0]) * 2
