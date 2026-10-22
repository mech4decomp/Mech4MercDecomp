/* FUN_004e6520 - MLR/Adept armor-zone damage application (526 B) */

extern float g_7704c0;   /* 0x007704c0 */
extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_774150;   /* 0x00774150 */
extern double g_76d968;  /* 0x0076d968 */
extern int g_7dab44;     /* 0x007dab44 */
extern int g_7dab40;     /* 0x007dab40 */
extern void __cdecl FUN_004da670(void);
extern double __cdecl FUN_00707e70(int);
extern void __fastcall FUN_004e7a90(void);
extern void __fastcall FUN_004e6480(void);

__declspec(naked) void FUN_004e6520(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x20]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        fmul    dword ptr [edi + 0x14]
        fst     dword ptr [edi + 0x14]
        fcomp   dword ptr [g_7704c0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_004e6545
        mov     dword ptr [edi + 0x14], 0x3dcccccd
L_004e6545:
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [ecx]
        push    esi
        push    edi
        call    dword ptr [eax + 0x80]
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        jz      L_004e6564
        mov     edx, dword ptr [esi + 0x34]
        push    edx
        push    edi
        call    FUN_004da670
L_004e6564:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17fc]
        test    al, al
        mov     eax, dword ptr [edi + 0x14]
        jz      L_004e66b2
        fld     dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0xc], eax
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_004e65d2
        mov     al, byte ptr [edi + 0x1c]
        test    al, al
        jnz     L_004e65ba
        cmp     dword ptr [esi + 0x4c], 2
        jnz     L_004e65ba
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [g_774150]
        fstp    dword ptr [esp + 0xc]
L_004e65ba:
        cmp     al, 2
        jnz     L_004e65d2
        cmp     dword ptr [esi + 0x4c], 1
        jnz     L_004e65d2
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [g_774150]
        fstp    dword ptr [esp + 0xc]
L_004e65d2:
        fld     dword ptr [esi + 0x14]
        fcomp   dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 0x40
        jz      L_004e65f2
        push    0
        call    FUN_00707e70
        fadd    qword ptr [g_76d968]
        mov     ecx, dword ptr [esi + 0x28]
        fstp    qword ptr [ecx + 0x44]
L_004e65f2:
        cmp     byte ptr [edi + 0x1c], 3
        jnz     L_004e6603
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x18]
        fstp    dword ptr [esp + 0xc]
L_004e6603:
        fld     dword ptr [esi + 0x14]
        mov     edx, dword ptr [esp + 0xc]
        fcomp   dword ptr [g_76c5b0]
        mov     dword ptr [esp + 0x10], edx
        fnstsw  ax
        test    ah, 0x41
        jnz     L_004e6664
        fld     dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x40]
        test    ecx, ecx
        fsub    dword ptr [esp + 0xc]
        fst     dword ptr [esi + 0x14]
        jz      L_004e6634
        fld     dword ptr [ecx]
        fsub    dword ptr [esp + 0xc]
        fstp    dword ptr [ecx]
L_004e6634:
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_004e6691
        test    ecx, ecx
        fld     st(0)
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x10]
        fchs
        fst     dword ptr [esp + 0xc]
        jz      L_004e665b
        fld     st(0)
        fadd    dword ptr [ecx]
        fstp    dword ptr [ecx]
L_004e665b:
        mov     dword ptr [esi + 0x14], 0
        jmp     L_004e666c
L_004e6664:
        fld     dword ptr [esp + 0xc]
        fst     dword ptr [esp + 0xc]
L_004e666c:
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_004e6693
        mov     ecx, dword ptr [esi + 0x28]
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [ecx]
        push    edi
        push    edx
        call    dword ptr [eax + 0x10]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        jmp     L_004e6693
L_004e6691:
        fstp    st(0)
L_004e6693:
        movsx   edx, byte ptr [edi + 0x1c]
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [edi + 0x40]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        add     edi, 0x18
        push    edi
        push    edx
        call    dword ptr [eax + 0x8c]
        jmp     L_004e66e6
L_004e66b2:
        mov     dword ptr [esp + 0xc], eax
        cmp     byte ptr [edi + 0x1c], 3
        jnz     L_004e66c7
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x18]
        fstp    dword ptr [esp + 0xc]
L_004e66c7:
        mov     ecx, esi
        call    FUN_004e7a90
        cmp     eax, 2
        jnz     L_004e66e6
        mov     ecx, dword ptr [esi + 0x28]
        fld     dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx]
        push    edi
        push    ecx
        fstp    dword ptr [esp]
        call    dword ptr [edx + 0x10]
        fstp    st(0)
L_004e66e6:
        mov     ecx, esi
        call    FUN_004e6480
        mov     ecx, dword ptr [esi + 0x38]
        test    ecx, ecx
        mov     dword ptr [esi + 0x44], eax
        jz      L_004e66f9
        mov     dword ptr [ecx], eax
L_004e66f9:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L_004e6710
        fld     dword ptr [eax + 0x14]
        fadd    dword ptr [esi + 0x14]
        fld     dword ptr [eax + 0x10]
        fadd    dword ptr [esi + 0x10]
        fdivp   st(1), st(0)
        jmp     L_004e6716
L_004e6710:
        fld     dword ptr [esi + 0x14]
        fdiv    dword ptr [esi + 0x10]
L_004e6716:
        fst     dword ptr [esi + 0x48]
        mov     esi, dword ptr [esi + 0x3c]
        test    esi, esi
        jz      L_004e6727
        pop     edi
        fstp    dword ptr [esi]
        pop     esi
        ret     8
L_004e6727:
        pop     edi
        fstp    st(0)
        pop     esi
        ret     8
    }
}
