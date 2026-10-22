/*
 * FUN_0049a990 (74 B) — MLR PointLight constructor/init. Allocates a
 * 0x1c-byte object, initializes it via FUN_004151c0, sets two vtable-like
 * pointers, and stores the result in a global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da93c;
extern int g_007da96c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0049a990(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      short loc_49a9ce
        mov     eax, dword ptr [g_007da93c]
        push    eax
        push    0x7b2c60
        push    0x52e
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x49aab0
        mov     dword ptr [esi + 0x18], 0x49a7a0
        mov     dword ptr [g_007da96c], esi
        pop     esi
        ret
loc_49a9ce:
        mov     dword ptr [g_007da96c], 0x0
        pop     esi
        ret
    }
}
