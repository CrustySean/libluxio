#pragma once

#include "lvgl.h"

namespace lx::ui {

class IScreen {
   public:
    virtual void mount() {}
    virtual void unmount() {}
    virtual void renderScreen() = 0;
    virtual void procFrame() = 0;

    virtual lv_obj_t* getLvScreenObj() = 0;
    virtual lv_group_t* getLvInputGroup() = 0;
};

}  // namespace ui
