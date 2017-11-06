#pragma once

static const double BLOCK_SCALE = 0.2;
static const double BLOCK_WIDTH = 1 * BLOCK_SCALE;
static const double BLOCK_HEIGHT = 1 * BLOCK_SCALE;
static const double BLOCK_LENGTH = 0.5 * BLOCK_SCALE;

class Painter {
public:
  Painter();
  ~Painter();

  void drawWorld(char** map, int** character_coordinates);
  void drawGameOverScreen();
  void drawWinScreen();

private:
  int getCharacterIndexByCoordinates(int x, int y, int** character_coordinates);

  void drawWall(double x, double y);
  void drapGhost(double x, double y);
  void drapPacman(double x, double y);
  void drawFood(int x, int y);

  void drawRectangle(double x, double y);
};
