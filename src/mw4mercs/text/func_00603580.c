/*
 * FUN_00603580 (37 B) — Constructor.
 *
 * __thiscall (ECX = this), RET 0xC (three stack params).
 * Calls FUN_00603a50(this, param_1, param_2, param_3), sets vtable
 * 0x78b45c, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00603a50(void);

__declspec(naked) void __stdcall FUN_00603580(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xC]
        mov     edx, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xC]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00603a50
        mov     dword ptr [esi], 0x0078b45c
        mov     eax, esi
        pop     esi
        ret     0xC
    }
}
