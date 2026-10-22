/*
 * FUN_004FBC60 (77 B) — Adept::EntityExecutionStateEngine factory.
 * Allocates 0x24 bytes, initializes via FUN_004dd270, stores the result
 * in g_7dc8cc; on alloc failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004dd270(void);
extern int g_7dc69c;    /* 0x007dc69c */
extern int g_7dc8cc;    /* 0x007dc8cc */

__declspec(naked) void __stdcall FUN_004fbc60(void)
{
    __asm {
        push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_fail
        mov     eax, dword ptr [g_7dc69c]
        push    0x5052a0
        push    0x4fbce0
        push    0x775e48
        push    0x3
        push    eax
        push    0x775e60
        push    0x1c8
        mov     ecx, esi
        call    FUN_004dd270
        mov     dword ptr [g_7dc8cc], esi
        pop     esi
        ret
    l_fail:
        mov     dword ptr [g_7dc8cc], 0x0
        pop     esi
        ret
    }
}
