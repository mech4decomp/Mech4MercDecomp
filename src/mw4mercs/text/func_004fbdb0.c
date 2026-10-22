/*
 * FUN_004FBDB0 (55 B) — Adept::NameTable factory. Allocates 0x14 bytes,
 * initializes via FUN_004151c0, stores result in g_7dc8d0; on alloc
 * failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004151c0(void);
extern int g_7b8c10;    /* 0x007b8c10 */
extern int g_7dc8d0;    /* 0x007dc8d0 */

__declspec(naked) void __stdcall FUN_004fbdb0(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_fail
        mov     ecx, dword ptr [g_7b8c10]
        push    ecx
        push    0x775e8c
        push    0x232
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_7dc8d0], eax
        ret
    l_fail:
        mov     dword ptr [g_7dc8d0], 0x0
        ret
    }
}
