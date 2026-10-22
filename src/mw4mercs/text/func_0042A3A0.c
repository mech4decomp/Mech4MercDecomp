/*
 * In-.text data block at 0x42A3A0 (1713 B). Contains:
 *   - main __thiscall function at 0x42A3A0 (RET 0xC, 3 params).
 *     MLR geometry: iterates a list of points (esi stride 0x10), applies
 *     per-axis bounds checks (FPU), and writes up to 8 transformed
 *     vertices (32-byte stride) into the buffer at [ecx+0x94].
 *   - 4x NOP pad + trailing RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7da718;
extern float g_76c5b0;
extern float g_76d064;
extern float g_7da87c;
extern float g_7da874;
extern float g_7da878;
extern float g_7da870;
extern int g_858940;
extern int g_858944;
extern unsigned int g_7b94a0;

__declspec(naked) void func_0042A3A0(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0xa0]
        sub     esp, 0x24
        push    edi
        xor     edi, edi
        cmp     edx, edi
        mov     dword ptr [ecx + 0x98], edi
        ja      L_42a3bf
        xor     eax, eax
        pop     edi
        add     esp, 0x24
        ret     0xc
    L_42a3bf:
        mov     al, byte ptr [esp + 0x34]
        test    al, al
        push    ebp
        mov     ebp, dword ptr [esp + 0x34]
        push    esi
        je      L_42a3d2
        mov     eax, dword ptr [ebp + 0x30]
        jmp     L_42a3dd
    L_42a3d2:
        mov     eax, dword ptr [ebp]
        mov     esi, dword ptr [ebp + 0x10]
        shl     eax, 5
        add     eax, esi
    L_42a3dd:
        mov     dword ptr [ecx + 0x94], eax
        mov     eax, dword ptr [g_7da718]
        mov     esi, dword ptr [eax]
        cmp     dword ptr [edx], edi
        mov     dword ptr [esp + 0x18], edi
        jle     L_42aa1d
        push    ebx
        mov     bl, 0xff
    L_42a3f9:
        mov     edx, dword ptr [ecx + 0x18]
        test    byte ptr [edi + edx], 2
        je      L_42aa04
        mov     edx, dword ptr [esp + 0x38]
        test    dl, 0x3f
        je      L_42a4b1
        mov     eax, edx
        shr     eax, 5
        test    al, 1
        je      L_42a42d
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [esi + 8]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_42aa04
    L_42a42d:
        mov     eax, edx
        shr     eax, 4
        test    al, 1
        je      L_42a44a
        fld     dword ptr [esi + 8]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_42aa04
    L_42a44a:
        mov     eax, edx
        shr     eax, 3
        test    al, 1
        je      L_42a466
        fld     dword ptr [esi]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_42aa04
    L_42a466:
        mov     eax, edx
        shr     eax, 2
        test    al, 1
        je      L_42a47f
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [esi]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_42aa04
    L_42a47f:
        mov     eax, edx
        shr     eax, 1
        test    al, 1
        je      L_42a49b
        fld     dword ptr [esi + 4]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_42aa04
    L_42a49b:
        test    dl, 1
        je      L_42a4b1
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [esi + 4]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_42aa04
    L_42a4b1:
        fld     dword ptr [g_76d064]
        mov     edx, dword ptr [ecx + 0xa4]
        fdiv    dword ptr [esi + 0xc]
        lea     edx, [edx + edi*4]
        fst     dword ptr [esp + 0x30]
        fmul    dword ptr [esi]
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [g_7da87c]
        fmul    st(0), st(1)
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [esp + 0x24]
        __emit 0xDD
        __emit 0xD8
        fld     dword ptr [g_7da878]
        fmul    dword ptr [esp + 0x28]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x24]
        fadd    dword ptr [edx]
        fild    dword ptr [g_858940]
        fcompp
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_42aa04
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [edx]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_42aa04
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [edx]
        fild    dword ptr [g_858944]
        fcompp
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_42aa04
        fld     dword ptr [esp + 0x28]
        fcomp   dword ptr [edx]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_42aa04
        mov     edx, dword ptr [edx]
        fld     dword ptr [esp + 0x24]
        mov     edi, dword ptr [ecx + 0x94]
        mov     eax, dword ptr [g_7b94a0]
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [ecx + 0x98]
        fsub    dword ptr [esp + 0x10]
        shl     edx, 5
        fst     dword ptr [edx + edi]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x10]
        shl     edx, 5
        fst     dword ptr [esp + 0x18]
        fstp    dword ptr [edx + edi + 4]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x2c]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 8]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x30]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 0xc]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     dword ptr [edx + edi + 0x10], eax
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     byte ptr [edx + edi + 0x17], bl
        mov     edi, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [edx]
        mov     ebp, dword ptr [ecx + 0x94]
        shl     edi, 5
        mov     dword ptr [edi + ebp + 0x18], edx
        mov     edi, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [edx + 4]
        mov     ebp, dword ptr [ecx + 0x94]
        shl     edi, 5
        mov     dword ptr [edi + ebp + 0x1c], edx
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        inc     edx
        mov     dword ptr [ecx + 0x98], edx
        shl     edx, 5
        fst     dword ptr [edx + edi]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x28]
        shl     edx, 5
        fst     dword ptr [edx + edi + 4]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fst     dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x2c]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 8]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x30]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 0xc]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     dword ptr [edx + edi + 0x10], eax
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     byte ptr [edx + edi + 0x17], bl
        mov     edi, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0xa8]
        mov     ebp, dword ptr [ecx + 0x94]
        shl     edi, 5
        mov     edx, dword ptr [edx + 8]
        fld     dword ptr [esp + 0x10]
        mov     dword ptr [edi + ebp + 0x18], edx
        fadd    dword ptr [esp + 0x24]
        mov     edi, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [edx + 0xc]
        fst     dword ptr [esp + 0x14]
        mov     ebp, dword ptr [ecx + 0x94]
        shl     edi, 5
        mov     dword ptr [edi + ebp + 0x1c], edx
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        inc     edx
        mov     dword ptr [ecx + 0x98], edx
        shl     edx, 5
        fstp    dword ptr [edx + edi]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 4]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x2c]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 8]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x30]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 0xc]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     dword ptr [edx + edi + 0x10], eax
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     byte ptr [edx + edi + 0x17], bl
        mov     edi, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [edx + 0x10]
        mov     ebp, dword ptr [ecx + 0x94]
        shl     edi, 5
        mov     dword ptr [edi + ebp + 0x18], edx
        mov     edi, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [edx + 0x14]
        mov     ebp, dword ptr [ecx + 0x94]
        shl     edi, 5
        mov     dword ptr [edi + ebp + 0x1c], edx
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        inc     edx
        mov     dword ptr [ecx + 0x98], edx
        shl     edx, 5
        fstp    dword ptr [edx + edi]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x18]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 4]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x2c]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 8]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x30]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 0xc]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     dword ptr [edx + edi + 0x10], eax
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     byte ptr [edx + edi + 0x17], bl
        mov     edx, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [edx]
        fld     dword ptr [esp + 0x14]
        mov     edi, dword ptr [ecx + 0x98]
        mov     ebp, dword ptr [ecx + 0x94]
        shl     edi, 5
        mov     dword ptr [edi + ebp + 0x18], edx
        mov     edi, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [edx + 4]
        mov     ebp, dword ptr [ecx + 0x94]
        shl     edi, 5
        mov     dword ptr [edi + ebp + 0x1c], edx
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        inc     edx
        mov     dword ptr [ecx + 0x98], edx
        shl     edx, 5
        fstp    dword ptr [edx + edi]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x20]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 4]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x2c]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 8]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x30]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 0xc]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x14]
        shl     edx, 5
        mov     dword ptr [edx + edi + 0x10], eax
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     byte ptr [edx + edi + 0x17], bl
        mov     edi, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [edx + 0x10]
        mov     ebp, dword ptr [ecx + 0x94]
        shl     edi, 5
        mov     dword ptr [edi + ebp + 0x18], edx
        mov     edi, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [edx + 0x14]
        mov     ebp, dword ptr [ecx + 0x94]
        shl     edi, 5
        mov     dword ptr [edi + ebp + 0x1c], edx
        mov     ebp, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        inc     ebp
        mov     dword ptr [ecx + 0x98], ebp
        mov     edx, ebp
        shl     edx, 5
        fstp    dword ptr [edx + edi]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x18]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 4]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x2c]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 8]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        fld     dword ptr [esp + 0x30]
        shl     edx, 5
        fstp    dword ptr [edx + edi + 0xc]
        mov     edx, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     dword ptr [edx + edi + 0x10], eax
        mov     eax, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0x94]
        mov     ebp, dword ptr [esp + 0x3c]
        shl     eax, 5
        mov     byte ptr [eax + edx + 0x17], bl
        mov     edx, dword ptr [ecx + 0x98]
        mov     eax, dword ptr [ecx + 0xa8]
        mov     eax, dword ptr [eax + 0x18]
        mov     edi, dword ptr [ecx + 0x94]
        shl     edx, 5
        mov     dword ptr [edx + edi + 0x18], eax
        mov     eax, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0xa8]
        mov     edi, dword ptr [ecx + 0x94]
        mov     edx, dword ptr [edx + 0x1c]
        shl     eax, 5
        mov     dword ptr [eax + edi + 0x1c], edx
        mov     eax, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [esp + 0x1c]
        inc     eax
        mov     dword ptr [ecx + 0x98], eax
    L_42aa04:
        mov     eax, dword ptr [ecx + 0xa0]
        mov     edx, dword ptr [eax]
        inc     edi
        add     esi, 0x10
        cmp     edi, edx
        mov     dword ptr [esp + 0x1c], edi
        jl      L_42a3f9
        pop     ebx
    L_42aa1d:
        mov     al, byte ptr [esp + 0x3c]
        test    al, al
        jne     L_42aa33
        mov     eax, dword ptr [ebp]
        mov     edx, dword ptr [ecx + 0x98]
        add     eax, edx
        mov     dword ptr [ebp], eax
    L_42aa33:
        mov     edx, dword ptr [ecx + 0x98]
        xor     eax, eax
        test    edx, edx
        setne   al
        pop     esi
        pop     ebp
        pop     edi
        mov     dword ptr [ecx + 8], eax
        add     esp, 0x24
        ret     0xc
        nop
        nop
        nop
        nop
        ret
    }
}
