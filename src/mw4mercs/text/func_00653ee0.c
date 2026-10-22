/*
 * FUN_00653EE0 (513 B) — __fastcall (ECX = this). Distance-matrix / vector
 * array builder. Enters a lock (FUN_006f4950), grows a vector of pointers,
 * fills a distance matrix with 0x7f7fffff sentinels and computed distances.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2464;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00659020(void);
extern void __cdecl FUN_00547bc0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005cbb00(void);
extern void __cdecl FUN_00566570(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __fastcall FUN_00653ee0(void)
{
    __asm {
        sub     esp, 0x2c
        mov     eax, dword ptr [g_7f2464]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_006f4950
        mov     edx, dword ptr [ebx + 0x20]
        mov     esi, dword ptr [ebx + 0x1c]
        sub     edx, esi
        sar     edx, 0x2
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jle     L_54005
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x1c], edx
L_53f19:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_53fef
        mov     esi, eax
        add     esi, 0x2c
        mov     ebx, dword ptr [esi + 0x8]
        lea     edi, [esi + 0x8]
        mov     byte ptr [eax + 0x5], 0x1
        mov     eax, dword ptr [esi]
        sub     ebx, eax
        sar     ebx, 0x2
        cmp     ebx, edx
        jnc     L_53f9c
        mov     ecx, dword ptr [esi + 0x4]
        mov     ebx, ecx
        sub     ebx, eax
        sar     ebx, 0x2
        test    eax, eax
        jz      L_53f6f
        push    ecx
        push    eax
        push    edx
        mov     ecx, esi
        call    FUN_00659020
        mov     ecx, dword ptr [edi]
        mov     ebp, eax
        mov     eax, dword ptr [esi]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_00547bc0
        mov     edx, dword ptr [esp + 0x14]
        jmp     L_53f89
L_53f6f:
        test    edx, edx
        jz      L_53f87
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x18]
        add     esp, 0x4
        mov     ebp, eax
        jmp     L_53f89
L_53f87:
        xor     ebp, ebp
L_53f89:
        lea     ecx, [ebp + edx*0x4]
        lea     eax, [ebp + ebx*0x4]
        mov     dword ptr [edi], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x4], eax
L_53f9c:
        mov     ebx, edx
        jmp     L_53fa4
L_53fa0:
        mov     ecx, dword ptr [esp + 0x10]
L_53fa4:
        mov     dword ptr [esp + 0x18], 0x7f7fffff
        mov     esi, dword ptr [ecx]
        mov     edi, dword ptr [esi + 0x30]
        mov     eax, dword ptr [esi + 0x34]
        add     esi, 0x2c
        cmp     edi, eax
        jz      L_53fd1
        lea     edx, [esp + 0x18]
        push    edx
        push    edi
        call    FUN_005cbb00
        add     esp, 0x8
        add     edi, 0x4
        mov     dword ptr [esi + 0x4], edi
        jmp     L_53fe0
L_53fd1:
        push    0x1
        lea     eax, [esp + 0x1c]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00566570
L_53fe0:
        dec     ebx
        jnz     L_53fa0
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x20]
L_53fef:
        mov     eax, dword ptr [esp + 0x1c]
        add     ecx, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x1c], eax
        jnz     L_53f19
L_54005:
        lea     eax, [edx + -0x1]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jle     L_540d4
        xor     esi, esi
        mov     edi, 0x1
L_5401b:
        cmp     edi, edx
        mov     ecx, edi
        jge     L_540c5
        mov     eax, dword ptr [ebx + 0x1c]
L_5402b:
        mov     ebx, dword ptr [esi + eax*0x1]
        test    ebx, ebx
        jnz     L_54035
        cmp     dword ptr [eax + ecx*0x4], 0x0
        jz      L_540b4
L_54035:
        cmp     dword ptr [esi + eax*0x1], 0x0
        mov     ebp, dword ptr [eax + ecx*0x4]
        jnz     L_5404a
        mov     ebp, dword ptr [ebp + 0x2c]
        mov     dword ptr [esi + ebp*0x1], 0x7f7fffff
        jmp     L_540b4
L_5404a:
        test    ebp, ebp
        jnz     L_5405e
        mov     ebp, dword ptr [esi + eax*0x1]
        mov     ebp, dword ptr [ebp + 0x2c]
        mov     dword ptr [ebp + ecx*0x4], 0x7f7fffff
        jmp     L_540b4
L_5405e:
        mov     edx, dword ptr [esi + eax*0x1]
        fld     dword ptr [edx + 0x8]
        add     edx, 0x8
        mov     edx, dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0x2c], edx
        mov     edx, dword ptr [eax + ecx*0x4]
        fld     dword ptr [edx + 0x8]
        add     edx, 0x8
        mov     edx, dword ptr [edx + 0x8]
        fxch
        fsub    st(0), st(1)
        mov     dword ptr [esp + 0x38], edx
        fxch
        mov     edx, dword ptr [esi + eax*0x1]
        fstp    st(0)
        mov     edx, dword ptr [edx + 0x2c]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x38]
        fld     st(0)
        fmul    st(0), st(1)
        __emit 0xD9   /* __emit: MSVC6 rejects fld st(2) (C2415) */
        __emit 0xC2
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        __emit 0xD9   /* __emit: MSVC6 rejects fsqrt (C2404) */
        __emit 0xFA
        __emit 0xDD   /* __emit: MSVC6 rejects fstp st(2) (C2414) */
        __emit 0xDA
        fstp    st(0)
        fst     dword ptr [edx + ecx*0x4]
        mov     edx, dword ptr [eax + ecx*0x4]
        mov     edx, dword ptr [edx + 0x2c]
        fstp    dword ptr [edx + esi*0x1]
        mov     edx, dword ptr [esp + 0x14]
L_540b4:
        inc     ecx
        cmp     ecx, edx
        __emit 0x0F   /* __emit: MSVC6 miscomputes backward jl rel32 (off by 3) */
        __emit 0x8C
        __emit 0x6E
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        mov     ebx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
L_540c5:
        inc     edi
        lea     ecx, [edi + -0x1]
        add     esi, 0x4
        cmp     ecx, eax
        jl      L_5401b
L_540d4:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x2c
        ret
    }
}
