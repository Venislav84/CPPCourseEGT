#include "Shapes.h"
#include <cmath>

void Shapes::drawPentagon(SDL_Renderer* renderer, int centerX, int centerY, int side)
{
	double rr = side / (2.0 * sin(M_PI / 5.0));
	double top_x = centerX;
	double top_y = centerY - rr;

	double theta = atan2(centerY - top_y, top_x - centerX);
	for (int i = 0; i < 5; ++i) {
		double x1 = centerX + rr * cos(theta);
		double y1 = centerY - rr * sin(theta);
		double x2 = centerX + rr * cos(theta + 2 * M_PI / 5);
		double y2 = centerY - rr * sin(theta + 2 * M_PI / 5);
		SDL_RenderDrawLine(renderer, (int)(x1), (int)(y1), (int)(x2), (int)(y2));
		theta += 2 * M_PI / 5;
	}

}