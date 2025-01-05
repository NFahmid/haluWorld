import pygame

pygame.init()

SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600

screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))

runnin = True

x = 300
y = 250
width = 64
height = 64
vel = 1
player = pygame.Rect(x, y, width, height)
isJump = False
jumpCount = 10
left = False
right = False
walkCount = 0

walkRight = [pygame.image.load('R1.png'), pygame.image.load('R2.png'), pygame.image.load('R3.png'), pygame.image.load('R4.png'), pygame.image.load('R5.png'), pygame.image.load('R6.png'), pygame.image.load('R7.png'), pygame.image.load('R8.png'), pygame.image.load('R9.png')]
walkLeft = [pygame.image.load('L1.png'), pygame.image.load('L2.png'), pygame.image.load('L3.png'), pygame.image.load('L4.png'), pygame.image.load('L5.png'), pygame.image.load('L6.png'), pygame.image.load('L7.png'), pygame.image.load('L8.png'), pygame.image.load('L9.png')]
bg = pygame.image.load('bg.jpg')
char = pygame.image.load('standing.png') 

def redrawGameWindow():
    global walkCount

    screen.fill((0, 0, 0))
    pygame.draw.rect(screen, (255, 0, 0), player)
    pygame.display.update()


# main loop
while runnin:
    pygame.draw.rect(screen, (255, 0, 0), player)

    key = pygame.key.get_pressed()
    if key[pygame.K_LEFT] and player.x > vel:
        player.x -= vel

    if key[pygame.K_RIGHT] and player.x < SCREEN_WIDTH - width - vel:
        player.x += vel

    if not (isJump):
        if key[pygame.K_UP] and player.y > vel:
            player.y -= vel

        if key[pygame.K_DOWN] and player.y < SCREEN_HEIGHT - height - vel:
            player.y += vel

        if key[pygame.K_SPACE]:
            isJump = True

    else:
        if jumpCount >= -10:
            neg = 1
            if jumpCount < 0:
                neg = -1
            player.y -= (jumpCount ** 2) * 0.5 * neg
            jumpCount -= 1
        else:
            isJump = False
            jumpCount = 10

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            runnin = False

    redrawGameWindow()


pygame.quit()