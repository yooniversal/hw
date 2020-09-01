import pygame
import random
###################################################################
# 초기화 (반드시 필요)
pygame.init() 

# 화면 크기 설정
screen_width = 480
screen_height = 640
screen = pygame.display.set_mode((screen_width, screen_height))

# 화면 타이틀 설정
pygame.display.set_caption("Yoon Game") #게임 이름

# FPS
clock = pygame.time.Clock()
###################################################################

# 1. 사용자 게임 초기화 (배경 화면, 게임 이미지, 좌표, 속도, 폰트 등)
background = pygame.image.load("C:/Users/동비니/Desktop/PythonWorkspace/pygame_basic/background.png")

character = pygame.image.load("C:/Users/동비니/Desktop/PythonWorkspace/pygame_basic/character.png")
character_size = character.get_rect().size
character_width = character_size[0]
character_height = character_size[1]
character_x_pos = screen_width / 2 + character_width / 2
character_y_pos = screen_height - character_height

character_to_x = 0
character_to_y = 0
enemy_to_x = 0
enemy_to_y = 0.6

character_speed = 0.6

enemy = pygame.image.load("C:/Users/동비니/Desktop/PythonWorkspace/pygame_basic/enemy.png")
enemy_size = enemy.get_rect().size
enemy_width = enemy_size[0]
enemy_height = enemy_size[1]
enemy_x_pos = random.randint(0, screen_width - enemy_width) # x좌표를 랜덤으로 입력 받음
enemy_y_pos = 0 # 계속 떨어져야 함

running = True
while running:
    dt = clock.tick(30) 

    # 2. 이벤트 처리 (키보드, 마우스 등)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False 

        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                character_to_x -= character_speed
            elif event.key == pygame.K_RIGHT:
                character_to_x += character_speed
            #elif event.key == pygame.K_UP:
            #    character_to_y -= character_speed
            #elif event.key == pygame.K_DOWN:
            #    character_to_y += character_speed

        if event.type == pygame.KEYUP:
            if event.key == pygame.K_LEFT or pygame.K_RIGHT:
                character_to_x = 0
            #elif event.key == pygame.K_UP or pygame.K_DOWN:
            #    character_to_y = 0
        
    # 3. 게임 캐릭터 위치 정의

    character_x_pos += character_to_x * dt
    character_y_pos += character_to_y * dt
    enemy_y_pos += enemy_to_y * dt

    if character_x_pos < 0:
        character_x_pos = 0
    elif character_x_pos > screen_width - character_width:
        character_x_pos = screen_width - character_width

    if enemy_y_pos > screen_height:
        enemy_x_pos = random.randint(0, screen_width - enemy_width)
        enemy_y_pos = 0
    
    # 4. 충돌 처리

    character_rect = character.get_rect()
    character_rect.left = character_x_pos
    character_rect.top = character_y_pos

    enemy_rect = enemy.get_rect()
    enemy_rect.left = enemy_x_pos
    enemy_rect.top = enemy_y_pos

    if character_rect.colliderect(enemy_rect):
        print("충돌했어요")
        running = False

    # 5. 화면에 그리기
    screen.blit(background, (0, 0))
    screen.blit(character, (character_x_pos, character_y_pos))
    screen.blit(enemy, (enemy_x_pos, enemy_y_pos))

    pygame.display.update()
    
pygame.quit()
