/*
 * FUN_006AB59C (extent 0x6AB59C-0x6AB8AF, 787 bytes) - ANIM in-.text block.
 * __thiscall-style (ecx = this), ret 8. Transcribed from capstone disasm.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d598;

extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_006992f0(void);
extern void __cdecl FUN_006ac2c0(void);

__declspec(naked) void func_006AB59C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        fld     dword ptr [esp + 4]
        push    esi
        fcomp   dword ptr [g_0076d598]
        mov     esi, ecx
        fnstsw  ax
        test    ah, 0x40
        jne     L_b7fd
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x64]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_b5d3
        call    FUN_00699160
        jmp     L_b5ec
L_b5d3:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_b5ec:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x8c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_b60a
        call    FUN_00699160
        jmp     L_b623
L_b60a:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_b623:
        mov     al, byte ptr [esp + 0xc]
        test    al, al
        jne     L_b7eb
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x60]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_b64a
        call    FUN_00699160
        jmp     L_b663
L_b64a:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_b663:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x68]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_b67e
        call    FUN_00699160
        jmp     L_b697
L_b67e:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_b697:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x6c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_b6b2
        call    FUN_00699160
        jmp     L_b6cb
L_b6b2:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_b6cb:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x70]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_b6e6
        call    FUN_00699160
        jmp     L_b6ff
L_b6e6:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_b6ff:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x88]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_b71d
        call    FUN_00699160
        jmp     L_b736
L_b71d:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_b736:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x90]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_b754
        call    FUN_00699160
        jmp     L_b76d
L_b754:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_b76d:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x94]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_b78b
        call    FUN_00699160
        jmp     L_b7a4
L_b78b:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_b7a4:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x98]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_b7d2
        call    FUN_00699160
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esi + 0x20]
        pop     esi
        ret     8
L_b7d2:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_b7eb:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esi + 0x20]
        pop     esi
        ret     8
L_b7fd:
        fld     dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x64]
        fcom    dword ptr [g_0076c5b0]
        fst     dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x40
        je      L_b81d
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        call    FUN_00699160
        jmp     L_b836
L_b81d:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        call    FUN_006992f0
L_b836:
        mov     ecx, dword ptr [esi + 0x8c]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        call    FUN_006ac2c0
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        jne     L_b8a3
        mov     ecx, dword ptr [esi + 0x60]
        push    edi
        call    FUN_006ac2c0
        mov     ecx, dword ptr [esi + 0x68]
        push    edi
        call    FUN_006ac2c0
        mov     ecx, dword ptr [esi + 0x6c]
        push    edi
        call    FUN_006ac2c0
        mov     ecx, dword ptr [esi + 0x70]
        push    edi
        call    FUN_006ac2c0
        mov     ecx, dword ptr [esi + 0x88]
        push    edi
        call    FUN_006ac2c0
        mov     ecx, dword ptr [esi + 0x90]
        push    edi
        call    FUN_006ac2c0
        mov     ecx, dword ptr [esi + 0x94]
        push    edi
        call    FUN_006ac2c0
        mov     ecx, dword ptr [esi + 0x98]
        push    edi
        call    FUN_006ac2c0
L_b8a3:
        pop     edi
        mov     dword ptr [esi + 0x20], 0
        pop     esi
        ret     8
    }
}
