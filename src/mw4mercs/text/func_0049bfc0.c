/*
 * FUN_0049bfc0 (74 B) — MLR debris-cloud subsystem init/allocator.
 * Allocates a 0x1c-byte object, initializes it via FUN_004151c0,
 * stores two code pointers (0x49c1e0 / 0x49b510) into it, and caches
 * the result in global g_007da970.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da93c;
extern int g_007da970;
extern void * __cdecl FUN_004084d0(unsigned int);
extern void FUN_004151c0(void);

__declspec(naked) void FUN_0049bfc0(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_bfe
        mov     eax, dword ptr [g_007da93c]
        push    eax
        push    0x7b2c74
        push    0x52d
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x49c1e0
        mov     dword ptr [esi+0x18], 0x49b510
        mov     dword ptr [g_007da970], esi
        pop     esi
        ret
L_bfe:
        mov     dword ptr [g_007da970], 0
        pop     esi
        ret
    }
}
