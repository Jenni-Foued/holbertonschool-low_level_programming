#!/usr/bin/python3
"""This module contains one function island_perimeter(grid):"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    prm = 0
    for row in grid:
        for nb in row:
            if nb == 1:
                prm += 2
    if prm > 0:
        prm += 2
    return prm
