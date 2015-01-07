#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {1628, 1645, 1638, 1629, 1616},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{1116, 307, 100, 80, 74},
				{1114, 312, 102, 82, 76},
				{1114, 312, 102, 81, 76},
				{1135, 317, 105, 85, 78},
				{1200, 321, 111, 87, 80},
				{1240, 326, 117, 92, 82},
				{1239, 314, 123, 96, 85},
				{1233, 309, 120, 101, 89},
				{1248, 308, 108, 90, 83},
				{1308, 309, 105, 84, 78},
				{1449, 311, 106, 86, 80},
				{1655, 312, 109, 89, 83},
				{1913, 313, 114, 91, 85},
				{2249, 325, 116, 91, 84},
				{2740, 355, 113, 89, 81},
				{3582, 402, 108, 86, 80},
				{5331, 460, 111, 86, 79},
				{7744, 510, 125, 93, 83},
				{10501, 547, 144, 105, 93},
				{13145, 567, 161, 113, 99},
				{14705, 578, 170, 116, 101},
				{16434, 592, 178, 120, 103},
				{18521, 598, 186, 126, 106},
				{20391, 579, 181, 132, 111},
				{22010, 617, 191, 140, 118},
				{25155, 690, 215, 154, 125},
				{29522, 919, 243, 171, 133},
				{35011, 1453, 280, 191, 146},
				{41879, 2275, 365, 231, 167},
				{47966, 3994, 601, 347, 238},
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4322, 4321, 4315, 4309, 4301},
				{4225, 4247, 4251, 4248, 4243},
				{4159, 4190, 4196, 4195, 4190},
				{4102, 4138, 4145, 4144, 4140},
				{4044, 4087, 4096, 4096, 4092},
				{3971, 4035, 4050, 4050, 4047},
				{3916, 3981, 4006, 4008, 4005},
				{3870, 3937, 3958, 3965, 3964},
				{3837, 3897, 3909, 3914, 3915},
				{3811, 3862, 3872, 3874, 3875},
				{3787, 3831, 3845, 3847, 3847},
				{3762, 3803, 3821, 3823, 3824},
				{3737, 3776, 3801, 3801, 3802},
				{3709, 3757, 3780, 3779, 3775},
				{3677, 3741, 3754, 3752, 3743},
				{3635, 3724, 3719, 3715, 3708},
				{3578, 3701, 3690, 3682, 3671},
				{3519, 3675, 3675, 3671, 3664},
				{3460, 3643, 3652, 3647, 3636},
				{3415, 3593, 3613, 3612, 3606},
				{3392, 3566, 3592, 3591, 3582},
				{3370, 3532, 3564, 3567, 3558},
				{3347, 3496, 3534, 3535, 3529},
				{3323, 3456, 3499, 3502, 3496},
				{3297, 3417, 3462, 3465, 3462},
				{3274, 3376, 3426, 3429, 3425},
				{3252, 3334, 3386, 3389, 3384},
				{3227, 3289, 3336, 3338, 3333},
				{3192, 3236, 3270, 3267, 3261},
				{3120, 3158, 3173, 3164, 3156},
				{3000, 3000, 3000, 3000, 3000}
	}
};

struct bms_battery_data LG_LGC_BL44JH_1700_data = {
	.fcc				= 1700,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 215
};