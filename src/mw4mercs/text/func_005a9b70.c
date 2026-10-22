/*
 * FUN_005a9b70 (30 B) — __thiscall; calls FUN_005a9b90, then frees the
 * object if the low bit of the flag arg is set.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005a9b70(void)
{
    

extern void __cdecl FUN_005a9b92(void);
extern void __cdecl FUN_1004084d5(void);
__asm {
push    esi
        mov     esi, ecx
        call FUN_005a9b92
        test    byte ptr [esp + 0x8], 0x1
        jz      lbl_ret
        push    esi
        call FUN_1004084d5
        add     esp, 0x4
    lbl_ret:
        mov     eax, esi
        pop     esi
        ret     0x4
    }


}
