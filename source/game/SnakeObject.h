/*!
 * \file SnakeObject.h
 * \author Quinton Skinner
 * \par Email: qsrenniks\@gmail.com
 * \par 2020/02/12
 */

#ifndef SNAKEOBJECT_H
#define SNAKEOBJECT_H

#include "Object.h"

class Shader;

enum class MovementDirection : int
{
  North,
  East,
  South,
  West
};

class SnakeObject : public Object
{
public:

  virtual void initialize() override;
  virtual void tick(float dt) override;
  virtual void render() override;
  virtual void onKeyPress(int key, int action) override;

  const std::shared_ptr<Shader>& getShader() const { return m_snakeShader;};
private:
  float m_moveTimer = 0.0f;
  float m_moveIncrementDuration = 0.2f;

  MovementDirection m_currentMoveDirection = MovementDirection::West;

  std::shared_ptr<Shader> m_snakeShader = nullptr;

};

#endif