/*
 * FUN_005b9ac0 (207 B) — RET 0x18 (6 stack args). Computes 4 int outputs
 * via _ftol from FPU math on an input struct + float.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0075db4a(void);   /* _ftol */

__declspec(naked) void __stdcall FUN_005b9ac0(void)
{
    

extern int DAT_00786ddc;
extern int DAT_00786dd8;
extern int DAT_00786dd4;
__asm {
mov     eax, dword ptr [esp + 0x14]
        fld     dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 0x2c]
        fld     st(0)
        mov     dword ptr [esp + 0x14], eax
        fsub    dword ptr [esp + 0x18]
        fcom dword ptr [DAT_00786ddc]
        fnstsw  ax
        test    ah, 0x1
        jz      L_9ae9
        fstp    st(0)
        fld dword ptr [DAT_00786ddc]
L_9ae9:
        fadd dword ptr [DAT_00786dd8]
        call    FUN_0075db4a
        fadd    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x4]
        sar     eax, 0x8
        fcom dword ptr [DAT_00786dd4]
        mov     dword ptr [ecx], eax
        fnstsw  ax
        test    ah, 0x1
        jnz     L_9b16
        fstp    st(0)
        fld dword ptr [DAT_00786dd4]
L_9b16:
        fadd dword ptr [DAT_00786dd8]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0xc]
        sar     eax, 0x8
        mov     dword ptr [edx], eax
        fcom dword ptr [DAT_00786ddc]
        fnstsw  ax
        test    ah, 0x1
        jz      L_9b47
        fstp    st(0)
        fld dword ptr [DAT_00786ddc]
L_9b47:
        fadd dword ptr [DAT_00786dd8]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x8]
        sar     eax, 0x8
        mov     dword ptr [ecx], eax
        fcom dword ptr [DAT_00786dd4]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_9b78
        fstp    st(0)
        fld dword ptr [DAT_00786dd4]
L_9b78:
        fadd dword ptr [DAT_00786dd8]
        call    FUN_0075db4a
        mov     edx, dword ptr [esp + 0x10]
        sar     eax, 0x8
        mov     dword ptr [edx], eax
        ret     0x18
    }


}
