#include "raylib.h"
#include <cstdio>

int main() {

    // window dimensions
    int width {800};
    int height {450};

    // circle coordinates
    int circle_x {200};
    int circle_y {200};
    int circle_radius {25};

    // circle edges
    int l_circle_x {circle_x - circle_radius};
    int r_circle_x {circle_x + circle_radius};
    int u_circle_y {circle_y - circle_radius};
    int b_circle_y {circle_y + circle_radius};


    // axe coordinates
    int axe_x {400};
    int axe_y {0};
    int direction {7};
    int axe_length {50};

    // axe edges]
    int l_axe_x {axe_x};
    int r_axe_x {axe_x + axe_length};
    int u_axe_y {axe_y};
    int b_axe_y {axe_y +  axe_length};

    InitWindow(width, height, "Yenleng's Window");

    SetTargetFPS(60);
    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(WHITE); 

        // Game Logic Begins

        DrawCircle(circle_x, circle_y, circle_radius, BLUE);

        DrawRectangle(axe_x, axe_y, axe_length, axe_length, RED);

        // move the axe
        axe_y += direction;
        if (axe_y > height || axe_y < 0) {
            direction = -direction;
        } 


        // so that circle reaches end of window
        if(IsKeyDown(KEY_D) && circle_x < width) {
            circle_x += 7;
        }
        if(IsKeyDown(KEY_A) && circle_x > 0) {
            circle_x -= 7;
        }
        if(IsKeyDown(KEY_W) && circle_y > 0) {
            circle_y -= 7;
        }
        if(IsKeyDown(KEY_S) && circle_y < height) {
            circle_y += 7;
        }

        // Game Logic Ends
        EndDrawing();  
    }
}