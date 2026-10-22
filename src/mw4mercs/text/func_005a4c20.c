/*
 * FUN_005a4c20 (39 B) — Destructor/cleanup for the object created in FUN_005a4ba0.
 *
 * Loads global pointer, calls destructor then free, clears global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *ptr);

void __declspec(naked) __stdcall FUN_005a4c20(void)
{
    

extern int DAT_007f2054;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2054]
        test    esi, esi
        jz      skip_cleanup
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip_cleanup:
        mov dword ptr [DAT_007f2054], 0x0
        pop     esi
        ret
    }


}
