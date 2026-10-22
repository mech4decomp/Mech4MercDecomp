/*
 * FUN_005cae80 (47 B) — __thiscall setter. Same pattern as
 * FUN_005cae50 but stores into this+0x620.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cae80(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x170]
        mov     edx, dword ptr [eax + 0x410]
        sub     edx, dword ptr [eax + 0x40c]
        sar     edx, 0x2
        jz      L_CAEAC
        mov     eax, dword ptr [eax + 0x40c]
        cmp     dword ptr [eax], 0x0
        jz      L_CAEAC
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x620], edx
L_CAEAC:
        ret     0x4
    }
}
