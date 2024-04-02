//
// Created by Тимофей Савинич on 29.03.24.
//

#pragma once
#ifndef COURSE_WORK_GAME_H
#define COURSE_WORK_GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "iostream"
#include "../preparationWindow/preparation.h"
#include "../../logicpart/logic.h"

namespace game
{
    struct ShootCoordinates
    {
        std::optional<int> x;
        std::optional<int> y;
    };

    class Game
    {
    private:
        int number{};
        std::vector<std::vector<Cell>> mapUser;
        std::vector<std::vector<Cell>> mapEnemy;
    public:
        explicit Game(sf::RenderWindow &window, sf::RectangleShape background, std::vector<std::vector<Cell>> map);
        void initMapEnemy();
        void drawMaps(sf::RenderWindow& window);
        ShootCoordinates shoot(sf::RenderWindow& window);
    };
}

#endif //COURSE_WORK_GAME_H