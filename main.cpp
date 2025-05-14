#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "solver.hpp"

/* Crank-Nicolson-Method and Finite-Element-Method for the 1D heat equation:
        du/dt = alpha * d2u/dx2
        Domain --> x ∈ [0,L]
        Initial Condition --> u(x,0)
        Boundary Condition -->  u(0,t)
                                u(L,t)
        
*/

int main(){
    // Setup parameters
    const double alpha = 0.01;
    const double L = 1.0;
    const double T = 1.0;
    const int Nx = 100;
    const int Nt = 1000;
    const double dx = L / Nx;
    const double dt = T / Nt;
    const double r = alpha * dt / (2 * (dx * dx));

    // Call a method to solve the equation
    solve_crank_nicolson(alpha, L, T, Nx, Nt, dx, dt, r);
    return 0;
}