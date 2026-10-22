/*
 * FUN_005df1e0 (39 B) — if global 0x007f2524 is non-null, calls
 * FUN_00501b40(ptr) (thiscall) then frees ptr via FUN_004084e0.
 * Finally stores 0 into global 0x007f2524.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void FUN_005df1e0(void)
{
    

extern int DAT_007f2524;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2524]
        test    esi, esi
        jz      L_fb
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_fb:
        mov dword ptr [DAT_007f2524], 0x0
        pop     esi
        ret
    }


}
