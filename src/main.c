#include <playground.h>

int main(int argc, char *argv[]) {
    ecs_world_t *world = ecs_init();
    
    ECS_IMPORT(world, FlecsSystemsPhysics);
    ECS_IMPORT(world, FlecsSystemsSokol);

    ecs_plecs_from_file(world, "db.plecs");

    return ecs_app_run(world, &(ecs_app_desc_t) {
        .target_fps = 60, .enable_rest = true
    });
}
