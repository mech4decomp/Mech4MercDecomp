/*
 * FUN_005f0b60 (39 B) — Cleanup/shutdown helper.
 *
 * If global DAT_007f25b8 is non-null, calls FUN_00501b40() (thiscall on it)
 * then FUN_004084e0(it), then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005f0b60(void)
{
    

extern int DAT_007f25b8;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f25b8]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov dword ptr [DAT_007f25b8], 0x0
        pop     esi
        ret
    }


}
