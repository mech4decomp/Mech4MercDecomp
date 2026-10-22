/*
 * FUN_005a9ac0 (39 B) — destroys the object at global 0x007f2098 and
 * clears the global.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005a9ac0(void)
{
    

extern int DAT_007f2098;
extern void __cdecl FUN_100501b38(void);
extern void __cdecl FUN_1004084d2(void);
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2098]
        test    esi, esi
        jz      lbl_clear
        mov     ecx, esi
        call FUN_100501b38
        push    esi
        call FUN_1004084d2
        add     esp, 0x4
    lbl_clear:
        mov dword ptr [DAT_007f2098], 0x0
        pop     esi
        ret
    }


}
