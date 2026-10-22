/*
 * FUN_0042bff0 (551 B) — __thiscall, RET 0x8. MLR render-state / lightmap
 * generation: builds a per-vertex lightmap byte buffer from a light
 * direction + vertex data, then fills a destination buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b2230;
extern int g_007b94a0;
extern float g_0076d5f0;
extern float g_0076e1f0;
extern float g_0076e1ec;
extern float g_0076e1e8;
extern float g_0076dd64;
extern float g_0076d070;
extern float g_0076dd60;
extern float g_007b97f0;
extern float g_007b97e8;
extern float g_007b97e0;
extern int g_007da664;
extern float g_0076e138;
extern unsigned char g_007b96dc[];
extern int g_007d98fc;

extern void __cdecl FUN_0040cb00(void);

__declspec(naked) void FUN_0042bff0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x58]
        test    eax, eax
        jg      L_c00d
        mov     byte ptr [esi+0x10], 0
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_c00d:
        mov     eax, dword ptr [g_007b2230]
        test    eax, eax
        jnz     L_c04c
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0x98]
        mov     dl, byte ptr [esi+0x13]
        mov     ecx, dword ptr [esi+0x2c]
        mov     eax, dword ptr [esi+0x34]
        and     dl, 0xfd
        and     ecx, 0xefffffff
        or      eax, 0x10000000
        mov     dword ptr [esi+0x34], eax
        mov     byte ptr [esi+0x13], dl
        mov     dword ptr [esi+0x2c], ecx
        mov     eax, 1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_c04c:
        mov     eax, dword ptr [esi+0xc]
        mov     ecx, dword ptr [eax+0x20]
        mov     eax, dword ptr [eax+0x24]
        mov     edx, dword ptr [g_007b94a0]
        push    edi
        xor     edi, edi
        test    eax, eax
        mov     dword ptr [ebp-0x18], eax
        mov     dword ptr [ebp-0x4], edx
        jle     L_c1c1
        push    ebx
        xor     ebx, ebx
        mov     dword ptr [ebp-0x8], ecx
L_c072:
        mov     ecx, dword ptr [ebp+0x8]
        mov     eax, dword ptr [esi+0x14]
        fld     dword ptr [ecx]
        fsub    dword ptr [eax+ebx]
        add     eax, ebx
        fstp    dword ptr [ebp-0x24]
        fld     dword ptr [ecx+0x4]
        fsub    dword ptr [eax+0x4]
        fstp    dword ptr [ebp-0x20]
        fld     dword ptr [ecx+0x8]
        lea     ecx, [ebp-0x24]
        fsub    dword ptr [eax+0x8]
        fstp    dword ptr [ebp-0x1c]
        call    FUN_0040cb00
        fstp    dword ptr [ebp-0x10]
        mov     eax, dword ptr [ebp-0x10]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp-0x14], eax
        fld     dword ptr [ebp-0x14]
        mov     eax, 0x7f000000
        fstp    dword ptr [ebp-0xc]
        sub     eax, dword ptr [ebp-0xc]
        mov     dword ptr [ebp-0x10], eax
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0xc]
        fsubr   dword ptr [g_0076d5f0]
        fmul    dword ptr [ebp-0x10]
        fld     st(0)
        fmul    dword ptr [ebp-0x24]
        fstp    dword ptr [ebp-0x24]
        fld     st(0)
        fmul    dword ptr [ebp-0x20]
        fstp    dword ptr [ebp-0x20]
        fld     dword ptr [ebp-0x1c]
        fmul    st(0), st(1)
        fstp    [ebp-0x1c]
        fstp    st(0)
        fld     dword ptr [ebp-0x20]
        fmul    dword ptr [g_0076e1f0]
        fsubr   dword ptr [g_0076e1ec]
        fcom    dword ptr [g_0076e1e8]
        fnstsw  ax
        test    ah, 1
        jz      L_c10a
        fstp    st(0)
        fld     dword ptr [g_0076e1e8]
L_c10a:
        fmul    dword ptr [g_0076dd64]
        fcom    dword ptr [g_0076dd64]
        fnstsw  ax
        test    ah, 1
        jnz     L_c125
        fstp    st(0)
        mov     byte ptr [ebp-0x1], 0xff
        jmp     L_c13a
L_c125:
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp-0x10]
        mov     cl, byte ptr [ebp-0x10]
        mov     byte ptr [ebp-0x1], cl
L_c13a:
        fld     dword ptr [ebp-0x1c]
        mov     eax, dword ptr [ebp-0x8]
        fmul    dword ptr [g_007b97f0]
        mov     edx, dword ptr [ebp-0x4]
        fld     dword ptr [g_007b97e8]
        mov     dword ptr [eax], edx
        fmul    dword ptr [ebp-0x24]
        mov     dword ptr [ebp-0x20], 0
        faddp   st(1), st(0)
        fcom    dword ptr [g_007b97e0]
        fnstsw  ax
        test    ah, 1
        jz      L_c17a
        mov     ecx, dword ptr [g_007da664]
        fstp    st(0)
        mov     edx, dword ptr [ecx]
        mov     byte ptr [edx+edi], 0
        jmp     L_c1a8
L_c17a:
        fmul    dword ptr [g_0076e138]
        mov     ecx, dword ptr [g_007da664]
        mov     edx, dword ptr [ecx]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp-0x10]
        mov     eax, dword ptr [ebp-0x10]
        and     eax, 0xff
        mov     al, byte ptr [g_007b96dc+eax]
        mov     byte ptr [edx+edi], al
L_c1a8:
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebp-0x18]
        inc     edi
        add     ecx, 4
        add     ebx, 0xc
        cmp     edi, eax
        mov     dword ptr [ebp-0x8], ecx
        jl      L_c072
        pop     ebx
L_c1c1:
        mov     edx, dword ptr [esi+0x2c]
        mov     ecx, dword ptr [esi+0x34]
        mov     eax, 0x10000000
        or      ecx, eax
        or      edx, eax
        mov     al, byte ptr [esi+0x13]
        mov     dword ptr [esi+0x34], ecx
        mov     ecx, dword ptr [esi+0x58]
        mov     dword ptr [esi+0x2c], edx
        mov     edx, dword ptr [g_007d98fc]
        mov     edi, dword ptr [edx]
        mov     edx, ecx
        or      al, 0x2
        shr     ecx, 2
        mov     byte ptr [esi+0x13], al
        mov     eax, 0x1010101
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     byte ptr [esi+0x10], 1
        call    dword ptr [eax+0x98]
        pop     edi
        mov     eax, 1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
