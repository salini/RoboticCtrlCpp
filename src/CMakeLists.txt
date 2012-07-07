
################################################################################
#
# Generate solver libraries or dummy libraries if solver cannot be found
#
################################################################################

add_library( RoboticCtrl
    RoboticCtrl.cpp
    Task.cpp
    Constraint.cpp
    Solver.cpp
)
