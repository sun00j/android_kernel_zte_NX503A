#include <linux/mfd/pm8xxx/pm8921-bms.h>

/*Have Nothing To Do With The Bat Voltage And Current */
static struct single_row_lut fcc_temp = {
    .x      = {-20, -5, 0, 25, 40, 45, 50, 60},
    .y      = {2288, 2300, 2313, 2278, 2265, 2253, 2231, 2186},
    .cols   = 8
};

static struct single_row_lut fcc_sf = {
    .x      = {0},
    .y      = {100},
    .cols   = 1
};

static struct sf_lut rbatt_sf = { 
        .rows           = 28, 
        .cols           = 5,
        /* row_entries are temperature */
        .row_entries            = {-20, -5, 0, 25, 40, 45, 50, 60},
        .percent        = {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
        .sf                     = {
{957,280,210,100,87,85,83,81},
{981,290,217,103,89,86,84,82},
{1006,298,225,107,91,89,87,84},
{1082,300,231,112,94,91,89,85},
{1035,302,239,116,97,93,91,88},
{986,285,221,122,101,97,93,90},
{979,286,216,127,106,101,97,93},
{984,284,213,115,107,103,101,96},
{1006,284,212,103,90,88,86,84},
{1058,289,214,102,89,87,85,84},
{1122,294,218,105,92,89,87,85},
{1194,302,223,108,94,92,90,87},
{1280,316,232,112,95,94,93,90},
{1387,334,247,114,95,92,91,87},
{1512,350,261,112,92,89,86,85},
{1676,377,265,111,91,88,86,84},
{1893,440,293,109,91,88,86,83},
{2261,557,378,114,93,90,88,86},
{2204,470,340,112,93,90,88,86},
{2310,485,350,116,95,91,89,87},
{2430,501,361,118,97,92,90,88},
{2585,523,372,122,97,94,91,87},
{2806,551,387,122,94,91,89,84},
{3071,585,408,117,93,89,87,85},
{3408,628,435,118,96,91,88,87},
{3885,683,467,123,101,94,90,90},
{4839,759,511,132,125,100,93,105},
{10405,893,581,158,538,131,102,205},
{100430,1304,724,1696,221,1381,141,193},

        }
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
    .rows       = 29,
    .cols   	= 8,
    .temp       = {-20, -5, 0, 25, 40, 45, 50, 60},
    .percent    = {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
    .ocv    	= {
                {4332, 4329, 4330, 4323, 4317, 4314, 4311, 4305},
                {4232, 4249, 4256, 4255, 4252, 4249, 4247, 4241},
                {4163, 4188, 4197, 4198, 4196, 4192, 4191, 4185},
                {4103, 4132, 4142, 4144, 4141, 4138, 4137, 4131},
                {4047, 4077, 4090, 4092, 4090, 4086, 4086, 4080},
                {3980, 4020, 4041, 4044, 4042, 4038, 4038, 4033},
                {3930, 3960, 3981, 3999, 3998, 3995, 3994, 3990},
                {3886, 3920, 3935, 3957, 3957, 3954, 3954, 3950},
                {3851, 3882, 3891, 3907, 3911, 3909, 3911, 3908},
                {3824, 3849, 3857, 3865, 3865, 3864, 3864, 3861},
                {3805, 3821, 3830, 3836, 3836, 3834, 3835, 3834},
                {3790, 3797, 3807, 3813, 3814, 3813, 3813, 3811},
                {3776, 3780, 3789, 3795, 3794, 3794, 3794, 3793},
                {3761, 3767, 3776, 3780, 3778, 3777, 3778, 3776},
                {3744, 3751, 3765, 3767, 3762, 3760, 3759, 3754},
                {3725, 3731, 3747, 3752, 3744, 3740, 3738, 3731},
                {3702, 3711, 3716, 3728, 3719, 3715, 3715, 3705},
                {3673, 3693, 3693, 3696, 3687, 3681, 3678, 3672},
                {3621, 3666, 3678, 3678, 3666, 3664, 3666, 3653},
                {3605, 3657, 3674, 3676, 3661, 3654, 3656, 3645},
                {3584, 3643, 3666, 3673, 3656, 3643, 3641, 3636},
                {3561, 3624, 3651, 3668, 3649, 3631, 3625, 3626},
                {3536, 3600, 3628, 3651, 3632, 3612, 3606, 3612},
                {3507, 3570, 3597, 3614, 3592, 3578, 3579, 3573},
                {3473, 3528, 3555, 3562, 3537, 3523, 3537, 3517},
                {3431, 3466, 3494, 3495, 3468, 3454, 3475, 3455},
                {3370, 3368, 3403, 3406, 3378, 3363, 3395, 3384},
                {3249, 3218, 3250, 3278, 3260, 3236, 3288, 3297},
                {3000, 3000, 3000, 3000, 3000, 3000, 3000, 3000}
    }
};

struct bms_battery_data ztemt_2300mAh_data = {
    .fcc        		= 2300,
    .fcc_temp_lut       = &fcc_temp,
    .fcc_sf_lut         = &fcc_sf,
    .pc_temp_ocv_lut    = &pc_temp_ocv,
    .rbatt_sf_lut       =&rbatt_sf,
    .default_rbatt_mohm     =146,

};
