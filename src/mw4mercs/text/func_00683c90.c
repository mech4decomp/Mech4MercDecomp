/*
 * FUN_00683c90 (46 B) — HUD: copy a 0xc-dword (48-byte) block from the
 * object at this->[0x198] into the caller's buffer (rep movsd).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00507f90(void);

__declspec(naked) void FUN_00683c90(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [ecx + 0x198]
        sub     esp, 0x30
        push    esi
        push    edi
        lea     eax, [esp + 0x8]
        push    eax
        call    FUN_00507f90
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, 0xc
        mov     edi, eax
        rep     movsd
        pop     edi
        pop     esi
        add     esp, 0x30
        ret
    }
}
