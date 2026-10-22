/*
 * FUN_0047E800 (1008 B) — __fastcall (ECX = this), RET 8 (2 stack dwords).
 *
 * NOTE: the assigned data-block VA was 0x0047E814, but that is mid-function;
 * the real entry is 0x0047E800 (clean prologue after nop padding at 0x47E7F0).
 * Transcribed from the true entry so the finalizer places it correctly.
 *
 * MLR collision/intersection test: iterates over a set of points (this+0x60
 * byte array, count in this+0x48), for each computes a 3D vector via FPU
 * (fcomp/fnstsw against g_76c5b0/g_76d064/g_7b220c), picks the dominant axis
 * (edx/esi), and does a ray/triangle intersection test (fdiv/fmul/fsubp
 * chain) writing the result normal into [esp+0x78]. Returns a flag in al.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;   /* DAT_0076c5b0 */
extern float g_7b220c;   /* DAT_007b220c */
extern float g_76d064;   /* DAT_0076d064 */
extern void __cdecl FUN_00766cb0(void);
extern void __cdecl FUN_0040cbb0(void);

__declspec(naked) void __fastcall FUN_0047E800(void)
{
    __asm {
        sub     esp, 0x60
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp]
        push    edi
        xor     ebx, ebx
        mov     dword ptr [esp + 0x4c], ebp
        xor     edi, edi
        mov     dword ptr [esp + 0x18], ebx
        call    dword ptr [eax + 8]
        xor     cl, cl
        cmp     eax, edi
        mov     dword ptr [esp + 0x50], eax
        mov     byte ptr [esp + 0xf], cl
        mov     dword ptr [esp + 0x44], edi
        jle     L_ebe8
        push    esi
        mov     dword ptr [esp + 0x3c], edi
L_e835:
        mov     ecx, dword ptr [ebp + 0x60]
        mov     esi, dword ptr [esp + 0x3c]
        xor     edx, edx
        mov     dl, byte ptr [ecx + edi]
        mov     ecx, dword ptr [esp + 0x74]
        lea     eax, [esp + 0x4c]
        push    eax
        mov     dword ptr [esp + 0x3c], edx
        add     esi, dword ptr [ebp + 0x58]
        push    esi
        mov     dword ptr [esp + 0x4c], esi
        call    FUN_00766cb0
        fst     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jne     L_ebb6
        fld     dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x74]
        fcomp   dword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        je      L_ebb6
        fld     dword ptr [g_7b220c]
        mov     byte ptr [esp + 0x12], 0
        fchs
        fcomp   dword ptr [esp + 0x4c]
        fnstsw  ax
        test    ah, 1
        je      L_e8bf
        mov     edx, dword ptr [ebp]
        push    0
        mov     ecx, ebp
        call    dword ptr [edx + 0x1c]
        mov     eax, dword ptr [eax + 4]
        and     eax, 0x10
        cmp     al, 0x10
        je      L_ebb6
        mov     ecx, dword ptr [esp + 0x74]
        mov     byte ptr [esp + 0x12], 1
L_e8bf:
        fld     dword ptr [esp + 0x14]
        lea     edx, [esp + 0x58]
        fmul    dword ptr [ecx + 0xc]
        push    edx
        push    ecx
        fstp    dword ptr [esp + 0x60]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [ecx + 0x10]
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [ecx + 0x14]
        lea     ecx, [esp + 0x6c]
        fstp    dword ptr [esp + 0x68]
        call    FUN_0040cbb0
        fld     dword ptr [esi]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne     L_e906
        mov     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x28], eax
        jmp     L_e90e
L_e906:
        fld     dword ptr [esi]
        fchs
        fstp    dword ptr [esp + 0x28]
L_e90e:
        fld     dword ptr [esi + 4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne     L_e927
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [esp + 0x2c], ecx
        jmp     L_e930
L_e927:
        fld     dword ptr [esi + 4]
        fchs
        fstp    dword ptr [esp + 0x2c]
L_e930:
        fld     dword ptr [esi + 8]
        fcomp   dword ptr [g_76c5b0]
        fld     dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 0x41
        je      L_e945
        fchs
L_e945:
        fld     dword ptr [esp + 0x28]
        fcomp   dword ptr [esp + 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jne     L_e96f
        fld     dword ptr [esp + 0x28]
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jne     L_e987
        mov     edx, 1
        mov     esi, 2
        jmp     L_e98e
L_e96f:
        fld     dword ptr [esp + 0x2c]
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jne     L_e987
        mov     edx, 2
        xor     esi, esi
        jmp     L_e98e
L_e987:
        xor     edx, edx
        mov     esi, 1
L_e98e:
        mov     edi, dword ptr [ebp + 0x48]
        fld     dword ptr [esp + edx*4 + 0x64]
        mov     ebp, dword ptr [ebp + 0x14]
        xor     eax, eax
        mov     al, byte ptr [edi + ebx]
        mov     byte ptr [esp + 0x11], 0
        lea     eax, [eax + eax*2]
        lea     ecx, [ebp + eax*4]
        fsub    dword ptr [ecx + edx*4]
        xor     eax, eax
        mov     al, byte ptr [edi + ebx + 1]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + esi*4 + 0x64]
        fsub    dword ptr [ecx + esi*4]
        lea     eax, [eax + eax*2]
        fstp    dword ptr [esp + 0x40]
        lea     eax, [ebp + eax*4]
        mov     dword ptr [esp + 0x34], eax
        xor     eax, eax
        mov     al, byte ptr [edi + ebx + 2]
        mov     ebx, dword ptr [esp + 0x34]
        fld     dword ptr [ebx + edx*4]
        fsub    dword ptr [ecx + edx*4]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [ebx + esi*4]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + esi*4]
        lea     eax, [ebp + eax*4]
        mov     ebx, 3
        fstp    dword ptr [esp + 0x24]
L_e9f6:
        fld     dword ptr [eax + edx*4]
        fsub    dword ptr [ecx + edx*4]
        fld     dword ptr [eax + esi*4]
        fsub    dword ptr [ecx + esi*4]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x18]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jne     L_ea8b
        fld     dword ptr [esp + 0x30]
        fdiv    st(0), st(1)
        fst     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jne     L_eb0b
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 1
        je      L_eb0b
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x34]
        fsubr   dword ptr [esp + 0x40]
        fdiv    dword ptr [esp + 0x24]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jne     L_eb04
        fadd    dword ptr [esp + 0x18]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        je      L_eb06
        mov     byte ptr [esp + 0x11], 1
        jmp     L_eb0b
L_ea8b:
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x30]
        fsubp   st(1), st(0)
        __emit 0xD9  /* fld dword ptr [esp+0x34] */
        __emit 0x44
        __emit 0x24
        __emit 0x34
        fmul    dword ptr [esp + 0x18]
        __emit 0xD9  /* fld st(2) */
        __emit 0xC2
        fmul    dword ptr [esp + 0x24]
        fsubp   st(1), st(0)
        __emit 0xDE  /* fdivp st(1), st(0) */
        __emit 0xF9
        fst     dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jne     L_eb0b
        fld     dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        je      L_eb0b
        fld     dword ptr [esp + 0x20]
        fmul    st(0), st(1)
        __emit 0xD8  /* fsubr dword ptr [esp+0x30] */
        __emit 0x6C
        __emit 0x24
        __emit 0x30
        fdiv    dword ptr [esp + 0x18]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jne     L_eb04
        fadd    dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        je      L_eb06
        mov     byte ptr [esp + 0x11], 1
        jmp     L_eb0b
L_eb04:
        fstp    st(0)
L_eb06:
        mov     byte ptr [esp + 0x11], 0
L_eb0b:
        mov     eax, dword ptr [esp + 0x38]
        cmp     ebx, eax
        jge     L_eb48
        cmp     byte ptr [esp + 0x11], 0
        jne     L_eb54
        mov     eax, dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x18]
        add     eax, ebx
        inc     ebx
        mov     dword ptr [esp + 0x20], ebx
        xor     ebx, ebx
        mov     bl, byte ptr [edi + eax]
        mov     eax, ebx
        mov     ebx, dword ptr [esp + 0x34]
        lea     eax, [eax + eax*2]
        mov     dword ptr [esp + 0x24], ebx
        mov     ebx, dword ptr [esp + 0x20]
        lea     eax, [ebp + eax*4]
        jmp     L_e9f6
L_eb48:
        mov     cl, byte ptr [esp + 0x11]
        fstp    st(0)
        test    cl, cl
        je      L_eba2
        jmp     L_eb56
L_eb54:
        fstp    st(0)
L_eb56:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x74]
        mov     dword ptr [edx + 0x18], ecx
        mov     cl, byte ptr [esp + 0x12]
        test    cl, cl
        mov     ecx, dword ptr [esp + 0x44]
        mov     byte ptr [esp + 0x13], 1
        je      L_eb8e
        fld     dword ptr [ecx]
        mov     edx, dword ptr [esp + 0x78]
        fchs
        fstp    dword ptr [edx]
        fld     dword ptr [ecx + 4]
        fchs
        fstp    dword ptr [edx + 4]
        fld     dword ptr [ecx + 8]
        fchs
        fstp    dword ptr [edx + 8]
        jmp     L_eba2
L_eb8e:
        mov     esi, dword ptr [ecx]
        mov     edx, dword ptr [esp + 0x78]
        mov     dword ptr [edx], esi
        mov     esi, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [edx + 4], esi
        mov     dword ptr [edx + 8], ecx
L_eba2:
        mov     ebx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x50]
        mov     edi, dword ptr [esp + 0x48]
        add     ebx, eax
        mov     dword ptr [esp + 0x1c], ebx
        jmp     L_ebbe
L_ebb6:
        add     ebx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x1c], ebx
L_ebbe:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esp + 0x54]
        inc     edi
        add     ecx, 0x10
        cmp     edi, eax
        mov     dword ptr [esp + 0x48], edi
        mov     dword ptr [esp + 0x3c], ecx
        jl      L_e835
        mov     al, byte ptr [esp + 0x13]
        pop     esi
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret     8
L_ebe8:
        pop     edi
        pop     ebp
        mov     al, cl
        pop     ebx
        add     esp, 0x60
        ret     8
    }
}
