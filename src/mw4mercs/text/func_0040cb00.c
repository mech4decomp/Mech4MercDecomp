/*
 * FUN_0040cb00 (31 B) — __thiscall dot product. Returns
 * this->x*this->x + this->y*this->y + this->z*this->z in ST0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040cb00(void)
{
    __asm {
        fld     dword ptr [ecx+8]
        fld     dword ptr [ecx+4]
        fld     dword ptr [ecx]
        fld     st(0)
        fmul    st(0),st(1)
        fld     st(2)
        fmul    st(0),st(3)
        faddp   st(1),st(0)
        fld     st(3)
        fmul    st(0),st(4)
        faddp   st(1),st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        ret
    }
}
