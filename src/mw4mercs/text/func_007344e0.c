/*
 * FUN_007344E0 (716 B) — Switch-dispatch object parameter setter.
 *
 * Reads a mode from param_2 (switch on 1/2/4/8/0x10 via a jump table),
 * and sets various float/int fields on the object at ESI (param_1) and
 * calls audio/volume helpers (FUN_0075b0d0 / FUN_0075b4a0 / FUN_0075b4d0 /
 * FUN_0075b510). Uses _ftol (FUN_0075db4a) and __allmul (FUN_0075dc60).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_0075dc60(void);   /* __allmul */
extern void __cdecl FUN_0075b0d0(void);
extern void __cdecl FUN_0075b4a0(void);
extern void __cdecl FUN_00734470(void);
extern void __cdecl FUN_0075b4d0(void);
extern void __cdecl FUN_0075b510(void);

extern char DAT_008aa288;
extern char DAT_0087dd0a;
extern int DAT_00856b8c;
extern char byte_tbl_7347c4[];
extern int jmp_tbl_7347ac[];
extern float f_76c5b0;
extern float f_76d064;
extern float f_7a6108;
extern float f_7a60fc;
extern double d_76d968;
extern double d_77b648;
extern double d_7a6100;
extern double d_761110;

__declspec(naked) void __cdecl FUN_007344e0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esi + 4]
        xor     ebx, ebx
        cmp     edi, ebx
        jz      L_7347a6
        cmp     byte ptr [DAT_008aa288], bl
        jnz     L_7347a6
        mov     eax, dword ptr [esp + 0x14]
        dec     eax
        cmp     eax, 0xf
        ja      L_7347a6
        xor     ecx, ecx
        mov     cl, byte ptr [eax + byte_tbl_7347c4]
        jmp     dword ptr [ecx*4 + jmp_tbl_7347ac]
L_73451d:
        fld     dword ptr [esp + 0x18]
        call    FUN_0075db4a
        push    ebx
        push    0x989680
        push    edx
        push    eax
        call    FUN_0075dc60
        push    edx
        push    eax
        push    edi
        call    FUN_0075b0d0
        mov     edx, dword ptr [esi + 0x18]
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    edx
        call    FUN_0075b4a0
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
L_73454e:
        fld     dword ptr [esp + 0x1c]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x18]
        push    eax
        call    FUN_0075db4a
        push    eax
        mov     ecx, esi
        call    FUN_00734470
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
L_73456f:
        fild    dword ptr [esi + 0xb8]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0xd8], eax
        fmul    dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0xdc], ecx
        fiadd   dword ptr [esi + 0xc0]
        call    FUN_0075db4a
        fild    dword ptr [esi + 0xbc]
        mov     dword ptr [esi + 0xc8], eax
        fmul    dword ptr [esp + 0x1c]
        fiadd   dword ptr [esi + 0xc4]
        call    FUN_0075db4a
        pop     edi
        mov     dword ptr [esi + 0xcc], eax
        pop     esi
        pop     ebx
        ret     0x10
L_7345bf:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [f_76c5b0]
        __emit 0xDF  /* FNSTSW AX no-WAIT (MSVC inserts 9B WAIT) */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x1 (MSVC rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x01
        jz      L_7345d8
        mov     dword ptr [esp + 0x18], 0
L_7345d8:
        fld     dword ptr [esp + 0x18]
        fcomp   qword ptr [d_76d968]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_7345f1
        mov     dword ptr [esp + 0x18], 0x3f800000
L_7345f1:
        cmp     dword ptr [DAT_00856b8c], ebx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0xe0], edx
        jz      L_7347a6
        mov     esi, dword ptr [esi + 0xc]
        cmp     esi, ebx
        jz      L_7347a6
        fld     dword ptr [esp + 0x18]
        mov     byte ptr [DAT_0087dd0a], 1
        fcomp   dword ptr [f_76c5b0]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      L_734641
        push    0xffffd8f0
        push    esi
        call    FUN_0075b4d0
        pop     edi
        pop     esi
        mov     byte ptr [DAT_0087dd0a], bl
        pop     ebx
        ret     0x10
L_734641:
        fldln2
        fld     dword ptr [esp + 0x18]
        fyl2x
        fmul    qword ptr [d_77b648]
        call    FUN_0075db4a
        push    eax
        push    esi
        call    FUN_0075b4d0
        pop     edi
        pop     esi
        mov     byte ptr [DAT_0087dd0a], bl
        pop     ebx
        ret     0x10
L_734667:
        fld     dword ptr [esp + 0x18]
        fcomp   qword ptr [d_761110]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_734680
        mov     dword ptr [esp + 0x18], 0xbf800000
L_734680:
        fld     dword ptr [esp + 0x18]
        fcomp   qword ptr [d_76d968]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_734699
        mov     dword ptr [esp + 0x18], 0x3f800000
L_734699:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0xe4], eax
        cmp     dword ptr [DAT_00856b8c], ebx
        jz      L_7347a6
        mov     esi, dword ptr [esi + 0xc]
        cmp     esi, ebx
        jz      L_7347a6
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [f_76c5b0]
        fld     dword ptr [esp + 0x18]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_734728
        fcomp   dword ptr [f_7a6108]
        mov     byte ptr [DAT_0087dd0a], 1
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_7346fa
        push    0x2710
        push    esi
        call    FUN_0075b510
        pop     edi
        pop     esi
        mov     byte ptr [DAT_0087dd0a], bl
        pop     ebx
        ret     0x10
L_7346fa:
        fld     dword ptr [f_76d064]
        fsub    dword ptr [esp + 0x18]
        fldln2
        fxch
        fyl2x
        fmul    qword ptr [d_7a6100]
        call    FUN_0075db4a
        push    eax
        push    esi
        call    FUN_0075b510
        pop     edi
        pop     esi
        mov     byte ptr [DAT_0087dd0a], bl
        pop     ebx
        ret     0x10
L_734728:
        fcomp   dword ptr [f_76c5b0]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_734792
        fld     dword ptr [esp + 0x18]
        mov     byte ptr [DAT_0087dd0a], 1
        fcomp   dword ptr [f_7a60fc]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      L_734764
        push    0xffffd8f0
        push    esi
        call    FUN_0075b510
        pop     edi
        pop     esi
        mov     byte ptr [DAT_0087dd0a], bl
        pop     ebx
        ret     0x10
L_734764:
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [f_76d064]
        fldln2
        fxch
        fyl2x
        fmul    qword ptr [d_77b648]
        call    FUN_0075db4a
        push    eax
        push    esi
        call    FUN_0075b510
        pop     edi
        pop     esi
        mov     byte ptr [DAT_0087dd0a], bl
        pop     ebx
        ret     0x10
L_734792:
        push    ebx
        push    esi
        mov     byte ptr [DAT_0087dd0a], 1
        call    FUN_0075b510
        mov     byte ptr [DAT_0087dd0a], bl
L_7347a6:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
