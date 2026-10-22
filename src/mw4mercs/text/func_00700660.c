/*
 * FUN_00700660 (58 B) — __cdecl, returns bool (AL).
 *
 * If g_008aaaf0 is zero, returns 0. Otherwise allocates 0x24C bytes via
 * FUN_004084D0, initializes the object (vtable 0x7A10BC, +4 = 0), calls the
 * vtable[0] method (thiscall) and FUN_006F8E50, returns 1. On alloc failure
 * returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_008aaaf0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006f8e50(void);
extern char g_007a10bc[];

__declspec(naked) char __cdecl FUN_00700660(void)
{
    __asm {
        mov     al, byte ptr [g_008aaaf0]
        test    al, al
        push    esi
        jnz     alloc
fail:
        xor     al, al
        pop     esi
        ret
alloc:
        push    0x24c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      fail
        mov     dword ptr [esi], offset g_007a10bc
        mov     eax, dword ptr [esi]
        push    esi
        mov     byte ptr [esi + 4], 0
        call    dword ptr [eax]
        push    esi
        call    FUN_006f8e50
        mov     al, 1
        pop     esi
        ret
    }
}
