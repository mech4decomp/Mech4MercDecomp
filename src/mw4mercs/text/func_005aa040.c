/*
 * FUN_005aa040 (49 B) — Constructor (__thiscall, RET 0x10, 4 stack params).
 *
 * Calls FUN_005bb170(this, p1, p2, p3, p4), installs vtable 0x785340,
 * zeroes byte at this+0x274, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005bb170(void);

__declspec(naked) void FUN_005aa040(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005bb170
        mov     dword ptr [esi], 0x785340
        mov     byte ptr [esi + 0x274], 0
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
