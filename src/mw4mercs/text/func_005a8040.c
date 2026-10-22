/*
 * FUN_005a8040 (39 B) — Destructor/cleanup for global at 0x007f207c.
 *
 * Calls FUN_00501b40 on the object, then frees it via FUN_004084e0,
 * then zeros the global pointer.
 *
 * __stdcall, no parameters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005a8040(void)
{
    

extern int DAT_007f207c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f207c]
        test    esi, esi
        jz      label_skip
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
label_skip:
        mov dword ptr [DAT_007f207c], 0x0
        pop     esi
        ret
    }


}
