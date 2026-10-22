/*
 * FUN_004ae6a0 (645 B) -- __thiscall (RET 0x4). MLR sub-object keyframe
 * insertion: maintains a sorted array of 3-float (x,slope,value) keyframes,
 * reallocating via FUN_004084d0/FUN_004084e0, shifting entries, and calling
 * FUN_004ae290/FUN_004ae2b0. Uses g_7da920 (lock), g_7b220c (eps), g_76d064.
 *
 * CFLAGS: /O1
 */

extern int g_7da920;
extern float g_7b220c;
extern float g_76d064;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004ae290(void);
extern void __cdecl FUN_004ae2b0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004ae6a0(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [g_7da920]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     edx, dword ptr [esi + 0x8]
        xor     ecx, ecx
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jbe     L_6d9
        mov     edi, dword ptr [esi + 0x4]
L_6c4:
        fld     dword ptr [edi]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jz      L_6d9
        inc     ecx
        add     edi, 0xc
        cmp     ecx, edx
        jc      L_6c4
L_6d9:
        test    edx, edx
        lea     ebx, [ecx - 0x1]
        mov     dword ptr [esp + 0x18], ebx
        jnz     L_775
        mov     ebx, dword ptr [esi + 0x8]
        cmp     ebx, 0x1
        jz      L_75a
        push    0xc
        call    FUN_004084d0
        mov     edx, dword ptr [esi + 0x4]
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        mov     dword ptr [esp + 0x14], edi
        jz      L_750
        cmp     ebx, 0x1
        mov     ecx, 0x1
        ja      L_713
        mov     ecx, ebx
L_713:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_744
        lea     eax, [ecx + ecx*0x2]
        sub     edx, edi
        lea     eax, [edi + eax*0x4]
        inc     ecx
        lea     edi, [edx + eax*0x1]
L_723:
        mov     ebp, dword ptr [edi]
        mov     ebx, eax
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edi + 0x4]
        mov     dword ptr [ebx + 0x4], ebp
        mov     edi, dword ptr [edi + 0x8]
        dec     ecx
        sub     eax, 0xc
        test    ecx, ecx
        mov     dword ptr [ebx + 0x8], edi
        /* __emit: backward JA rel-offset miscomputed by MSVC6 (off-by-3) */
        __emit 0x77
        __emit 0xE3
        mov     edi, dword ptr [esp + 0x14]
L_744:
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_750:
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0x8], 0x1
L_75a:
        mov     ecx, dword ptr [esp + 0x24]
        push    0x0
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        call    FUN_004ae290
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x10
        ret     0x4
L_775:
        mov     edi, dword ptr [esi + 0x4]
        lea     eax, [ebx + ebx*0x2]
        fld     dword ptr [edi + eax*0x4]
        fsubr   dword ptr [esp + 0x24]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_919
        lea     ebp, [edx - 0x1]
        cmp     ebx, ebp
        mov     dword ptr [esp + 0x1c], ebp
        jge     L_7cc
        lea     ecx, [ebx + 0x1]
        lea     eax, [ecx + ecx*0x2]
        fld     dword ptr [edi + eax*0x4]
        fsub    dword ptr [esp + 0x24]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_7cc
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ecx
        pop     ebx
        add     esp, 0x10
        ret     0x4
L_7cc:
        mov     eax, dword ptr [esi + 0x8]
        lea     edi, [edx + 0x1]
        cmp     edi, eax
        jz      L_86c
        test    edi, edi
        jbe     L_84d
        lea     ecx, [edi + edi*0x2]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [esi + 0x4]
        add     esp, 0x4
        test    edx, edx
        mov     dword ptr [esp + 0x10], eax
        jz      L_848
        mov     ecx, dword ptr [esi + 0x8]
        cmp     edi, ecx
        jnc     L_801
        mov     ecx, edi
L_801:
        mov     edi, ecx
        dec     ecx
        test    edi, edi
        jz      L_838
        lea     edi, [ecx + ecx*0x2]
        lea     eax, [eax + edi*0x4]
        sub     edx, dword ptr [esp + 0x10]
        inc     ecx
        lea     edi, [edx + eax*0x1]
L_813:
        mov     ebp, dword ptr [edi]
        mov     ebx, eax
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edi + 0x4]
        mov     dword ptr [ebx + 0x4], ebp
        mov     edi, dword ptr [edi + 0x8]
        dec     ecx
        sub     eax, 0xc
        test    ecx, ecx
        mov     dword ptr [ebx + 0x8], edi
        /* __emit: backward JA rel-offset miscomputed by MSVC6 (off-by-3) */
        __emit 0x77
        __emit 0xE3
        mov     ebx, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x1c]
L_838:
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
L_848:
        mov     dword ptr [esi + 0x4], eax
        jmp     L_860
L_84d:
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x4], 0x0
L_860:
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x14]
        inc     eax
        mov     dword ptr [esi + 0x8], eax
L_86c:
        cmp     ebp, ebx
        jl      L_8a4
        mov     eax, dword ptr [esi + 0x4]
        lea     ecx, [ebp + ebp*0x2]
        sub     ebp, ebx
        inc     ebp
        lea     eax, [eax + ecx*0x4]
        mov     dword ptr [esp + 0x14], ebp
        mov     edi, eax
L_881:
        mov     ebp, dword ptr [edi]
        lea     ecx, [eax + 0xc]
        mov     dword ptr [ecx], ebp
        mov     ebp, dword ptr [edi + 0x4]
        mov     dword ptr [ecx + 0x4], ebp
        mov     edi, dword ptr [edi + 0x8]
        mov     dword ptr [ecx + 0x8], edi
        mov     ecx, dword ptr [esp + 0x14]
        sub     eax, 0xc
        dec     ecx
        mov     dword ptr [esp + 0x14], ecx
        /* __emit: backward JNZ rel-offset miscomputed by MSVC6 (off-by-2) */
        __emit 0x75
        __emit 0xDD
L_8a4:
        mov     ecx, dword ptr [esi + 0x4]
        inc     ebx
        cmp     ebx, edx
        lea     eax, [ebx + ebx*0x2]
        lea     ecx, [ecx + eax*0x4]
        jge     L_8e3
        fld     dword ptr [ecx + 0xc]
        push    ecx
        fsub    dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x28]
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ecx + 0x4]
        fadd    dword ptr [ecx + 0x8]
        fstp    dword ptr [esp]
        fld     dword ptr [esp + 0x2c]
        push    ecx
        fsub    dword ptr [ecx]
        fmul    dword ptr [ecx + 0x4]
        fadd    dword ptr [ecx + 0x8]
        fstp    dword ptr [esp]
        push    edx
        jmp     L_90f
L_8e3:
        fld     dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x24]
        fsub    dword ptr [ecx]
        push    0x3f800000
        push    ecx
        fld     st(0)
        fadd    dword ptr [g_76d064]
        fmul    dword ptr [ecx + 0x4]
        fadd    dword ptr [ecx + 0x8]
        fstp    dword ptr [esp]
        push    ecx
        fmul    dword ptr [ecx + 0x4]
        fadd    dword ptr [ecx + 0x8]
        fstp    dword ptr [esp]
        push    eax
L_90f:
        call    FUN_004ae2b0
        call    FUN_006f49a0
L_919:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
