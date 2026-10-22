/*
 * FUN_005afc80 (39 B) — Destructor for the global at 0x007f20ec.
 *
 * If non-null, calls FUN_00501b40 (thiscall, ECX=this) then frees it via
 * FUN_004084e0, then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void *this);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_005afc80(void)
{
    

extern int DAT_007f20ec;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20ec]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov dword ptr [DAT_007f20ec], 0x0
        pop     esi
        ret
    }


}
