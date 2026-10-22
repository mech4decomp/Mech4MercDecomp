/*
 * FUN_005a5b20 (39 B) — Cleanup/destructor for singleton at 0x007f2060.
 *
 * If the global pointer is non-null, calls its destructor (__thiscall via ECX)
 * then frees the memory. Sets the global to NULL.
 *
 * __cdecl (no params, no return).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *ptr);

extern void *DAT_007f2060;  /* 0x007f2060 */

__declspec(naked) void FUN_005a5b20(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007f2060]
        test    esi, esi
        jz      skip_cleanup
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip_cleanup:
        mov     dword ptr [DAT_007f2060], 0x0
        pop     esi
        ret
    }
}
