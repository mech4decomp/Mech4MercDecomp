/*
 * FUN_006b0150 (445 B) — __fastcall (ECX = this), RET 0.
 *
 * Iterates a linked list of 0xC-byte elements between this+0x44 and
 * this+0x48, computing squared distances with FPU and dispatching to
 * FUN_006ae610 / FUN_006aff40 / FUN_006ae880 based on flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_007f2464;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00687800(void);
extern void __cdecl FUN_006af430(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006ae260(void);
extern void __cdecl FUN_0068d280(void);
extern void __cdecl FUN_006ae610(void);
extern void __cdecl FUN_006aff40(void);
extern void __cdecl FUN_006ae880(void);
extern void __cdecl FUN_006af020(void);

__declspec(naked) void __fastcall func_006b0150(int thisptr)
{
    __asm {
        sub     esp, 0x40
        mov     eax, dword ptr [DAT_007f2464]
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        mov     byte ptr [esp + 0x10], 0x0
        call    FUN_006f4950
        mov     ecx, dword ptr [esi + 0x54]
        mov     edx, dword ptr [esi + 0x50]
        lea     edi, [esi + 0x50]
        push    ecx
        push    edx
        mov     ecx, edi
        call    FUN_00687800
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [esi + 0x44]
        mov     ecx, dword ptr [esi + 0x48]
        sub     ecx, edx
        mov     dword ptr [esi + 0x60], eax
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        jz      L_302
        mov     edx, dword ptr [esi + 0x44]
        mov     ecx, dword ptr [esi + 0x48]
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x1
        jnz     L_1cb
        mov     ecx, esi
        call    FUN_006af430
        call    FUN_006f49a0
        pop     edi
        pop     esi
        add     esp, 0x40
        ret
L_1cb:
        mov     ecx, dword ptr [esi + 0x44]
        lea     edx, [esp + 0x8]
        push    edx
        mov     dword ptr [esp + 0xc], ecx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    FUN_006ae260
        mov     ecx, dword ptr [esp + 0x8]
        cmp     ecx, dword ptr [esi + 0x48]
        jz      L_2f1
L_1f5:
        mov     eax, dword ptr [ecx + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax + 0x10]
        fsub    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [ecx]
        fld     dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x44], edx
        fchs
        mov     edx, dword ptr [eax + 0x48]
        fld     dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x14], edx
        fsub    dword ptr [esp + 0x20]
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, eax
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x10]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        jnz     L_243
        mov     ecx, dword ptr [ecx + 0x8]
        jmp     L_245
L_243:
        mov     ecx, edx
L_245:
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x24], edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [esp + 0x28], edx
        mov     ecx, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x34], ecx
        lea     eax, [esp + 0x24]
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [esi + 0x34]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        mov     ecx, dword ptr [edx + 0x48]
        call    FUN_0068d280
        test    eax, eax
        jz      L_2a1
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_006ae610
        jmp     L_2d6
L_2a1:
        mov     ecx, dword ptr [esp + 0x8]
        test    byte ptr [ecx + 0x8], 0x1
        jz      L_2ba
        lea     edx, [esp + 0x18]
        push    edx
        push    ecx
        mov     ecx, esi
        call    FUN_006aff40
        jmp     L_2d6
L_2ba:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [esp + 0x14]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_2da
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_006ae880
L_2d6:
        mov     ecx, dword ptr [esp + 0x8]
L_2da:
        mov     eax, dword ptr [esi + 0x48]
        add     ecx, 0xc
        cmp     ecx, eax
        mov     byte ptr [esp + 0xc], 0x0
        mov     dword ptr [esp + 0x8], ecx
        jnz     L_1f5
L_2f1:
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    FUN_006af020
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi + 0x60], edx
L_302:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        add     esp, 0x40
        ret
    }
}
