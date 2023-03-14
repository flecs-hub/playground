#include <playground.h>
#include <math.h>
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#else
#define EMSCRIPTEN_KEEPALIVE
#endif

static ecs_world_t *world;

int main(int argc, char *argv[]) {
    ecs_log_set_level(0);
    
    world = ecs_init();
    
    ECS_IMPORT(world, FlecsUnits);
    ECS_IMPORT(world, FlecsScript);
    ECS_IMPORT(world, FlecsGame);
    ECS_IMPORT(world, FlecsComponentsTransform);
    ECS_IMPORT(world, FlecsComponentsGeometry);
    ECS_IMPORT(world, FlecsComponentsGui);
    ECS_IMPORT(world, FlecsComponentsGraphics);
    ECS_IMPORT(world, FlecsSystemsSokol);
    ECS_IMPORT(world, FlecsMonitor);

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.app" }),
        .filename = "etc/assets/app.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.materials" }),
        .filename = "etc/assets/materials.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.tree" }),
        .filename = "etc/assets/tree.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.fence" }),
        .filename = "etc/assets/fence.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.frame" }),
        .filename = "etc/assets/frame.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.house" }),
        .filename = "etc/assets/house.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.street" }),
        .filename = "etc/assets/street.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.temple" }),
        .filename = "etc/assets/temple.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.lighthouse" }),
        .filename = "etc/assets/lighthouse.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.fountain" }),
        .filename = "etc/assets/fountain.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.windmill" }),
        .filename = "etc/assets/windmill.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.wall" }),
        .filename = "etc/assets/wall.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.wood_frame" }),
        .filename = "etc/assets/wood_frame.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.town" }),
        .filename = "etc/assets/town.flecs"
    });

    ecs_script(world, {
        .entity = ecs_entity(world, { .name = "scripts.main" }),
        .filename = "etc/assets/scene.flecs"
    });

    return ecs_app_run(world, &(ecs_app_desc_t) {
        .enable_rest = true,
        .enable_monitor = true,
        .target_fps = 60
    });
}
