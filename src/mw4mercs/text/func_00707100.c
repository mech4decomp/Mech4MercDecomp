/*
 * FUN_00707100 (56 B) — __cdecl, returns bool (AL).
 *
 * Allocates 0x196C bytes via FUN_004084D0. On success, initializes the
 * object (zeroes +4 and +0x1808, sets vtable at 0x7A13AC), calls the
 * vtable[0] method (thiscall) and FUN_006F8E50, returns 1. On alloc
 * failure returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006f8e50(void);
extern char g_007a13ac[];

__declspec(naked) char __cdecl FUN_00707100(void)
{
    __asm {
        push    esi
        push    0x196c
        call    FUN_004084d0
        mov     esi, eax
        xor     eax, eax
        add     esp, 4
        cmp     esi, eax
        jz      fail
        mov     byte ptr [esi + 4], al
        mov     dword ptr [esi + 0x1808], eax
        mov     dword ptr [esi], offset g_007a13ac
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax]
        push    esi
        call    FUN_006f8e50
        mov     al, 1
        pop     esi
        ret
fail:
        xor     al, al
        pop     esi
        ret
    }
}
