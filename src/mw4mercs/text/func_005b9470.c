/*
 * FUN_005b9470 (149 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00707e70(void);
extern void __stdcall FUN_005b9510(void);
extern void __stdcall FUN_005f07c0(void);

__declspec(naked) void __stdcall FUN_005b9470(void)
{
    

extern int DAT_007f2130;
__asm {
push    esi
        mov     esi, ecx
        cmp     byte ptr [esi + 0x2ec], 0x1
        jnz     L_a8
        push    0x0
        call    FUN_00707e70
        fcomp qword ptr [DAT_007f2130]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_01
        mov     ecx, esi
        call    FUN_005b9510
        push    0x0
        call    FUN_00707e70
        fstp qword ptr [DAT_007f2130]
        pop     esi
        ret     0x8
L_a8:
        mov     ecx, esi
        call    FUN_005f07c0
        mov     cl, byte ptr [eax + 0xdc]
        test    cl, cl
        jz      L_01
        fld     dword ptr [esi + 0x18c]
        fcomp   dword ptr [esi + 0x190]
        fnstsw  ax
        test    ah, 0x1
        jz      L_e6
        fld     qword ptr [esp + 0x8]
        fsub    qword ptr [esi + 0xe4]
        fadd    dword ptr [esi + 0x18c]
        fstp    dword ptr [esi + 0x18c]
        pop     esi
        ret     0x8
L_e6:
        mov     ecx, esi
        call    FUN_005b9510
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0xe4], eax
        mov     dword ptr [esi + 0xe8], ecx
L_01:
        pop     esi
        ret     0x8
    }


}
