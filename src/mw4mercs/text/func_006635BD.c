/*
 * FUN_006635BD (32 B) — constructor: sets the vtable and optionally frees the
 * object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006635BD(void)
{
    __asm {
        nop
        nop
        nop
        test    byte ptr [esp+4], 1
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x795458
        je      L_35d9
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_35d9:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
