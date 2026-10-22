/*
 * FUN_006a58c0 (1683 B) — Large float/vector computation routine.
 *
 * __cdecl (4 stack params at EBP+8..+0x14), returns float in ST0.
 * Heavy FPU usage: fild/fstp/fcomp/faddp/fcompp/fpatan/fsubr/fxch/fchs.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_005b9560(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_006a7d00(void);
extern void __cdecl FUN_007047f0(void);
extern void __cdecl FUN_006a7df0(void);
extern void __cdecl FUN_00580560(void);
extern void __cdecl FUN_006a57e0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_00665910(void);

extern int g_7f1f84;
extern int g_7f268c;
extern float g_76d040;
extern float g_7b220c;
extern float g_799e28;
extern float g_76c5b0;
extern float g_799e30;
extern float g_7704c0;
extern float g_799e24;
extern float g_76d598;
extern float g_76d064;
extern float g_76f5d8;
extern float g_76e22c;

__declspec(naked) float __cdecl FUN_006a58c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x34
        push    ebx
        push    esi
        push    edi
        call    FUN_00637b40
        test    eax, eax
        mov     esi, dword ptr [ebp + 8]
        jz      L5949
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x90]
        mov     dword ptr [ebp + 8], eax
        fild    dword ptr [ebp + 8]
        push    0x57
        fstp    dword ptr [ebp + 8]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 0x41
        jz      L5949
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x90]
        mov     dword ptr [ebp + 8], eax
        fild    dword ptr [ebp + 8]
        push    0x58
        fstp    dword ptr [ebp + 8]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L5949
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 4]
        push    edi
        call    FUN_00415230
        cmp     al, 0x1
        mov     byte ptr [ebp + 0xb], 0x1
        jz      L594D
L5949:
        mov     byte ptr [ebp + 0xb], 0x0
L594D:
        mov     eax, dword ptr [ebp + 0x14]
        test    eax, eax
        jz      L5969
        mov     edi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx]
        push    edi
        push    eax
        push    esi
        call    dword ptr [edx]
        fstp    dword ptr [ebp + 0x10]
        jmp     L5A9E
L5969:
        lea     eax, [ebp + 0x17]
        push    eax
        lea     ecx, [ebp - 0x34]
        call    FUN_00580540
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     ebx, eax
        mov     edi, dword ptr [ebx + 0x3d4]
        test    edi, edi
        mov     dword ptr [ebp - 4], ebx
        jz      L5A4C
        mov     ecx, edi
        call    FUN_005b9560
        mov     ecx, dword ptr [edi + 0x17c]
        test    ecx, ecx
        mov     dword ptr [ebp - 8], 0
        jle     L5A4C
        mov     dword ptr [ebp + 0x14], eax
L59AE:
        mov     eax, dword ptr [ebp + 0x14]
        mov     edi, dword ptr [eax]
        test    edi, edi
        jz      L5A28
        add     edi, 0x10
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L5A28
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x30]
        cmp     ecx, dword ptr [ebx + 0x30]
        jz      L5A28
        mov     ecx, edi
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x60]
        mov     edx, eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        mov     dword ptr [ebp - 0xc], edx
        call    dword ptr [eax + 0x60]
        mov     ecx, dword ptr [ebp - 0xc]
        cmp     ecx, eax
        jz      L5A25
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_7f268c]
        push    ecx
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        jz      L5A25
        mov     ecx, edi
        call    FUN_0041fd80
        lea     edx, [ebp - 0x10]
        push    edx
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x10], eax
        call    FUN_006a7d00
L5A25:
        mov     ebx, dword ptr [ebp - 4]
L5A28:
        mov     eax, dword ptr [ebp - 8]
        mov     edi, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebx + 0x3d4]
        mov     edx, dword ptr [ecx + 0x17c]
        inc     eax
        add     edi, 4
        cmp     eax, edx
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp + 0x14], edi
        jl      L59AE
L5A4C:
        mov     edi, dword ptr [ebp - 0x30]
        mov     eax, dword ptr [ebp - 0x34]
        sub     edi, eax
        sar     edi, 2
        cmp     edi, 7
        jbe     L5A83
L5A5C:
        mov     ebx, eax
        call    FUN_007047f0
        xor     edx, edx
        div     edi
        lea     ecx, [ebp - 0x34]
        lea     eax, [ebx + edx*4]
        push    eax
        call    FUN_006a7df0
        mov     edi, dword ptr [ebp - 0x30]
        mov     eax, dword ptr [ebp - 0x34]
        sub     edi, eax
        sar     edi, 2
        cmp     edi, 7
        ja      L5A5C
L5A83:
        mov     edi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx]
        push    edi
        lea     eax, [ebp - 0x34]
        push    eax
        push    esi
        call    dword ptr [edx]
        fstp    dword ptr [ebp + 0x10]
        lea     ecx, [ebp - 0x34]
        call    FUN_00580560
L5A9E:
        cmp     byte ptr [ebp + 0xb], 0x1
        jnz     L5AB3
        push    edi
        call    FUN_006a57e0
        fmul    dword ptr [ebp + 0x10]
        add     esp, 4
        fstp    dword ptr [ebp + 0x10]
L5AB3:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x28]
        call    FUN_00419480
        fld     dword ptr [edi + 4]
        fsub    dword ptr [ebp - 0x24]
        fabs
        fcomp   dword ptr [g_76d040]
        fnstsw  ax
        test    ah, 0x41
        jnz     L5C46
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x410]
        mov     ebx, dword ptr [eax + 0x40c]
        sub     ecx, ebx
        sar     ecx, 2
        jz      L5C46
        mov     edx, ebx
        cmp     dword ptr [edx], 0
        jz      L5C46
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x410]
        mov     ebx, dword ptr [eax + 0x40c]
        sub     ecx, ebx
        sar     ecx, 2
        jz      L5B30
        mov     edx, ebx
        mov     eax, dword ptr [edx]
        jmp     L5B32
L5B30:
        xor     eax, eax
L5B32:
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        test    eax, eax
        jz      L5C46
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [eax + 0x410]
        mov     ebx, dword ptr [eax + 0x40c]
        sub     ecx, ebx
        sar     ecx, 2
        jz      L5B62
        mov     edx, ebx
        mov     eax, dword ptr [edx]
        jmp     L5B64
L5B62:
        xor     eax, eax
L5B64:
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     ebx, eax
        call    dword ptr [edx + 0x100]
        fadd    dword ptr [ebx + 0x640]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        fstp    dword ptr [ebp + 0xc]
        call    dword ptr [eax + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        push    edi
        lea     ecx, [ebp - 0x34]
        call    FUN_0041c830
        fld     dword ptr [ebp + 0xc]
        fabs
        fstp    dword ptr [ebp + 8]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp - 0x34]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0xc]
        fld     dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x30]
        fadd    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x14]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x10], eax
        fld     dword ptr [ebp - 0x10]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L5C46
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0x14], ecx
        mov     eax, dword ptr [ebp + 0x14]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0xc], eax
        fld     dword ptr [ebp + 0xc]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L5C27
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [g_799e28]
        fnstsw  ax
        test    ah, 0x1
        jnz     L5C46
        fld     dword ptr [g_76c5b0]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L5C27:
        fld     dword ptr [ebp - 0x30]
        fld     dword ptr [ebp + 0xc]
        fpatan
        fcomp   dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L5C46
        fld     dword ptr [g_76c5b0]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L5C46:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_00419480
        fld     dword ptr [ebp - 0x18]
        fsub    dword ptr [edi + 4]
        mov     eax, dword ptr [edi + 4]
        push    edi
        lea     ecx, [ebp - 0x1c]
        push    ecx
        fstp    dword ptr [ebp + 8]
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x18], eax
        call    FUN_0040ca10
        lea     ecx, [ebp - 0x34]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0x14], eax
        fld     dword ptr [ebp + 8]
        fabs
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [g_799e30]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L5CBC
        fld     dword ptr [ebp + 0x10]
        pop     edi
        fmul    dword ptr [g_7704c0]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L5CBC:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xe4]
        fst     dword ptr [ebp - 8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L5F18
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        push    edi
        lea     ecx, [ebp - 0x34]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp - 0x34]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0xc]
        fld     dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x30]
        fadd    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebp + 8]
        mov     eax, dword ptr [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0x14], eax
        fld     dword ptr [ebp + 0x14]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L5D3D
        mov     dword ptr [ebp + 0xc], 0
        jmp     L5D78
L5D3D:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 8], eax
        fld     dword ptr [ebp + 8]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L5D6D
        mov     dword ptr [ebp + 0xc], 0
        jmp     L5D78
L5D6D:
        fld     dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x2c]
        fpatan
        fstp    dword ptr [ebp + 0xc]
L5D78:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     eax, [ebp - 0x28]
        push    eax
        lea     ecx, [ebp - 0x34]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp - 0x34]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 8]
        fld     dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x30]
        fadd    dword ptr [ebp + 8]
        fstp    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x14]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x10], eax
        fld     dword ptr [ebp - 0x10]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L5DDD
        fld     dword ptr [g_76c5b0]
        jmp     L5E14
L5DDD:
        mov     ecx, dword ptr [ebp + 8]
        mov     dword ptr [ebp + 8], ecx
        mov     eax, dword ptr [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0x14], eax
        fld     dword ptr [ebp + 0x14]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L5E0C
        fld     dword ptr [g_76c5b0]
        jmp     L5E14
L5E0C:
        fld     dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x2c]
        fpatan
L5E14:
        fsubr   dword ptr [ebp + 0xc]
        fst     dword ptr [ebp + 8]
        fld     dword ptr [g_799e24]
        fadd    st(0), st(0)
        fstp    dword ptr [ebp + 0xc]
        fcom    dword ptr [ebp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L5E3F
L5E2F:
        fsub    dword ptr [ebp + 0xc]
        fcom    dword ptr [ebp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jz      L5E2F
        fst     dword ptr [ebp + 8]
L5E3F:
        fld     dword ptr [ebp + 0xc]
        fchs
        fstp    dword ptr [ebp + 0x14]
        fcom    dword ptr [ebp + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L5E87
L5E51:
        fadd    dword ptr [ebp + 0xc]
        fcom    dword ptr [ebp + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jnz     L5E51
        fstp    dword ptr [ebp + 8]
L5E61:
        push    edi
        push    esi
        call    FUN_00665910
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [g_76c5b0]
        add     esp, 8
        cmp     al, 0x1
        fnstsw  ax
        jnz     L5EC7
        test    ah, 0x1
        jz      L5E8B
        fld     dword ptr [g_76d598]
        jmp     L5E91
L5E87:
        fstp    st(0)
        jmp     L5E61
L5E8B:
        fld     dword ptr [g_76d064]
L5E91:
        fld     dword ptr [ebp - 8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L5EA9
        fld     dword ptr [g_76d598]
        jmp     L5EAF
L5EA9:
        fld     dword ptr [g_76d064]
L5EAF:
        fxch    st(1)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x40
        fld     dword ptr [ebp + 0x10]
        jz      L5F10
        fmul    dword ptr [g_76f5d8]
        jmp     L5F1B
L5EC7:
        test    ah, 0x1
        jz      L5ED4
        fld     dword ptr [g_76d598]
        jmp     L5EDA
L5ED4:
        fld     dword ptr [g_76d064]
L5EDA:
        fld     dword ptr [ebp - 8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L5EF2
        fld     dword ptr [g_76d598]
        jmp     L5EF8
L5EF2:
        fld     dword ptr [g_76d064]
L5EF8:
        fxch    st(1)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x40
        fld     dword ptr [ebp + 0x10]
        jnz     L5F10
        fmul    dword ptr [g_76f5d8]
        jmp     L5F1B
L5F10:
        fmul    dword ptr [g_76e22c]
        jmp     L5F1B
L5F18:
        fld     dword ptr [ebp + 0x10]
L5F1B:
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L5F37
        pop     edi
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L5F37:
        fcom    dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L5F4C
        fstp    st(0)
        fld     dword ptr [g_76d064]
L5F4C:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
