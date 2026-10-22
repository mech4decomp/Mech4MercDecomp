/*
 * FUN_005afad0 (39 B) — Destructor for the global singleton at 0x007f20e8.
 *
 * If the singleton is non-null, calls FUN_004dd340 (thiscall, ECX=this)
 * then frees it via FUN_004084e0, then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd340(void *this);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_005afad0(void)
{
    

extern int DAT_007f20e8;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20e8]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov dword ptr [DAT_007f20e8], 0x0
        pop     esi
        ret
    }


}
