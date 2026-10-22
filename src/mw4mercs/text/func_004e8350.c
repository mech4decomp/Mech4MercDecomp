/*
 * FUN_004E8350 (641 B) — MLR BSP-tree traversal (recursive).
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params: param_1, param_2, param_3).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7b220c;                 /* DAT_007b220c */
extern void __cdecl sub_4e8350(void);  /* recursive call target (rel32 masked) */

__declspec(naked) void __fastcall FUN_004e8350(void)
{
    __asm {
        sub     esp, 0x10
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx + 8]
        push    ebx
        mov     ebx, dword ptr [edx + 0xc]
        push    ebp
        mov     ebp, dword ptr [edx]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x1c], eax
        mov     esi, ecx

    L8369:
        mov     ecx, dword ptr [esp + 0x1c]
        fld     dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ecx + 0x20c]
        xor     edi, edi
        mov     di, word ptr [esi]
        shl     edi, 4
        fmul    dword ptr [edi + eax + 4]
        add     edi, eax
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [edi + 8]
        faddp   st(1), st(0)
        fld     dword ptr [edi]
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [ebp + 4]
        fmul    dword ptr [edi + 4]
        fld     dword ptr [ebp + 8]
        fmul    dword ptr [edi + 8]
        faddp   st(1), st(0)
        fld     dword ptr [ebp]
        fmul    dword ptr [edi]
        faddp   st(1), st(0)
        fsub    dword ptr [edi + 0xc]
        fld     dword ptr [g_7b220c]
        fchs
        fcomp   dword ptr [esp + 0x10]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L8495

        fdiv    dword ptr [esp + 0x10]
        fchs
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [esp + 0x28]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L8483
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [esp + 0x2c]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L8412

        mov     si, word ptr [esi + 4]
        test    si, si
        jz      L85C5
        mov     ecx, dword ptr [ebx + 0x168]
        and     esi, 0xffff
        lea     eax, [esi + esi*2]
        lea     esi, [ecx + eax*2]
        jmp     L8369

    L8412:
        mov     cx, word ptr [esi + 4]
        test    cx, cx
        jz      L8468
        fld     dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x2c]
        fcomp   dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], eax
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L843A
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], eax
    L843A:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x2c]
        push    eax
        and     ecx, 0xffff
        push    edx
        mov     edx, dword ptr [ebx + 0x168]
        lea     ecx, [ecx + ecx*2]
        lea     ecx, [edx + ecx*2]
        call    sub_4e8350
        test    al, al
        jnz     L85B9
        mov     edx, dword ptr [esp + 0x24]

    L8468:
        mov     eax, dword ptr [edx + 4]
        mov     ecx, dword ptr [edi]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edi + 4]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [edi + 8]
        mov     dword ptr [eax + 8], ecx
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x28], eax

    L8483:
        mov     si, word ptr [esi + 2]
        test    si, si
        jz      L858C
        jmp     L8575

    L8495:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_7b220c]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L8554
        fdiv    dword ptr [esp + 0x10]
        fchs
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [esp + 0x28]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L8549
        xor     ecx, ecx
        mov     cx, word ptr [esi + 2]
        test    cx, cx
        jz      L859F
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [esp + 0x2c]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L84F8
        mov     eax, dword ptr [ebx + 0x168]
        and     ecx, 0xffff
        lea     ecx, [ecx + ecx*2]
        lea     esi, [eax + ecx*2]
        jmp     L8369
    L84F8:
        fld     dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x2c]
        fcomp   dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x18], eax
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L8517
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x18], eax
    L8517:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        mov     eax, dword ptr [esp + 0x2c]
        push    eax
        and     ecx, 0xffff
        push    edx
        mov     edx, dword ptr [ebx + 0x168]
        lea     ecx, [ecx + ecx*2]
        lea     ecx, [edx + ecx*2]
        call    sub_4e8350
        test    al, al
        jnz     L85B9
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x28], eax
    L8549:
        mov     si, word ptr [esi + 4]
        test    si, si
        jz      L85C5
        jmp     L8575

    L8554:
        fcomp   dword ptr [g_7b220c]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L856C
        mov     si, word ptr [esi + 2]
        test    si, si
        jz      L85B2
        jmp     L8575
    L856C:
        mov     si, word ptr [esi + 4]
        test    si, si
        jz      L85C5

    L8575:
        mov     eax, dword ptr [ebx + 0x168]
        and     esi, 0xffff
        lea     ecx, [esi + esi*2]
        lea     esi, [eax + ecx*2]
        jmp     L8369

    L858C:
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x18], ecx
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret     0xc

    L859F:
        mov     edx, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x18], edx
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret     0xc

    L85B2:
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [ebp + 0x18], eax
    L85B9:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret     0xc

    L85C5:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     0xc
    }
}
