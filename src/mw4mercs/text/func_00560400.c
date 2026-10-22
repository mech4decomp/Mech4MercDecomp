// 0x00560400: stores two dwords at this+0x124 and this+0x128
// __fastcall (this in ecx) with 2 stack params, ret 8

__declspec(naked) void __fastcall func_00560400(void *this, int dummy, int a1, int a2)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 0x124], eax
        mov dword ptr [ecx + 0x128], edx
        ret 8
    }
}
