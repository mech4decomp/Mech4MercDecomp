/*
 * FUN_005d8070 (39 B) — Destroy the global rail graph object. If the
 * global at 0x007f243c is non-null, call its destructor and free it, then
 * null the global.
 *
 * __cdecl, no params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005d8070(void)
{
    

extern int DAT_007f243c;
extern void __cdecl FUN_1004d5d18(void);
extern void __cdecl FUN_1004084d2(void);
__asm {
push    esi
        mov esi, dword ptr [DAT_007f243c]
        test    esi, esi
        jz      L808B
        mov     ecx, esi
        call FUN_1004d5d18
        push    esi
        call FUN_1004084d2
        add     esp, 0x4
L808B:
        mov dword ptr [DAT_007f243c], 0x0
        pop     esi
        ret
    }


}
