/*
 * func_005c63d0 - FUN_005c63d0
 * __fastcall. Clamps a float field and conditionally resets two fields.
 */
__declspec(naked) void func_005c63d0()
{
    

extern int DAT_0076c5b0;
extern int DAT_00787914;
extern void __cdecl FUN_00707e2c(void);
__asm {
push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x564]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L6449
        fld     dword ptr [esi + 0x564]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L640c
        fld     dword ptr [esi + 0x564]
        fcomp dword ptr [DAT_00787914]
        fnstsw  ax
        test    ah, 0x41
        jnz     L6417
    L640c:
        mov eax, dword ptr [DAT_00787914]
        mov     [esi + 0x564], eax
    L6417:
        push    0
        call FUN_00707e2c
        fld     dword ptr [esi + 0x564]
        fadd    st(0), st(0)
        fadd    dword ptr [esi + 0x560]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L6449
        mov     dword ptr [esi + 0x560], 0
        mov     dword ptr [esi + 0x564], 0
    L6449:
        pop     esi
        ret
    }


}
