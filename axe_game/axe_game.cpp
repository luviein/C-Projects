#include "raylib.h"
#include <cstdio>

int main() {

    // window dimensions
    int width {350};
    int height {200};

    // circle coordinates
    int circle_x {175};
    int circle_y {100};

    // float root_beer {1.99};
    // double cheese_burger {5.99};
    // bool shouldHaveLunch {true};

    InitWindow(width, height, "Yenleng's Window");

    SetTargetFPS(60);
    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(WHITE); 

        // Game Logic Begins

        DrawCircle(circle_x, circle_y, 25, BLUE);
        // so that circle reaches end of window
        if(IsKeyDown(KEY_D) && circle_x < 350) {
            circle_x = circle_x + 7;
        }
        if(IsKeyDown(KEY_A) && circle_x > 0) {
            circle_x = circle_x - 7;
        }
        if(IsKeyDown(KEY_W) && circle_y > 0) {
            circle_y = circle_y - 7;
        }
        if(IsKeyDown(KEY_S) && circle_y < 200) {
            circle_y = circle_y + 7;
        }

        // Game Logic Ends
        EndDrawing();  
    }
}