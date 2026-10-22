/* func_0047fa20 - MLR PMesh helper: copy 3 floats (this+0x10 -> out) */

__declspec(naked) void func_0047fa20(void)
{
    __asm {
        fld     dword ptr [ecx+0x10]
        mov     eax, dword ptr [esp+0x4]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx+0x14]
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [ecx+0x18]
        fstp    dword ptr [eax+0x8]
        ret     0x4
    }
}
