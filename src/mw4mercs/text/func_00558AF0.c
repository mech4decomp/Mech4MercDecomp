/*
 * FUN_00558af0 (2045 B) — Large object method with complex float
 * comparison logic and multiple dispatch paths.
 *
 * __thiscall (ECX = this), no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * NOTE: extern data/function symbols are referenced by name so MSVC6 emits
 * the correct memory-deref (A1/8B 0D/33 15/D8 1D/DB 05/D9 05) and rel32
 * (E8) opcode forms; the 4-byte address/displacement fields are relocations
 * that the diff harness masks.
 */

/* ---- external data symbols ---- */
extern int   g_7dab44;   /* 0x007dab44 */
extern int   g_7dab40;   /* 0x007dab40 */
extern float g_77d140;   /* 0x0077d140 */
extern int   g_7dc6e0;   /* 0x007dc6e0 */
extern float g_76d070;   /* 0x0076d070 */
extern float g_76d064;   /* 0x0076d064 */
extern int   g_858944;   /* 0x00858944 */
extern int   g_858940;   /* 0x00858940 */

/* ---- external functions ---- */
extern void __cdecl FUN_00628330(void);
extern void __cdecl FUN_00628310(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0055b4c0(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_005ba040(void);
extern void __cdecl FUN_006283b0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_005564b0(void);
extern void __cdecl FUN_004c3d50(void);
extern void __cdecl FUN_005ba2d0(void);
extern void __cdecl FUN_0055b500(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004e1800(void);
extern void __cdecl FUN_0048c160(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_00767550(void);
extern void __cdecl FUN_00628250(void);
extern void __cdecl FUN_00628280(void);
extern void __cdecl FUN_004c4140(void);
extern void __cdecl FUN_006282b0(void);
extern void __cdecl FUN_006282e0(void);
extern void __cdecl FUN_00627d40(void);

__declspec(naked) void __cdecl func_00558AF0(void)
{
    
__asm {
mov     eax, g_7dab44
        sub     esp, 0xa4
        push    ebx
        push    ebp
        push    esi
        mov     esi, g_7dab40
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, esi
        mov     ecx, dword ptr [ecx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628330
        lea     ebx, [edi + 0x6a0]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_ret_very_end
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 1
        jz      L_skip_flag_check
        mov     ecx, edi
        call    FUN_0055b4c0
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     eax, dword ptr [edi + 0x384]
        mov     ecx, dword ptr [eax + 0x3d4]
        call    FUN_005ba040
        mov     ecx, g_7dab44
        mov     edx, dword ptr [ecx]
        xor     edx, g_7dab40
        mov     ecx, dword ptr [edx + 0x40]
        mov     esi, eax
        push    esi
        xor     ecx, 0x85739531
        call    FUN_006283b0
        test    esi, esi
        jz      L_ret_very_end
        push    esi
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov     ecx, edi
        call    FUN_005564b0
        test    al, al
        jz      L_push_zero
        mov     eax, dword ptr [esi + 0xd8]
        push    eax
        jmp     L_after_push
L_push_zero:
        push    0
L_after_push:
        mov     ecx, dword ptr [edi + 0x6b0]
        call    FUN_004c3d50
L_skip_flag_check:
        mov     ecx, dword ptr [edi + 0x384]
        mov     ecx, dword ptr [ecx + 0x3d4]
        push    esi
        call    FUN_005ba2d0
        test    al, al
        jnz     L_continue
        push    0
        mov     ecx, edi
        call    FUN_0055b500
L_ret_early:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa4
        ret

L_continue:
        mov     dword ptr [esp + 0x50], 0
        mov     dword ptr [esp + 0x4c], 0
        mov     dword ptr [esp + 0x48], 0
        mov     eax, dword ptr [esi + 0x124]
        test    eax, eax
        jnz     L_has_124
        mov     eax, dword ptr [esi + 0x128]
        test    eax, eax
        jz      L_no_124_128
L_has_124:
        mov     edx, dword ptr [esi + 0xd8]
        add     edx, 0x80
        push    edx
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x7c]
        call    FUN_00417d80
        mov     eax, dword ptr [esp + 0x80]
        mov     ecx, dword ptr [esp + 0x90]
        mov     edx, dword ptr [esp + 0xa0]
        mov     dword ptr [esp + 0x34], eax
        lea     eax, [esp + 0xa4]
        mov     dword ptr [esp + 0x38], ecx
        push    eax
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x40], edx
        call    FUN_0040c410
        jmp     L_after_load

L_no_124_128:
        mov     esi, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [esi + 0x8c]
        add     esi, 0x80
        mov     dword ptr [esp + 0x34], ecx
        mov     edx, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x38], edx
        mov     eax, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x3c], eax

L_after_load:
        fld     dword ptr [esp + 0x38]
        fcomp   g_77d140
        fnstsw ax
        test    ah, 1
        jz      L_float_ok

        push    0
        push    0
        push    0
        push    0
        lea     ecx, [esp + 0x6c]
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        mov     dword ptr [esp + 0x74], 0xbf800000
        mov     dword ptr [esp + 0x78], 0xbf800000
        mov     dword ptr [esp + 0x7c], 0xbf800000
        push    0
        jmp     L_5928f

L_float_ok:
        mov     ecx, g_7dc6e0
        mov     ebp, dword ptr [ecx + 0x4c]
        push    1
        call    FUN_004e1800
        mov     ecx, g_7dc6e0
        push    2
        mov     dword ptr [esp + 0x44], eax
        call    FUN_004e1800
        mov     esi, dword ptr [ebp + 0x24]
        mov     ecx, esi
        mov     dword ptr [esp + 0x2c], eax
        call    dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [esi + 0x26c]
        lea     edx, [esi + 0x284]
        push    edx
        lea     ebx, [esi + 0x80]
        push    ebx
        call    FUN_0048c160
        push    ebx
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_0041c830
        lea     ecx, [esp + 0x68]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_00767550
        fld     dword ptr [esi + 0x224]
        fmul    g_76d070
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [esp + 0x10]
        fnstsw ax
        test    ah, 0x41
        jnz     L_check_neg
        mov     edx, g_7dab44
        mov     ecx, g_7dab40
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628250
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa4
        ret

L_check_neg:
        fld     dword ptr [esp + 0x10]
        fchs
        fcomp   dword ptr [esp + 0x18]
        fnstsw ax
        test    ah, 0x41
        jnz     L_check_flag_586
        mov     ecx, g_7dab44
        mov     edx, dword ptr [ecx]
        xor     edx, g_7dab40
        mov     ecx, dword ptr [edx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628280
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa4
        ret

L_check_flag_586:
        mov     al, byte ptr [edi + 0x586]
        test    al, al
        jz      L_check_flag_584
        mov     esi, dword ptr [edi + 0x6b8]
        test    esi, esi
        jz      L_check_flag_584

        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x5c]
        push    edx
        lea     eax, [esp + 0x64]
        push    eax
        mov     ecx, esi
        call    FUN_004c4140
        mov     ecx, dword ptr [esi + 0x2c8]
        mov     edx, dword ptr [esi + 0x2cc]
        mov     eax, dword ptr [esi + 0x2d0]
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [esi + 0x2d4]
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x44], eax
        call    dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [esi + 0x26c]
        lea     edx, [esi + 0x284]
        push    edx
        lea     eax, [esi + 0x80]
        push    eax
        call    FUN_0048c160
        fld     dword ptr [esp + 0x14]
        fmul    g_76d070
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 0x358]
        fcomp   dword ptr [esp + 0x18]
        fnstsw ax
        test    ah, 0x41
        jnz     L_592a1
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 0x35c]
        fcomp   dword ptr [esp + 0x18]
        fnstsw ax
        test    ah, 1
        jz      L_592a1
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 0x360]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw ax
        test    ah, 0x41
        jnz     L_592a1
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 0x364]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw ax
        test    ah, 1
        jz      L_592a1
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [esp + 0x14]
        fnstsw ax
        test    ah, 0x41
        jnz     L_586_neg_check
        mov     ecx, g_7dab44
        mov     edx, dword ptr [ecx]
        xor     edx, g_7dab40
        mov     ecx, dword ptr [edx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628250
L_58eb1:
        mov     eax, g_7dab44
        mov     ecx, dword ptr [eax]
        xor     ecx, g_7dab40
        mov     ecx, dword ptr [ecx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628310
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa4
        ret

L_586_neg_check:
        fld     dword ptr [esp + 0x14]
        fchs
        fcomp   dword ptr [esp + 0x18]
        fnstsw ax
        test    ah, 0x41
        jnz     L_586_mul_check
        mov     edx, g_7dab44
        mov     eax, dword ptr [edx]
        xor     eax, g_7dab40
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628280
        jmp     L_59207

L_586_mul_check:
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x40]
        fld     st(0)
        fchs
        fcomp   dword ptr [esp + 0x1c]
        fnstsw ax
        test    ah, 0x41
        jnz     L_586_check_ge
        mov     eax, g_7dab44
        fstp    st(0)
        mov     ecx, dword ptr [eax]
        xor     ecx, g_7dab40
        mov     ecx, dword ptr [ecx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_006282b0
        mov     edx, g_7dab44
        mov     ecx, g_7dab40
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628310
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa4
        ret

L_586_check_ge:
        fld     dword ptr [esp + 0x1c]
        fcomp   st(1)
        fnstsw ax
        fstp    st(0)
        test    ah, 0x41
        jnz     L_586_fild
        mov     ecx, g_7dab44
        mov     edx, dword ptr [ecx]
        xor     edx, g_7dab40
        mov     ecx, dword ptr [edx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_006282e0
        jmp     L_58eb1

L_586_fild:
        fild    g_858944
        push    ecx
        fild    g_858940
        lea     edx, [esp + 0x4c]
        lea     eax, [esp + 0x38]
        fstp    dword ptr [esp + 0x14]
        fld     g_76d064
        fsub    dword ptr [esp + 0x28]
        fmul    st, st(1)
        fstp    dword ptr [esp]
        push    ecx
        fld     g_76d064
        fsub    dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x3c]
        fmul    st, st(1)
        fstp    dword ptr [esp]
        push    ecx
        mov     ecx, dword ptr [esp + 0x3c]
        fstp    st(0)
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x54]
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [esp]
        push    edx
        mov     edx, g_7dab44
        push    eax
        mov     eax, dword ptr [edx]
        push    ecx
        xor     eax, g_7dab40
        mov     ecx, dword ptr [eax + 0x40]
        jmp     L_592d7

L_check_flag_584:
        mov     al, byte ptr [edi + 0x584]
        test    al, al
        jz      L_592a1
        mov     esi, dword ptr [edi + 0x6b4]
        test    esi, esi
        jz      L_592a1

        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x60]
        push    eax
        lea     ecx, [esp + 0x60]
        push    ecx
        mov     ecx, esi
        call    FUN_004c4140
        mov     edx, dword ptr [esi + 0x2c8]
        mov     ecx, dword ptr [esi + 0x2d0]
        mov     eax, dword ptr [esi + 0x2cc]
        mov     dword ptr [esp + 0x24], edx
        mov     edx, dword ptr [esi + 0x2d4]
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x44], edx
        call    dword ptr [esi + 0x1c]
        lea     eax, [esi + 0x284]
        push    eax
        lea     ecx, [esi + 0x80]
        push    ecx
        mov     ecx, dword ptr [esi + 0x26c]
        call    FUN_0048c160
        fld     dword ptr [esp + 0x14]
        fmul    g_76d070
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 0x348]
        fcomp   dword ptr [esp + 0x18]
        fnstsw ax
        test    ah, 0x41
        jnz     L_592a1
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 0x34c]
        fcomp   dword ptr [esp + 0x18]
        fnstsw ax
        test    ah, 1
        jz      L_592a1
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 0x350]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw ax
        test    ah, 0x41
        jnz     L_592a1
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 0x354]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw ax
        test    ah, 1
        jz      L_592a1
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [esp + 0x14]
        fnstsw ax
        test    ah, 0x41
        jnz     L_584_neg_check
        mov     edx, g_7dab44
        mov     eax, dword ptr [edx]
        xor     eax, g_7dab40
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628250
        jmp     L_59207

L_584_neg_check:
        fld     dword ptr [esp + 0x14]
        fchs
        fcomp   dword ptr [esp + 0x18]
        fnstsw ax
        test    ah, 0x41
        jnz     L_584_mul_check
        mov     eax, g_7dab44
        mov     ecx, dword ptr [eax]
        xor     ecx, g_7dab40
        mov     ecx, dword ptr [ecx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628280
        mov     edx, g_7dab44
        mov     ecx, g_7dab40
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628310
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa4
        ret

L_584_mul_check:
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x2c]
        fld     st(0)
        fchs
        fcomp   dword ptr [esp + 0x1c]
        fnstsw ax
        test    ah, 0x41
        jnz     L_584_check_ge
        mov     ecx, g_7dab44
        fstp    st(0)
        mov     edx, dword ptr [ecx]
        xor     edx, g_7dab40
        mov     ecx, dword ptr [edx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_006282b0
        mov     eax, g_7dab44
        mov     ecx, dword ptr [eax]
        xor     ecx, g_7dab40
        mov     ecx, dword ptr [ecx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628310
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa4
        ret

L_584_check_ge:
        fld     dword ptr [esp + 0x1c]
        fcomp   st(1)
        fnstsw ax
        fstp    st(0)
        test    ah, 0x41
        jnz     L_584_fild
        mov     edx, g_7dab44
        mov     eax, dword ptr [edx]
        xor     eax, g_7dab40
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        call    FUN_006282e0
L_59207:
        mov     ecx, g_7dab44
        mov     edx, dword ptr [ecx]
        xor     edx, g_7dab40
        mov     ecx, dword ptr [edx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628310
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa4
        ret

L_584_fild:
        fild    g_858944
        push    ecx
        fild    g_858940
        mov     edx, dword ptr [esp + 0x44]
        lea     eax, [esp + 0x4c]
        fstp    dword ptr [esp + 0x14]
        fld     g_76d064
        fsub    dword ptr [esp + 0x2c]
        fmul    st, st(1)
        fstp    dword ptr [esp]
        push    ecx
        fld     g_76d064
        fsub    dword ptr [esp + 0x2c]
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x50]
        fmul    st, st(1)
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x44]
        fstp    st(0)
        fld     dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        push    edx
L_5928f:
        mov     eax, g_7dab44
        mov     ecx, dword ptr [eax]
        xor     ecx, g_7dab40
        mov     ecx, dword ptr [ecx + 0x40]
        jmp     L_592d7

L_592a1:
        fild    g_858944
        push    0
        push    0
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fild    g_858940
        mov     ecx, g_7dab44
        lea     edx, [esp + 0x58]
        lea     eax, [esp + 0x44]
        fstp    dword ptr [esp]
        push    edx
        mov     edx, dword ptr [ecx]
        mov     ecx, g_7dab40
        push    eax
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x40]
        push    ebp
L_592d7:
        xor     ecx, 0x85739531
        call    FUN_00627d40
L_ret_very_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa4
        ret
    }


}
