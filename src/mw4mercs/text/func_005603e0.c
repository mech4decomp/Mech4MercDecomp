// 0x005603E0: stores two dwords at this+0x11C and this+0x120
// __fastcall (this in ecx) with 2 stack params, ret 8

__declspec(naked) void __fastcall func_005603e0(void *this, int dummy, int a1, int a2)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 0x11c], eax
        mov dword ptr [ecx + 0x120], edx
        ret 8
    }
}
