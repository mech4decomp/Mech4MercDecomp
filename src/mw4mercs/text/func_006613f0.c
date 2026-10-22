/*
 * FUN_006613f0 (816 B) — __thiscall RET 0x8. ABL dispatch/selection routine:
 * queries several string/state predicates via virtual calls + FUN_00415230,
 * then builds a filtered list of candidates (FUN_00662d50/da0/d70/d90) and
 * picks one, returning a status code (0x7d8/0x7db/0x7dc/0x7df/0x7e0/0x7e7).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f25c0;
extern int g_007f20f0;
extern int g_007f2104;
extern int g_007f1f84;

extern char __cdecl FUN_00415230(int);
extern void __cdecl FUN_00662d50(void);
extern void __cdecl FUN_00662da0(void);
extern void __cdecl FUN_00662d70(void);
extern void __cdecl FUN_00662d90(void);
extern int __cdecl FUN_00414fd0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_006613f0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebp]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [g_007f25c0]
        mov     ecx, ebp
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      L_ret_7e0
        mov     edx, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [edx + 0xf4]
        cmp     al, 0x1
        jz      L_ret_7e0
        mov     eax, dword ptr [ebp]
        mov     edi, dword ptr [g_007f20f0]
        mov     ecx, ebp
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_61459
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x7db
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_61459:
        mov     edx, dword ptr [ebp]
        mov     edi, dword ptr [g_007f2104]
        mov     ecx, ebp
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_614af
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax + 0x34]
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x2f0]
        dec     eax
        jz      L_ret_7e7
        dec     eax
        jz      L_ret_7dc
L_ret_7e7:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x7e7
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_ret_7dc:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x7dc
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_614af:
        mov     eax, dword ptr [ebp]
        mov     edi, dword ptr [g_007f1f84]
        mov     ecx, ebp
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jnz     L_614f0
        mov     edx, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [edx + 0x50]
        xor     ecx, ecx
        cmp     eax, 0x2
        setg    cl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        dec     ecx
        and     ecx, 0xfffffffb
        add     ecx, 0x7df
        mov     eax, ecx
        add     esp, 0x10
        ret     0x8
L_614f0:
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_00662d50
        mov     ebx, dword ptr [esi + 0x8]
        mov     esi, dword ptr [esi + 0xc]
        cmp     ebx, esi
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x24], esi
        jz      L_6157c
L_61514:
        mov     edi, dword ptr [esp + 0x28]
        mov     esi, dword ptr [ebx]
        mov     eax, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        call    dword ptr [eax + 0x10]
        cmp     al, 0x1
        jnz     L_6156b
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     edx, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [edi]
        cmp     ecx, edx
        jz      L_61541
L_61532:
        cmp     dword ptr [ecx], eax
        jz      L_6153d
        add     ecx, 0x4
        cmp     ecx, edx
        jnz     L_61532
L_6153d:
        cmp     ecx, edx
        jnz     L_6156b
L_61541:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [esp + 0x1c]
        jz      L_6155e
        test    eax, eax
        jz      L_61555
        mov     dword ptr [eax], esi
        mov     eax, dword ptr [esp + 0x18]
L_61555:
        add     eax, 0x4
        mov     dword ptr [esp + 0x18], eax
        jmp     L_6156f
L_6155e:
        push    0x1
        push    ebx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00662da0
L_6156b:
        mov     eax, dword ptr [esp + 0x18]
L_6156f:
        mov     ecx, dword ptr [esp + 0x24]
        add     ebx, 0x4
        cmp     ebx, ecx
        __emit 0x75   /* __emit: backward jnz rel-offset miscomputed by MSVC6 (off-by-4, call-reloc between branch and target); ref is 75 9A */
        __emit 0x9A
        jmp     L_61580
L_6157c:
        mov     eax, dword ptr [esp + 0x18]
L_61580:
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, eax
        sub     ecx, esi
        mov     edx, ecx
        and     edx, 0xfffffffc
        jnz     L_61631
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x24]
        cmp     edi, ebx
        jz      L_61603
L_6159f:
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        call    dword ptr [eax + 0x10]
        cmp     al, 0x1
        jnz     L_615f4
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        cmp     eax, 0x7da
        jnz     L_615ca
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax + 0xe0]
        cmp     al, 0x1
        jnz     L_615f4
L_615ca:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [esp + 0x1c]
        jz      L_615e7
        test    eax, eax
        jz      L_615de
        mov     dword ptr [eax], esi
        mov     eax, dword ptr [esp + 0x18]
L_615de:
        add     eax, 0x4
        mov     dword ptr [esp + 0x18], eax
        jmp     L_615f8
L_615e7:
        push    0x1
        push    edi
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00662da0
L_615f4:
        mov     eax, dword ptr [esp + 0x18]
L_615f8:
        add     edi, 0x4
        cmp     edi, ebx
        jnz     L_6159f
        mov     esi, dword ptr [esp + 0x14]
L_61603:
        mov     ecx, eax
        sub     ecx, esi
        mov     edx, ecx
        and     edx, 0xfffffffc
        jnz     L_61631
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, esi
        sar     eax, 0x2
        push    eax
        push    esi
        lea     ecx, [esp + 0x24]
        call    FUN_00662d70
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x7d8
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_61631:
        cmp     edx, 0x4
        jnz     L_61662
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x14]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        call    FUN_00662d90
        add     esp, 0x8
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_61662:
        sar     ecx, 0x2
        cmp     ecx, 0x2
        jbe     L_616de
L_6166a:
        cmp     esi, eax
        mov     ebx, eax
        mov     dword ptr [esp + 0x24], 0x42c80000
        jz      L_616a4
L_61678:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        push    ebp
        call    dword ptr [edx + 0x1c]
        fcom    dword ptr [esp + 0x24]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jz      L_61693
        fstp    dword ptr [esp + 0x24]
        mov     ebx, esi
        jmp     L_61695
L_61693:
        fstp    st(0)
L_61695:
        mov     eax, dword ptr [esp + 0x18]
        add     esi, 0x4
        cmp     esi, eax
        jnz     L_61678
        mov     esi, dword ptr [esp + 0x14]
L_616a4:
        lea     edi, [ebx + 0x4]
        cmp     edi, eax
        jz      L_616cb
        mov     ecx, eax
        sub     ecx, edi
        sar     ecx, 0x2
        test    ecx, ecx
        mov     edx, ebx
        jle     L_616cb
L_616b8:
        mov     eax, dword ptr [edx + 0x4]
        mov     dword ptr [edx], eax
        add     edx, 0x4
        dec     ecx
        jnz     L_616b8
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
L_616cb:
        sub     eax, 0x4
        mov     ecx, eax
        sub     ecx, esi
        sar     ecx, 0x2
        cmp     ecx, 0x2
        mov     dword ptr [esp + 0x18], eax
        ja      L_6166a
L_616de:
        call    FUN_00414fd0
        mov     edx, dword ptr [esp + 0x14]
        and     eax, 0x1
        mov     ecx, dword ptr [edx + eax*0x4]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_61705
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_61705:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_ret_7e0:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x7e0
        pop     ebx
        add     esp, 0x10
        ret     0x8
    }
}
