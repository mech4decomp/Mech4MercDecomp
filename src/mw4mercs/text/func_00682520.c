/*
 * FUN_00682520 (23 B) — HUD element method: virtual call at vtable+0x1c4 on
 * the object at this+0x4, then zeroes this+0x8. __thiscall, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00682520(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+0x4]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x1c4]
        mov     dword ptr [esi+0x8], 0x0
        pop     esi
        ret
    }
}
