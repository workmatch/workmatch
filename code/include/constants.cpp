#include <bits/stdc++.h>
#include "constants.hpp"

using namespace std;

const double MAX_NUM = 1e7;
const double FP_EPSILON = 0.0000001;
int VERBOSITY = -1;
double vehicle_rest_radius_cap = 1000.0;//2700.0
double rejection_window = 1800;
bool use_sla_constraint = false;
double max_cost_val = 7200;
double fraction_drivers = 1.0;
string assignment_algorithm = "FAIR_FOODY";
int batching_cap = 3;
double max_merge_cost_edt = 60;
int vehicle_explore_frac = 200;
int pct_explore_frac = 150;
// cluster pct
double cluster_pct_frac = 0.8;
double vehicle_explore_rad = 1000;
double heuristic_multiplier = 0.5;
string simulation_day = "1";
string simulation_city = "A";
double delta_time = 180;
double start_time = 0*3600;
double end_time = 24*3600;