/*
 * FUN_005af1b0 (39 B) — __cdecl. If DAT_007f20e0 is non-null, calls
 * FUN_00501b40(this) then frees it via FUN_004084e0. Zeroes DAT_007f20e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005af1b0(void)
{
    

extern int DAT_007f20e0;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20e0]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
done:
        mov dword ptr [DAT_007f20e0], 0x0
        pop     esi
        ret
    }


}
