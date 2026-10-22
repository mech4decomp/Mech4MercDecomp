/*
 * FUN_0072EFD0 (149 B) — RET 0x4 (1 stack param).
 *
 * Returns a bool. If global 0x0085B4A0==1, returns false unless both
 * 0x0087BC34 and 0x0087BC35 are set (then FUN_0070E220(1,5)!=0). Otherwise
 * inspects param+0x20; if set, calls FUN_00704A80(0x27,0,0,0) and, if bit 1
 * set, compares FUN_00707E70(0) - *(double*)(param+0x18) against
 * *(double*)(param+0x10). Returns the resulting bool (BL), optionally
 * reporting via FUN_0070E1B0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* .data globals */
extern int  g_85b4a0;
extern char g_87bc34;
extern char g_87bc35;

extern void FUN_0070e220(void);
extern void FUN_00704a80(void);
extern void FUN_00707e70(void);
extern void FUN_0070e1b0(void);

__declspec(naked) void func_0072efd0(void)
{
    __asm {
        cmp     dword ptr [g_85b4a0], 0x1
        jnz     L_f002
        mov     al, byte ptr [g_87bc34]
        test    al, al
        jz      L_eff0
        mov     al, byte ptr [g_87bc35]
        test    al, al
        jz      L_eff0
        xor     al, al
        ret     0x4
L_eff0:
        push    0x5
        push    0x1
        call    FUN_0070e220
        neg     eax
        sbb     eax, eax
        neg     eax
        ret     0x4
L_f002:
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     al, byte ptr [esi + 0x20]
        test    al, al
        jz      L_f03c
        push    0x0
        push    0x0
        push    0x0
        push    0x27
        call    FUN_00704a80
        test    al, 0x2
        jz      L_f03c
        push    0x0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x18]
        fcomp   qword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_f038
        mov     bl, 0x1
        jmp     L_f03e
L_f038:
        mov     byte ptr [esi + 0x20], 0x0
L_f03c:
        xor     bl, bl
L_f03e:
        mov     al, byte ptr [g_87bc35]
        test    al, al
        mov     byte ptr [esp + 0xc], bl
        jnz     L_f05e
        mov     eax, dword ptr [esp + 0xc]
        push    0x5
        push    0x1
        and     eax, 0xff
        push    eax
        call    FUN_0070e1b0
L_f05e:
        pop     esi
        mov     al, bl
        pop     ebx
        ret     0x4
    }
}
