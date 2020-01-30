//
// Created by chengguoqiang on 18-5-16.
//

#ifndef CALIB_MODEL_LUT_IMAGE_VIEW_CONVERT_H
#define CALIB_MODEL_LUT_IMAGE_VIEW_CONVERT_H

#include "common_parkinggo.h"
#include <iostream>

#include <opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

typedef enum image_view_enum
{
    image_view_min = 0,
    image_view_birdview_e, //俯视图
    image_view_projective_e, //透视图
    image_view_stitch_e,   //俯视拼接融合图
    image_view_multiview_e, //多视角透视展开图
    image_view_max,
}IMAGE_VIEW_E;

typedef enum view_enum
{
    view_min = 0,
    view_front_e,
    view_rear_e,
    view_left_e,
    view_right_e,
    view_max,
}VIEW_E;

//配合image_view_stitch_e使用，其它情况无效
typedef enum fusion_enum
{
    fusion_min = 0,
    fusion_front_e, //前区域需要融合，后区域不需要融合 ,针对左、右相机情况下
    fusion_rear_e, //后区域需要融合，前区域不需要融合,针对左、右相机情况下
    fusion_left_e, //左区域需要融合，右区域不需要融合,针对前、后相机情况下
    fusion_right_e, //右区域需要融合，左区域不需要融合,针对前、后相机情况下
    fusion_left_right_e, //左、右同时需要融合,针对前、后相机情况下
    fusion_front_rear_e, //前、后同时需要融合,针对左、右相机情况下
    fusion_max,
}FUSION_E;

//获取参数配置文件
int get_parameter(std::string file_name);

//生成去畸变平面透视图
int undistort_plane_image(IN Mat raw_image, INOUT Mat undistort_image, IN float fov[2],IN VIEW_E view_index);

//生成多视角去畸变平面透视图
int multiview_undistort_plane_image(IN Mat raw_image, OUT Mat undistort_image, IN float fov[2],IN VIEW_E view_index);

//生成俯视图
Mat birdview_image_generate(IN Mat raw_image, IN VIEW_E view_index, IN bool stitch_select_b);

//使用lut table，生成相应的效果图
int lutTable_generate_image(IN Mat raw_image, INOUT Mat dst_image, IN IMAGE_VIEW_E image_view_e, IN VIEW_E view_index, IN FUSION_E stitch_fusion);

//生成一张包含前、后、左、右相机俯视图的非融合拼接图
Mat birdview_image_stitch(IN Mat front_image, IN Mat rear_image, IN Mat left_image, IN Mat right_image);

//已知某一原图上的点坐标，求出此点对应的透视图上的坐标
int rawpixel2projective(IN float raw_pixel[2], IN VIEW_E view_index, IN float projective_fov[2],IN float projective_size[2], OUT float projective_pixel[2]);

//已知某一俯视图上的点坐标，求出此点对应的原图图上的坐标
int birdviewpoint2rawpixel(IN float stitchpoint[2], IN VIEW_E view_index, INOUT float rawpixel[2]);

//世界坐标系下的4个物理点，转换为透视图上的点
int worldview2undistortpixel(IN VIEW_E view_index,  IN float projective_fov[2],IN float projective_size[2]);

//俯视图上的像素到世界物理坐标的转换
int birdviewpix2worldpoint(IN float stitchpoint[2], IN VIEW_E view_index, INOUT float worldpoint[3]);

//使用lut table，生成俯视融合拼接图
Mat lutTable_generate_stitchFusion(IN Mat front_raw_image, IN Mat rear_raw_image, IN Mat left_raw_image, IN Mat right_raw_image, IN bool front_use, IN bool rear_use, IN bool left_use, IN bool right_use);

#endif //CALIB_MODEL_LUT_IMAGE_VIEW_CONVERT_H
