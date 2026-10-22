/*
 * func_005c68b0 - FUN_005c68b0
 * __thiscall. Clamps a float field between two constants and stores a
 * random value into another field.
 */
__declspec(naked) void func_005c68b0()
{
    

extern int DAT_007878e8;
extern int DAT_007878ec;
extern void __cdecl FUN_00707e34(void);
__asm {
push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x1bc]
        fadd    dword ptr [esp + 8]
        fcom dword ptr [DAT_007878e8]
        fnstsw  ax
        test    ah, 0x1
        jz      L68d4
        fstp    st(0)
        fld dword ptr [DAT_007878e8]
        jmp     L68e9
    L68d4:
        fcom dword ptr [DAT_007878ec]
        fnstsw  ax
        test    ah, 0x41
        jnz     L68e9
        fstp    st(0)
        fld dword ptr [DAT_007878ec]
    L68e9:
        push    0
        fstp    dword ptr [esi + 0x1bc]
        call FUN_00707e34
        fstp    dword ptr [esi + 0x1c0]
        pop     esi
        ret     4
    }


}
