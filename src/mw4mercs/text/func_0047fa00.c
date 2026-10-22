/* func_0047fa00 - MLR PMesh helper: copy 3 floats (this->vec -> out) */

__declspec(naked) void func_0047fa00(void)
{
    __asm {
        fld     dword ptr [ecx]
        mov     eax, dword ptr [esp+0x4]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx+0x4]
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [ecx+0x8]
        fstp    dword ptr [eax+0x8]
        ret     0x4
    }
}
