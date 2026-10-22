/*
 * FUN_005A5360 (1448 B) — gameplay data-block function (block 0x5A5355).
 * __thiscall (ecx=this, ret 8). Processes a list of objects: computes
 * distance vectors, does FPU compare/flag logic, builds MLR-style records
 * via FUN_00534630/FUN_004ea0f0/FUN_0040c5d0/FUN_005885e0/FUN_004d5b70,
 * and updates a timer field [ebp+0x440]. Calls FUN_00637a20 (log) with
 * various message ids.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00534630(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_005885e0(void);
extern void __cdecl FUN_004d5b70(void);

extern unsigned int g_7f2d1c;
extern float g_76c5b0;
extern float g_77d0fc;

__declspec(naked) void FUN_005A5360(void)
{
    __asm {
        sub     esp, 0xe0
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x10]
        shr     eax, 0x13
        test    al, 1
        push    esi
        push    edi
        mov     byte ptr [esp + 0x11], 1
        je      L_53a1
        mov     esi, dword ptr [esp + 0xf8]
        xor     ebx, ebx
        cmp     esi, ebx
        je      L_58fb
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        je      L_539b
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_539b:
        push    esi
        jmp     L_58f3
    L_53a1:
        mov     ecx, dword ptr [ebp + 0x2fc]
        xor     ebx, ebx
        cmp     ecx, ebx
        je      L_53dd
        mov     edi, dword ptr [esp + 0xf8]
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x11]
        push    eax
        push    edi
        call    dword ptr [edx + 0x108]
        test    al, al
        jne     L_53e4
        cmp     edi, ebx
        je      L_58fb
        mov     eax, dword ptr [edi]
        cmp     eax, ebx
        je      L_58f2
        jmp     L_58e9
    L_53dd:
        mov     edi, dword ptr [esp + 0xf8]
    L_53e4:
        cmp     dword ptr [edi + 4], ebx
        mov     byte ptr [esp + 0x12], 1
        mov     dword ptr [esp + 0x20], ebx
        jbe     L_57ed
        xor     esi, esi
        mov     dword ptr [esp + 0x1c], esi
    L_53fc:
        mov     eax, dword ptr [edi]
        mov     edi, dword ptr [esi + eax + 8]
        add     esi, eax
        mov     eax, dword ptr [edi + 0x10]
        mov     ecx, eax
        shr     ecx, 0xb
        test    cl, 1
        je      L_571a
        fld     dword ptr [edi + 0x198]
        mov     edx, dword ptr [edi + 4]
        fsub    dword ptr [ebp + 0x198]
        mov     eax, dword ptr [edx]
        cmp     eax, 0x429
        fld     dword ptr [edi + 0x19c]
        fsub    dword ptr [ebp + 0x19c]
        mov     byte ptr [esp + 0x12], bl
        fld     dword ptr [edi + 0x1a0]
        fsub    dword ptr [ebp + 0x1a0]
        fld     st(1)
        fmul    st(0), st(2)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x14]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        jne     L_57c5
        fld     dword ptr [edi + 0x3b8]
        mov     ecx, dword ptr [g_7f2d1c]
        fstp    dword ptr [esp + 0x18]
        push    0x117
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x18]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      L_54b7
        mov     ecx, dword ptr [g_7f2d1c]
        push    0x118
        call    FUN_00637a20
        fstp    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [g_7f2d1c]
        push    0x11a
        call    FUN_00637a20
        mov     eax, 0x20000
        jmp     L_5530
    L_54b7:
        fld     dword ptr [edi + 0x3b8]
        mov     ecx, dword ptr [g_7f2d1c]
        fstp    dword ptr [esp + 0x18]
        push    0x112
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x18]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      L_5507
        mov     ecx, dword ptr [g_7f2d1c]
        push    0x113
        call    FUN_00637a20
        fstp    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [g_7f2d1c]
        push    0x115
        call    FUN_00637a20
        mov     eax, 0x40000
        jmp     L_5530
    L_5507:
        mov     ecx, dword ptr [g_7f2d1c]
        push    0x10e
        call    FUN_00637a20
        fstp    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [g_7f2d1c]
        push    0x110
        call    FUN_00637a20
        mov     eax, 0x60000
    L_5530:
        mov     ecx, dword ptr [ebp + 0x10]
        and     ecx, 0x60000
        cmp     ecx, eax
        jl      L_55f5
        mov     al, byte ptr [esp + 0x11]
        fstp    st(0)
        cmp     al, bl
        je      L_57c5
        push    ebx
        push    2
        push    0x44
        push    4
        lea     ecx, [esp + 0xbc]
        call    FUN_00534630
        lea     edx, [ebp + 0x14]
        push    edx
        lea     ecx, [esp + 0xc0]
        call    FUN_004ea0f0
        lea     eax, [esi + 0x18]
        push    eax
        lea     ecx, [esp + 0xd0]
        mov     byte ptr [esp + 0xc8], bl
        mov     word ptr [esp + 0xca], bx
        call    FUN_0040c5d0
        add     esi, 0xc
        push    esi
        lea     ecx, [esp + 0xdc]
        call    FUN_0040c5d0
        add     edi, 0x14
        push    edi
        lea     ecx, [esp + 0xc8]
        call    FUN_005885e0
        lea     ecx, [esp + 0xac]
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0xc4], 0x47c35000
        mov     byte ptr [esp + 0xcc], 5
        mov     dword ptr [esp + 0xe8], 0
        mov     byte ptr [esp + 0xec], bl
        mov     dword ptr [esp + 0xf0], 0xffffffff
        call    FUN_004d5b70
        jmp     L_57c5
    L_55f5:
        fld     dword ptr [esp + 0x14]
        fcomp   st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        fstp    st(0)
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_57c5
        fld     dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_7f2d1c]
        fsqrt
        push    0x11c
        fmul    dword ptr [edi + 0x3b8]
        fstp    dword ptr [esp + 0x18]
        call    FUN_00637a20
        fchs
        fcomp   dword ptr [edi + 0x19c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_565a
        mov     edx, dword ptr [edi + 0xe0]
        cmp     dword ptr [edx + 0x14], 9
        jne     L_565a
        mov     ecx, dword ptr [g_7f2d1c]
        push    0x11d
        mov     byte ptr [esp + 0x17], 5
        call    FUN_00637a20
        jmp     L_5663
    L_565a:
        fld     dword ptr [esp + 0x18]
        mov     byte ptr [esp + 0x13], 9
    L_5663:
        fmul    dword ptr [esp + 0x14]
        mov     al, byte ptr [esp + 0x11]
        cmp     al, bl
        fstp    dword ptr [esp + 0x14]
        je      L_57c5
        push    ebx
        push    2
        push    0x44
        push    4
        lea     ecx, [esp + 0x78]
        call    FUN_00534630
        lea     eax, [ebp + 0x14]
        push    eax
        lea     ecx, [esp + 0x7c]
        call    FUN_004ea0f0
        lea     ecx, [esi + 0x18]
        push    ecx
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x84], bl
        mov     word ptr [esp + 0x86], bx
        call    FUN_0040c5d0
        add     esi, 0xc
        push    esi
        lea     ecx, [esp + 0x98]
        call    FUN_0040c5d0
        mov     ax, word ptr [edi + 0x16]
        mov     dl, byte ptr [edi + 0x14]
        mov     ecx, dword ptr [esp + 0x14]
        mov     word ptr [esp + 0x82], ax
        mov     byte ptr [esp + 0x80], dl
        mov     dl, byte ptr [esp + 0x13]
        lea     eax, [esp + 0x68]
        mov     dword ptr [esp + 0x7c], ecx
        push    eax
        mov     ecx, ebp
        mov     byte ptr [esp + 0x88], dl
        mov     dword ptr [esp + 0xa4], 0
        mov     byte ptr [esp + 0xa8], bl
        mov     dword ptr [esp + 0xac], 0xffffffff
        call    FUN_004d5b70
        jmp     L_57c5
    L_571a:
        mov     ecx, dword ptr [ebp + 0x10]
        and     eax, 0x60000
        and     ecx, 0x60000
        cmp     ecx, eax
        jg      L_57c1
        cmp     byte ptr [esp + 0x11], bl
        je      L_57c5
        push    ebx
        push    2
        push    0x44
        push    4
        lea     ecx, [esp + 0x34]
        call    FUN_00534630
        lea     edx, [edi + 0x14]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_004ea0f0
        lea     eax, [esi + 0x24]
        push    eax
        lea     ecx, [esp + 0x48]
        mov     byte ptr [esp + 0x40], bl
        mov     word ptr [esp + 0x42], bx
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x50], ecx
        mov     cl, byte ptr [ebp + 0x14]
        mov     dword ptr [esp + 0x58], eax
        mov     dword ptr [esp + 0x54], edx
        mov     dx, word ptr [ebp + 0x16]
        lea     eax, [esp + 0x24]
        mov     byte ptr [esp + 0x3c], cl
        push    eax
        mov     ecx, edi
        mov     word ptr [esp + 0x42], dx
        mov     dword ptr [esp + 0x3c], 0x47c35000
        mov     byte ptr [esp + 0x44], 5
        mov     dword ptr [esp + 0x60], 0
        mov     byte ptr [esp + 0x64], bl
        mov     dword ptr [esp + 0x68], 0xffffffff
        call    FUN_004d5b70
        jmp     L_57c5
    L_57c1:
        mov     byte ptr [esp + 0x12], bl
    L_57c5:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0xf8]
        mov     esi, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ecx + 4]
        inc     eax
        add     esi, 0x38
        cmp     eax, edx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x1c], esi
        mov     edi, ecx
        jb      L_53fc
    L_57ed:
        mov     ecx, dword ptr [g_7f2d1c]
        push    0x11f
        call    FUN_00637a20
        fstp    dword ptr [esp + 0x1c]
        mov     al, byte ptr [esp + 0x12]
        xor     dl, dl
        cmp     al, bl
        je      L_5879
        fld     dword ptr [ebp + 0x440]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_5841
        fld     dword ptr [ebp + 0x440]
        fsub    dword ptr [esp + 0x1c]
        fst     dword ptr [ebp + 0x440]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L_5841
        mov     dword ptr [ebp + 0x440], ebx
    L_5841:
        fld     dword ptr [ebp + 0x440]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L_589f
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [ebp + 0x440]
        fst     dword ptr [ebp + 0x440]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_589f
        mov     dword ptr [ebp + 0x440], ebx
        jmp     L_589f
    L_5879:
        mov     esi, dword ptr [ebp + 0xd8]
        mov     edi, dword ptr [esp + 0xf4]
        add     esi, 0x50
        mov     ecx, 0xc
        rep     movsd
        mov     edi, dword ptr [esp + 0xf8]
        mov     dl, 1
        mov     dword ptr [ebp + 0x440], ebx
    L_589f:
        fld     dword ptr [ebp + 0x440]
        mov     eax, dword ptr [ebp + 0xe0]
        fmul    dword ptr [g_77d0fc]
        mov     ecx, dword ptr [eax + 0x14]
        cmp     ecx, 1
        fstp    dword ptr [ebp + 0x444]
        je      L_58df
        mov     ecx, dword ptr [ebp + 0x10]
        shr     ecx, 6
        test    cl, 1
        je      L_58df
        mov     dword ptr [ebp + 0x130], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     al, dl
        pop     ebx
        add     esp, 0xe0
        ret     8
    L_58df:
        cmp     edi, ebx
        je      L_58fb
        mov     eax, dword ptr [edi]
        cmp     eax, ebx
        je      L_58f2
    L_58e9:
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_58f2:
        push    edi
    L_58f3:
        call    FUN_004084e0
        add     esp, 4
    L_58fb:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xe0
        ret     8
    }
}
