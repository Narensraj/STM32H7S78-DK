/******************************************************************************
* Copyright (c) 2018(-2024) STMicroelectronics.
* All rights reserved.
*
* This file is part of the TouchGFX 4.23.2 distribution.
*
* This software is licensed under terms that can be found in the LICENSE file in
* the root directory of this software component.
* If no LICENSE file comes with this software, it is provided AS-IS.
*
*******************************************************************************/

#include <platform/hal/simulator/sdl2/HALSDL2.hpp>
#include <touchgfx/hal/Types.hpp>

namespace touchgfx
{
uint16_t HALSDL2::icon[] = {
    0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd,
    0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x3dbd,
    0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bc, 0x45bd, 0x3dbd, 0x45bc,
    0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x45bd,
    0x3dbd, 0x45bc, 0x3dbc, 0x3d9c, 0x3d9c, 0x3dbc, 0x3d9c, 0x3d9c, 0x3dbc, 0x3d9c, 0x3d9c, 0x3dbc, 0x3d9c, 0x3d9c, 0x3dbc, 0x3d9c, 0x3d9c, 0x3dbc, 0x3d9c, 0x3d9c, 0x3dbc, 0x3d9c, 0x3d9c, 0x3dbc, 0x3d9c, 0x459c, 0x3dbc, 0x3d9c, 0x459c, 0x3dbc, 0x45bd, 0x3dbd,
    0x3dbd, 0x45bd, 0x45bd, 0x461e, 0x461e, 0x461e, 0x4e1f, 0x461e, 0x461e, 0x4e1e, 0x461f, 0x461e, 0x4e1e, 0x461e, 0x461f, 0x4e1e, 0x461e, 0x461e, 0x4e1f, 0x461e, 0x461e, 0x4e1e, 0x461f, 0x461e, 0x461e, 0x461e, 0x461f, 0x461e, 0x461e, 0x45bd, 0x3dbd, 0x45bd,
    0x3dbd, 0x45bd, 0x3d7c, 0x2c16, 0x2394, 0x23b4, 0x23b5, 0x23b4, 0x23b4, 0x23b5, 0x23b4, 0x2394, 0x23b4, 0x23b4, 0x23b5, 0x23b4, 0x23b4, 0x23b5, 0x23b4, 0x23b4, 0x23b5, 0x23b4, 0x23b4, 0x23b5, 0x23b4, 0x23b4, 0x23b4, 0x2395, 0x3416, 0x3d7c, 0x3dbd, 0x45bc,
    0x3d9c, 0x461e, 0x2b93, 0x18e8, 0x52ae, 0x4a8e, 0x528e, 0x528e, 0x4a8e, 0x528e, 0x528e, 0x52ae, 0x52ae, 0x52ae, 0x4a8e, 0x528e, 0x528e, 0x4a8e, 0x528e, 0x528e, 0x528e, 0x4a8e, 0x528e, 0x528e, 0x528e, 0x528e, 0x4a8e, 0x52ae, 0x18e7, 0x2b93, 0x461e, 0x3d9c,
    0x3d9c, 0x461e, 0x1af1, 0x6b50, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffdf, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6350, 0x1af1, 0x461f, 0x3d9c,
    0x3d9c, 0x463f, 0x1af2, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x5b71, 0x092a, 0x322d, 0xef9e, 0xffff, 0xffff, 0xf7df, 0x5e1d, 0x45bc, 0x765d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af2, 0x463f, 0x459c,
    0x459c, 0x463f, 0x1af1, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xb5d8, 0x00c8, 0x0088, 0x7c54, 0xffff, 0xffff, 0x9ebe, 0x2d9c, 0x359d, 0xbf3f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af1, 0x463f, 0x3d9c,
    0x3d9c, 0x461f, 0x1af1, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x42cf, 0x0087, 0x326d, 0xffff, 0xefbf, 0x45dd, 0x359d, 0x6e3d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af1, 0x461f, 0x459c,
    0x3d9c, 0x463f, 0x1af2, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xc65a, 0x0047, 0x9d57, 0xffff, 0x8e9e, 0x359c, 0x3d9d, 0xcf5f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af2, 0x463f, 0x3d9c,
    0x459c, 0x463f, 0x1af1, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x8495, 0xffdf, 0xe7bf, 0x45bd, 0x359c, 0x765e, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af1, 0x463f, 0x459c,
    0x3d9c, 0x461f, 0x1af1, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x7e7d, 0x359d, 0x45bd, 0xdf9f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af1, 0x461f, 0x3d9c,
    0x3d9c, 0x463f, 0x1af1, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x5e1d, 0x359d, 0x4ddd, 0xf7ff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af2, 0x463e, 0x459c,
    0x459c, 0x463f, 0x1af2, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xd6dc, 0xffff, 0xc73f, 0x3d9c, 0x359c, 0x96be, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af2, 0x461f, 0x3d9c,
    0x3d9c, 0x461f, 0x1af1, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdefc, 0x0109, 0xd69b, 0xffff, 0x6e3d, 0x359d, 0x45bd, 0xe7bf, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af1, 0x463f, 0x459c,
    0x3d9c, 0x4e3f, 0x1af1, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x5b71, 0x0047, 0x4b10, 0xffff, 0xd77f, 0x3dbd, 0x359d, 0x867e, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af1, 0x463f, 0x3d9c,
    0x3d9c, 0x463f, 0x1af1, 0x6b70, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xc65a, 0x0109, 0x00c8, 0x6391, 0xffff, 0xffff, 0x869e, 0x359c, 0x3dbd, 0xd77f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6b70, 0x1af2, 0x461e, 0x459c,
    0x3d9c, 0x461f, 0x1af2, 0x6b70, 0xffff, 0xffdf, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x324d, 0x0047, 0x092a, 0xe73d, 0xffff, 0xffff, 0xe7bf, 0x459c, 0x2d5c, 0x661d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffdf, 0xffff, 0x6b50, 0x1af2, 0x463f, 0x3d9c,
    0x459c, 0x4e3f, 0x1af1, 0x7391, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xd69b, 0xc65a, 0xe73d, 0xffff, 0xffff, 0xffff, 0xffff, 0xefff, 0xd7df, 0xdfdf, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x7391, 0x1af1, 0x463e, 0x459d,
    0x3d9c, 0x461e, 0x2332, 0x31ab, 0x9d16, 0x9cf6, 0x9cf6, 0x9cf6, 0x9cf6, 0x9cf6, 0x9cf6, 0xa577, 0xad77, 0xa557, 0x94f6, 0x9cf6, 0x9cf6, 0x9cf6, 0xa516, 0xa536, 0xa516, 0x9cf6, 0x9cf6, 0x9cf6, 0x9cf6, 0x9cf6, 0x94f6, 0x9d16, 0x31cb, 0x2332, 0x461e, 0x3d9c,
    0x3d9c, 0x461e, 0x2b73, 0x08c8, 0x00c8, 0x00c8, 0x00c8, 0x00c8, 0x00c8, 0x00c8, 0x00c8, 0x00a8, 0x00a8, 0x00a8, 0x00c8, 0x00c8, 0x00c8, 0x00c8, 0x00a8, 0x00c8, 0x00c8, 0x00c8, 0x00c8, 0x00c8, 0x00c8, 0x00c8, 0x08c8, 0x00c8, 0x08a7, 0x2b73, 0x461e, 0x3d9d,
    0x3d9d, 0x45fe, 0x2b94, 0x10a7, 0x1909, 0x18e8, 0x1908, 0x10e8, 0x18e8, 0x1908, 0x10e8, 0x18e8, 0x1908, 0x18e8, 0x18e8, 0x1908, 0x1908, 0x10e8, 0x18e8, 0x1908, 0x10e8, 0x18e8, 0x1908, 0x10e8, 0x1908, 0x10e8, 0x1908, 0x1909, 0x10a7, 0x2b94, 0x45fe, 0x3d9c,
    0x45bd, 0x45dd, 0x3d7c, 0x3415, 0x2bf5, 0x3416, 0x2bf5, 0x3416, 0x33f5, 0x2c16, 0x3415, 0x2bf5, 0x2c15, 0x2c15, 0x2bf5, 0x33f5, 0x2c15, 0x33f5, 0x3415, 0x2c15, 0x2bf5, 0x3415, 0x33f5, 0x2c15, 0x33f5, 0x33f5, 0x2c16, 0x2bf5, 0x3416, 0x3d7c, 0x45dd, 0x45bd,
    0x3dbd, 0x3dbd, 0x45dd, 0x45fe, 0x461e, 0x45fe, 0x461e, 0x45fe, 0x461e, 0x45fe, 0x45fe, 0x461e, 0x45fe, 0x461e, 0x461e, 0x45fe, 0x461e, 0x45fe, 0x461e, 0x45ff, 0x461e, 0x45fe, 0x461e, 0x461e, 0x45fe, 0x461e, 0x461e, 0x45fe, 0x45fe, 0x45dd, 0x3dbd, 0x3dbd,
    0x3dbd, 0x45bc, 0x3dbd, 0x3d9c, 0x3dbd, 0x3dbd, 0x3d9d, 0x3dbc, 0x3d9d, 0x3dbd, 0x3dbd, 0x3d9d, 0x459d, 0x3dbd, 0x3d9d, 0x3dbd, 0x3d9d, 0x3dbd, 0x3d9d, 0x3d9d, 0x3dbd, 0x3d9d, 0x3d9d, 0x3dbd, 0x3d9d, 0x3d9d, 0x3dbd, 0x3dbc, 0x3d9c, 0x45bd, 0x3dbd, 0x45bc,
    0x45bd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd,
    0x3dbd, 0x3dbd, 0x45bc, 0x3dbd, 0x45bc, 0x45bc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bc, 0x3dbd, 0x3dbc, 0x45bd, 0x3dbd, 0x3dbc, 0x45bd, 0x45bc, 0x3dbc, 0x45bd, 0x45bc, 0x3dbc, 0x45bd, 0x45bc, 0x3dbd, 0x45bc, 0x45bd, 0x3dbd, 0x3dbc, 0x45bd, 0x3dbd, 0x3dbc,
    0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x3dbc, 0x3dbd, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbc, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbd, 0x3dbd, 0x3dbd, 0x3dbd, 0x3dbd, 0x45bd, 0x3dbc, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd,
    0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x45bc, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bc, 0x3dbd, 0x3dbd, 0x45bd, 0x45bd, 0x45bc, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbc, 0x45bd, 0x45bd, 0x45bc, 0x45bd, 0x3dbd, 0x45bd, 0x45bd, 0x3dbd, 0x45bd, 0x3dbd, 0x45bd, 0x3dbd
};

} // namespace touchgfx
