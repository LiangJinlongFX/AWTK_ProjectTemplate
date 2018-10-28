#include "awtk.h"
#include "base/assets_manager.h"
#ifndef WITH_FS_RES
#include "assets/inc/styles/main.data"
#include "assets/inc/styles/default.data"
#include "assets/inc/styles/window1.data"
#include "assets/inc/ui/main.data"
#include "assets/inc/ui/window1.data"
#ifdef WITH_STB_IMAGE
#include "assets/inc/images/checked.res"
#include "assets/inc/images/earth.res"
#include "assets/inc/images/arrow_up_n.res"
#include "assets/inc/images/arrow_right_p.res"
#include "assets/inc/images/empty.res"
#include "assets/inc/images/edit_clear_p.res"
#include "assets/inc/images/arrow_up_o.res"
#include "assets/inc/images/arrow_left_o.res"
#include "assets/inc/images/arrow_left_n.res"
#include "assets/inc/images/radio_checked.res"
#include "assets/inc/images/check.res"
#include "assets/inc/images/arrow_down_n.res"
#include "assets/inc/images/arrow_down_o.res"
#include "assets/inc/images/unchecked.res"
#include "assets/inc/images/arrow_down_p.res"
#include "assets/inc/images/radio_unchecked.res"
#include "assets/inc/images/arrow_up_p.res"
#include "assets/inc/images/edit_clear_o.res"
#include "assets/inc/images/arrow_right_n.res"
#include "assets/inc/images/arrow_right_o.res"
#include "assets/inc/images/edit_clear_n.res"
#include "assets/inc/images/arrow_left_p.res"
#else
#include "assets/inc/images/arrow_right_o.data"
#include "assets/inc/images/earth.data"
#include "assets/inc/images/arrow_up_p.data"
#include "assets/inc/images/arrow_right_n.data"
#include "assets/inc/images/checked.data"
#include "assets/inc/images/arrow_right_p.data"
#include "assets/inc/images/arrow_up_o.data"
#include "assets/inc/images/empty.data"
#include "assets/inc/images/radio_unchecked.data"
#include "assets/inc/images/arrow_up_n.data"
#include "assets/inc/images/arrow_left_p.data"
#include "assets/inc/images/edit_clear_n.data"
#include "assets/inc/images/arrow_down_p.data"
#include "assets/inc/images/edit_clear_o.data"
#include "assets/inc/images/arrow_left_o.data"
#include "assets/inc/images/check.data"
#include "assets/inc/images/arrow_down_o.data"
#include "assets/inc/images/radio_checked.data"
#include "assets/inc/images/unchecked.data"
#include "assets/inc/images/arrow_down_n.data"
#include "assets/inc/images/arrow_left_n.data"
#include "assets/inc/images/edit_clear_p.data"
#endif/*WITH_STB_IMAGE*/
#ifdef WITH_STB_FONT
#ifdef WITH_MINI_FONT
#include "assets/inc/fonts/default.mini.res"
#else/*WITH_MINI_FONT*/
#include "assets/inc/fonts/default.res"
#endif/*WITH_MINI_FONT*/
#else/*WITH_STB_FONT*/
#endif/*WITH_STB_FONT*/
#endif/*WITH_FS_RES*/

ret_t assets_init(void) {
  assets_manager_t* rm = assets_manager();

#ifdef WITH_FS_RES
  assets_manager_load(rm, ASSET_TYPE_STYLE, "default");
  assets_manager_load(rm, ASSET_TYPE_FONT, "default");
#else
  assets_manager_add(rm, ui_main);
  assets_manager_add(rm, ui_window1);
  assets_manager_add(rm, image_arrow_right_o);
  assets_manager_add(rm, image_earth);
  assets_manager_add(rm, image_arrow_up_p);
  assets_manager_add(rm, image_arrow_right_n);
  assets_manager_add(rm, image_checked);
  assets_manager_add(rm, image_arrow_right_p);
  assets_manager_add(rm, image_arrow_up_o);
  assets_manager_add(rm, image_empty);
  assets_manager_add(rm, image_radio_unchecked);
  assets_manager_add(rm, image_arrow_up_n);
  assets_manager_add(rm, image_arrow_left_p);
  assets_manager_add(rm, image_edit_clear_n);
  assets_manager_add(rm, image_arrow_down_p);
  assets_manager_add(rm, image_edit_clear_o);
  assets_manager_add(rm, image_arrow_left_o);
  assets_manager_add(rm, image_check);
  assets_manager_add(rm, image_arrow_down_o);
  assets_manager_add(rm, image_radio_checked);
  assets_manager_add(rm, image_unchecked);
  assets_manager_add(rm, image_arrow_down_n);
  assets_manager_add(rm, image_arrow_left_n);
  assets_manager_add(rm, image_edit_clear_p);
  assets_manager_add(rm, style_main);
  assets_manager_add(rm, style_default);
  assets_manager_add(rm, style_window1);
#endif

  tk_init_assets();
  return RET_OK;
}
