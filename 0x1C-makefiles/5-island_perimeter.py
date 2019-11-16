#!/usr/bin/python3
'''
returns the perimeter of the island described in grid
'''

def island_perimeter(grid):
    '''grid is a list of list of integers'''
    cont = 0
    for zone in range(len(grid)):
        for water in range(len(grid)):
            if grid[zone][water] == 1:
                if zone == 0 || grid[zone - 1][water] == 0:
                    cont += 1
                if zone == len(grid) - 1 || grid[zone + 1][water] == 0:
                    cont +=1
                if water == 0 || grid[zone][water - 1] == 0:
                    cont +=1
                if water == len(grid[zone] - 1 || grid[zone][water + 1] == 0:
                    cont +=1
    return cont
