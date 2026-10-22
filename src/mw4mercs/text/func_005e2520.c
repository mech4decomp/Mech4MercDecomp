/*
 * FUN_005e2520 (39 B) — __cdecl subsystem destructor (no params).
 *
 * Loads global 0x007f253c; if non-null, calls FUN_00501b40 (__thiscall,
 * ECX=this) then frees via FUN_004084e0(this). Clears global to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005e2520(void)
{
    

extern int DAT_007f253c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f253c]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
done:
        mov dword ptr [DAT_007f253c], 0x0
        pop     esi
        ret
    }


}
