/*
 * FUN_00606540 (680 B) — Per-frame interpolation/update routine.
 *
 * Iterates over a set of entries, copying or interpolating (via the
 * 0x40cxxx/0x41bxxx helpers) various sub-blocks based on flag bits.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040cb70(void);
extern void __cdecl FUN_0041bd00(void);
extern void __cdecl FUN_0041b720(void);
extern float g_76d5ec;
extern unsigned char g_7b556c;

__declspec(naked) void FUN_00606540(void)
{
    __asm {
        fld     dword ptr [esp + 0xc]
        sub     esp, 0x1c
        fabs
        push    ebp
        fcomp   dword ptr [g_76d5ec]
        push    esi
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_67e0
        mov     ebp, dword ptr [esp + 0x28]
        mov     eax, dword ptr [ebp]
        xor     esi, esi
        test    eax, eax
        jle     L_67e0
        mov     edx, dword ptr [esp + 0x2c]
        push    ebx
        lea     ebx, [edx + 0x398]
        lea     eax, [ebp + 0xe84]
        lea     ecx, [ebp + 0x6dc]
        sub     edx, ebp
        push    edi
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], ecx
        lea     edi, [ebp + 0x50]
        mov     dword ptr [esp + 0x10], edx
L_6596:
        mov     eax, dword ptr [esp + 0x34]
        test    byte ptr [eax + esi + 4], 0x2
        jz      L_6613
        mov     al, byte ptr [esi + ebp + 4]
        test    al, 0x2
        jnz     L_65c8
        lea     ecx, [ebx - 0x34c]
        or      al, 0x2
        push    ecx
        lea     ecx, [edi - 4]
        mov     byte ptr [esi + ebp + 4], al
        call    FUN_0040c410
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        jmp     L_6613
L_65c8:
        cmp     byte ptr [g_7b556c], 0
        jz      L_65f6
        mov     edx, dword ptr [esp + 0x38]
        or      al, 0x2
        mov     byte ptr [esi + ebp + 4], al
        push    edx
        lea     eax, [ebx - 0x34c]
        lea     ecx, [edi - 4]
        push    eax
        push    ecx
        call    FUN_0040cb70
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        jmp     L_6613
L_65f6:
        or      al, 0x2
        mov     byte ptr [esi + ebp + 4], al
        mov     eax, dword ptr [ebx - 0x34c]
        mov     dword ptr [edi - 4], eax
        mov     eax, dword ptr [edx + edi]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [ebx - 0x344]
        mov     dword ptr [edi + 4], eax
L_6613:
        mov     eax, dword ptr [esp + 0x34]
        test    byte ptr [eax + esi + 4], 0x4
        jz      L_666b
        mov     al, byte ptr [esi + ebp + 4]
        test    al, 0x4
        jnz     L_6648
        or      al, 0x4
        mov     byte ptr [esi + ebp + 4], al
        mov     eax, dword ptr [ebx - 4]
        mov     dword ptr [edi + 0x344], eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [edi + 0x348], eax
        mov     eax, dword ptr [ebx + 4]
        mov     dword ptr [edi + 0x34c], eax
        jmp     L_666b
L_6648:
        mov     edx, dword ptr [esp + 0x38]
        or      al, 0x4
        mov     byte ptr [esi + ebp + 4], al
        push    edx
        lea     eax, [ebx - 4]
        lea     ecx, [edi + 0x344]
        push    eax
        push    ecx
        call    FUN_0040cb70
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
L_666b:
        mov     eax, dword ptr [esp + 0x34]
        mov     al, byte ptr [eax + esi + 4]
        test    al, 0x8
        mov     byte ptr [esp + 0x30], al
        jz      L_670d
        mov     al, byte ptr [esi + ebp + 4]
        test    al, 0x8
        jnz     L_66b3
        or      al, 0x8
        mov     byte ptr [esi + ebp + 4], al
        mov     eax, dword ptr [ebx + 0x7a4]
        mov     dword ptr [edi + 0xaec], eax
        mov     eax, dword ptr [ebx + 0x7a8]
        mov     dword ptr [edi + 0xaf0], eax
        mov     eax, dword ptr [ebx + 0x7ac]
        mov     dword ptr [edi + 0xaf4], eax
        jmp     L_670d
L_66b3:
        fld     dword ptr [ebx + 0x7a4]
        or      al, 0x8
        mov     byte ptr [esi + ebp + 4], al
        fsub    dword ptr [edi + 0xaec]
        fmul    dword ptr [esp + 0x38]
        fadd    dword ptr [edi + 0xaec]
        fstp    dword ptr [edi + 0xaec]
        fld     dword ptr [ebx + 0x7a8]
        fsub    dword ptr [edi + 0xaf0]
        fmul    dword ptr [esp + 0x38]
        fadd    dword ptr [edi + 0xaf0]
        fstp    dword ptr [edi + 0xaf0]
        fld     dword ptr [ebx + 0x7ac]
        fsub    dword ptr [edi + 0xaf4]
        fmul    dword ptr [esp + 0x38]
        fadd    dword ptr [edi + 0xaf4]
        fstp    dword ptr [edi + 0xaf4]
L_670d:
        test    byte ptr [esp + 0x30], 0x10
        jz      L_6789
        mov     al, byte ptr [esi + ebp + 4]
        test    al, 0x10
        jnz     L_673e
        or      al, 0x10
        mov     byte ptr [esi + ebp + 4], al
        mov     eax, dword ptr [ecx + edx]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [edx + ecx + 4]
        mov     dword ptr [ecx + 4], eax
        mov     eax, dword ptr [ecx + edx + 8]
        mov     dword ptr [ecx + 8], eax
        mov     eax, dword ptr [ecx + edx + 0xc]
        mov     dword ptr [ecx + 0xc], eax
        jmp     L_6789
L_673e:
        or      al, 0x10
        mov     byte ptr [esi + ebp + 4], al
        mov     edx, ecx
        mov     eax, dword ptr [edx]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [edx + 4]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [edx + 8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [esp + 0x10]
        push    eax
        lea     eax, [ecx + edx]
        push    eax
        lea     edx, [esp + 0x24]
        push    edx
        call    FUN_0041bd00
        mov     ecx, dword ptr [esp + 0x18]
        call    FUN_0041b720
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
L_6789:
        mov     eax, dword ptr [esp + 0x34]
        test    byte ptr [eax + esi + 4], 0x20
        jz      L_67c0
        mov     al, byte ptr [esi + ebp + 4]
        test    al, 0x20
        jnz     L_67ad
        or      al, 0x20
        mov     byte ptr [esi + ebp + 4], al
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax + edx]
        mov     dword ptr [eax], edx
        jmp     L_67bc
L_67ad:
        or      al, 0x20
        mov     byte ptr [esi + ebp + 4], al
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax + edx]
        or      dword ptr [eax], edx
L_67bc:
        mov     edx, dword ptr [esp + 0x10]
L_67c0:
        add     dword ptr [esp + 0x14], 0x4
        mov     eax, dword ptr [ebp]
        inc     esi
        add     ecx, 0x10
        add     ebx, 0xc
        add     edi, 0xc
        cmp     esi, eax
        mov     dword ptr [esp + 0x18], ecx
        jl      L_6596
        pop     edi
        pop     ebx
L_67e0:
        pop     esi
        pop     ebp
        add     esp, 0x1c
        ret     0xc
    }
}
