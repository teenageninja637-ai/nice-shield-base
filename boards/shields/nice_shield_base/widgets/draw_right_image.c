#include <stdlib.h>
#include <zephyr/kernel.h>
#include "draw_right_image.h"

LV_IMG_DECLARE(InoShirt01);
LV_IMG_DECLARE(InoShirt02);
LV_IMG_DECLARE(InoShirt03);
LV_IMG_DECLARE(InoShirt04);
LV_IMG_DECLARE(InoShirt05);
LV_IMG_DECLARE(InoShirt06);
LV_IMG_DECLARE(InoShirt07);
LV_IMG_DECLARE(InoShirt08);
LV_IMG_DECLARE(InoShirt09);
LV_IMG_DECLARE(InoShirt10);
LV_IMG_DECLARE(InoShirt11);
LV_IMG_DECLARE(InoShirt12);
LV_IMG_DECLARE(InoShirt13);
LV_IMG_DECLARE(InoShirt14);
/*
const lv_img_dsc_t *anim_imgs[] = {
    &InoShirt01,
    &InoShirt02,
    &InoShirt03,
    &InoShirt04,
    &InoShirt05,
    &InoShirt06,
    &InoShirt07,
    &InoShirt08,
    &InoShirt09,
    &InoShirt10,
    &InoShirt11,
    &InoShirt12,
    &InoShirt13,
    &InoShirt14,
};
*/
void draw_right_image(lv_obj_t *canvas) {
    lv_obj_t *art = lv_img_create(canvas);

    lv_img_set_src(art, &InoShirt14);

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 0, 0);
}
