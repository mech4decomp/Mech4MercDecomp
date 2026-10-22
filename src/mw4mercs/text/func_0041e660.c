/*
 * FUN_0041e660 (39 B) — cleanup. If the object at 0x007b9304 is non-null,
 * calls its destructor FUN_00415200 and frees it via FUN_004084e0, then
 * clears the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9304;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0041e660(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b9304]
        test    esi, esi
        jz      L67B
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L67B:
        mov     dword ptr [g_007b9304], 0
        pop     esi
        ret
    }
}
