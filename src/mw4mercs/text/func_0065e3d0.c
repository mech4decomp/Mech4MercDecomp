/*
 * FUN_0065e3d0 (18 B) — __thiscall ctor-ish: stores arg to [this+0],
 * sets [this+4] = 2. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065e3d0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], 0x2
        ret     0x4
    }
}
