#include <allegro5/allegro.h>
#include<allegro5\allegro_primitives.h>

int main() {
	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY *display = al_create_display(500,500);

	//call some al_draw_rectangle type functions here
	al_clear_to_color(al_map_rgb(255, 255, 255));

	al_draw_rectangle(100, 200, 400, 500, al_map_rgb(255, 0, 0), 5);
	al_draw_rectangle(275, 230, 315, 255, al_map_rgb(211, 211, 211), 5);
	al_draw_rectangle(125, 230, 155, 255, al_map_rgb(211, 211, 211), 5);
	al_draw_rectangle(220, 350, 270, 500, al_map_rgb(139, 69, 19), 5);
	al_draw_triangle(300, 170, 160, 120, 290, 150, al_map_rgb(0, 0, 0), 5);
	al_flip_display();
	al_rest(5);

}