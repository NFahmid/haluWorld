import pygame
from pygame.locals import *

pygame.init()

SCREEN_WIDTH = 300
SCREEN_HEIGHT = 300

screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption('TicTacToe')

line_width = 6
markers = []

def draw_grid():
    bg = (255, 255, 200)
    grid = (50, 50, 50)
    screen.fill(bg)
    for x in range(1, 3):
        pygame.draw.line(screen, grid, (0, x*100), (SCREEN_WIDTH, x*100), line_width)
        pygame.draw.line(screen, grid, (x*100, 0), (x*100, SCREEN_HEIGHT), line_width)

for x in range (3):
    row = [0] * 3
    markers.append(row)


running = True
while running:
    draw_grid()

    for event in pygame.event.get():
        if event.type == QUIT:
            running = False
    pygame.display.update()

pygame.quit()