/*
 * FUN_005a09d0 (39 B) — Free a structure and its inner pointer.
 * Calls FUN_004084e0 (free) on *param2 then on param2.
 *
 * __stdcall, RET 8 (two params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005a09d0(int param1, int *param2)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x0c]
        test    esi, esi
        jz      skip_free
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      free_outer
        push    eax
        call    FUN_004084e0
        add     esp, 4

free_outer:
        push    esi
        call    FUN_004084e0
        add     esp, 4

skip_free:
        xor     al, al
        pop     esi
        ret     8
    }
}
