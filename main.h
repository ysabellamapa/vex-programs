#pragma once

#include <string>


#include "api.h"

namespace ez {
class Drive;
class tracking_wheel;


extern pros::Controller master;
extern ez::Drive chassis;

void initialize();
void disabled();
void competition_initialize();
void autonomous();
void opcontrol();
void ez_template_extras();
void ez_screen_task();
void screen_print_tracker(ez::tracking_wheel* tracker, std::string name, int line);

void default_constants();

void drive_example();
void turn_example();
void drive_and_turn();
void wait_until_change_speed();
void swing_example();
void motion_chaining();
void combining_movements();
void interfered_example();
void odom_drive_example();
void odom_pure_pursuit_example();
void odom_pure_pursuit_wait_until_example();
void odom_boomerang_example();
void odom_boomerang_injected_pure_pursuit_example();
void measure_offsets();
#include <string>