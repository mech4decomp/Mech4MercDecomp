/*
 * FUN_005b2cc0 (604 B) — __thiscall (ECX=this), RET 4 (one stack param).
 * Aiming/rotation logic: computes a direction vector, normalizes it,
 * clamps it, and dispatches through a 4-entry jump table (0x5b2f1c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041c540(void);
extern void FUN_007047f0(void);

__declspec(naked) void FUN_005b2cc0(void)
{
    extern int DAT_007b220c;
    extern int DAT_0076c5b0;
    extern int DAT_0077de8c;
    extern int DAT_007860d0;
    extern int DAT_0080da60;
    extern int DAT_0080da58;
    extern int DAT_0080da5c;
    extern int DAT_0080da54;
    extern int DAT_005b2f1c[];
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     eax, dword ptr [DAT_007b220c]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        lea     ecx, [ebp - 0x10]
        push    ecx
        lea     esi, [edi + 0x6e4]
        push    esi
        mov     dword ptr [ebp - 0x10], 0xbf800000
        mov     dword ptr [ebp - 0xc], 0xbf800000
        mov     dword ptr [ebp - 0x8], 0xbf800000
        call    FUN_0041c540
        mov     ebx, dword ptr [ebp + 0x8]
        add     esp, 0xc
        test    al, al
        jnz     L2D0B
        mov     edx, dword ptr [edi]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx + 0x1e4]
L2D0B:
        cmp     byte ptr [edi + 0x6e0], 0x1
        jz      L2D39
        mov     eax, dword ptr [edi + 0x364]
        test    eax, eax
        jnz     L2F13
        fld     dword ptr [edi + 0x3b8]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L2F13
L2D39:
        mov     eax, dword ptr [DAT_007b220c]
        push    eax
        lea     ecx, [ebp - 0x10]
        push    ecx
        push    esi
        mov     dword ptr [ebp - 0x10], 0xbf800000
        mov     dword ptr [ebp - 0xc], 0xbf800000
        mov     dword ptr [ebp - 0x8], 0xbf800000
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L2E1A
        mov     ecx, dword ptr [edi + 0x364]
        test    ecx, ecx
        jz      L2E1A
        mov     edx, dword ptr [edi + 0x170]
        mov     eax, dword ptr [edx + 0xd8]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        fld     dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x8], eax
        fst     dword ptr [ebp - 0xc]
        mov     al, byte ptr [ecx + 0x1a]
        fstp    dword ptr [edi + 0x6e8]
        cmp     al, 0x1
        jz      L2DF1
        fsubr   dword ptr [esi]
        fld     dword ptr [esi + 0x4]
        fsub    dword ptr [ebp - 0xc]
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [ebp - 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [DAT_0077de8c]
        fnstsw  ax
        test    ah, 0x1
        jz      L2F13
        jmp     L2DF3
L2DF1:
        fstp    st(0)
L2DF3:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x1c4]
        mov     eax, 0xbf800000
        mov     byte ptr [edi + 0x6e0], 0x0
        pop     edi
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L2E1A:
        fld     dword ptr [ebx]
        mov     eax, dword ptr [ebx + 0x4]
        fst     dword ptr [ebp + 0x8]
        mov     dword ptr [esi + 0x4], eax
        fstp    dword ptr [esi]
        fld     dword ptr [ebx + 0x8]
        fst     dword ptr [ebp - 0x4]
        fstp    dword ptr [esi + 0x8]
        call    FUN_007047f0
        and     eax, 0x3
        cmp     eax, 0x3
        ja      L2E92
        jmp     dword ptr [eax*4 + DAT_005b2f1c]
L2E44:
        fld     dword ptr [ebp + 0x8]
        fadd    dword ptr [DAT_007860d0]
        fstp    dword ptr [esi]
        fld     dword ptr [ebp - 0x4]
        fadd    dword ptr [DAT_007860d0]
        jmp     L2E8F
L2E5A:
        fld     dword ptr [ebp + 0x8]
        fsub    dword ptr [DAT_007860d0]
        fstp    dword ptr [esi]
        fld     dword ptr [ebp - 0x4]
        fadd    dword ptr [DAT_007860d0]
        jmp     L2E8F
L2E70:
        fld     dword ptr [ebp + 0x8]
        fadd    dword ptr [DAT_007860d0]
        jmp     L2E84
L2E7B:
        fld     dword ptr [ebp + 0x8]
        fsub    dword ptr [DAT_007860d0]
L2E84:
        fstp    dword ptr [esi]
        fld     dword ptr [ebp - 0x4]
        fsub    dword ptr [DAT_007860d0]
L2E8F:
        fstp    dword ptr [esi + 0x8]
L2E92:
        fld     dword ptr [esi]
        fcomp   dword ptr [DAT_0080da60]
        fnstsw  ax
        test    ah, 0x1
        jz      L2EAB
        mov     ecx, dword ptr [DAT_0080da60]
        mov     dword ptr [esi], ecx
        jmp     L2EC2
L2EAB:
        fld     dword ptr [esi]
        fcomp   dword ptr [DAT_0080da58]
        fnstsw  ax
        test    ah, 0x41
        jnz     L2EC2
        mov     edx, dword ptr [DAT_0080da58]
        mov     dword ptr [esi], edx
L2EC2:
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [DAT_0080da5c]
        fnstsw  ax
        test    ah, 0x1
        jz      L2EDC
        mov     eax, dword ptr [DAT_0080da5c]
        mov     dword ptr [esi + 0x8], eax
        jmp     L2EF5
L2EDC:
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [DAT_0080da54]
        fnstsw  ax
        test    ah, 0x41
        jnz     L2EF5
        mov     ecx, dword ptr [DAT_0080da54]
        mov     dword ptr [esi + 0x8], ecx
L2EF5:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x1c4]
        mov     eax, dword ptr [edi]
        push    0
        push    1
        push    0x3e8
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x1bc]
L2F13:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
