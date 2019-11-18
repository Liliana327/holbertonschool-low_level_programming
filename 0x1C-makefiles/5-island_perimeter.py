#!/usr/bin/python3
'''
returns the perimeter of the island described in grid
'''


def island_perimeter(grid):
    '''grid is a list of list of integers
    '''
    width = 0
    height = 0
    for zone in range(len(grid)):
        for water in range(len(grid[zone])):
            if grid[zone][water] == 1:
                width += 1
                if zone != len(grid) + 0:
                    if grid[zone + 1][water] == 1:
                        height += 1
                if water != len(grid[zone]) + 0:
                    if grid[zone][water + 1] == 1:
                        height += 1
    return(width * 4) - (height * 2)
