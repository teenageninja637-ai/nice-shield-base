#include <stdlib.h>
#include <zephyr/kernel.h>
#include "right_animation.h"

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

void draw_right_animation(lv_obj_t *canvas) {
#if IS_ENABLED(CONFIG_NICE_RIGHT_ANIMATION)
    lv_obj_t *art = lv_animimg_create(canvas);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)anim_imgs, 14);
    lv_animimg_set_duration(art, 4800);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);
    
#else
    lv_obj_t *art = lv_img_create(canvas);

    lv_img_set_src(art, &InoShirt14);
#endif

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 0, 0);
}
/* Next function from urchin peripheral
int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 160, 68);
    lv_obj_t *top = lv_canvas_create(widget->obj);
    lv_obj_align(top, LV_ALIGN_TOP_RIGHT, 0, 0);
    lv_canvas_set_buffer(top, widget->cbuf, CANVAS_SIZE, CANVAS_SIZE, LV_IMG_CF_TRUE_COLOR);

    //lv_obj_t *art = lv_img_create(widget->obj);
    //bool random = sys_rand32_get() & 1;
    //lv_img_set_src(art, random ? &balloon : &mountain);

    lv_obj_t * art = lv_animimg_create(widget->obj);            //<--
    lv_obj_center(art);                                         //<--
    lv_animimg_set_src(art, (const void **) anim_imgs, 14);     //<--
    lv_animimg_set_duration(art, CONFIG_CUSTOM_ANIMATION_SPEED);//<--
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);  //<--
    lv_animimg_start(art);                                      //<--

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 0, 0);
    sys_slist_append(&widgets, &widget->node);
    widget_battery_status_init();
    widget_peripheral_status_init();

    return 0;
} */