/*!
 * \file SnakeGameMode.cpp
 * \author Quinton Skinner
 * \par Email: qsrenniks\@gmail.com
 * \par 2020/02/11
 */

#include "pch.h"
#include "SnakeGameMode.h"
#include "Level.h"
#include "GameObjectManager.h"

void SnakeGameMode::initialize()
{
  m_testLevel = std::make_shared<Level>();
  GameObjectManager::get().setLevel(m_testLevel);
}

void SnakeGameMode::render()
{
}

void SnakeGameMode::tick(float dt)
{
}

void SnakeGameMode::shutdown()
{
}
