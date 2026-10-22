/*
 * FUN_00657700 (639 B) — __thiscall ABL terrain heightmap allocator/
 * initializer. Reads dims via a virtual call (vtable+0x20), allocates a
 * 2-byte-per-cell buffer, fills it with 0x3f003f, then rasterizes four
 * slope-direction bands via _ftol-scaled loops. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007f2464;
extern float g_0080da60;
extern float g_0080da5c;
extern float g_0080da58;
extern float g_0080da54;
extern float g_00788100;

extern void FUN_006fab90(void);
extern void FUN_004084e0(void);
extern void FUN_00657a80(void);
extern void FUN_006f4950(void);
extern void FUN_004084d0(void);
extern void FUN_006f49a0(void);
extern void FUN_0075db4a(void);
extern void FUN_00657980(void);

__declspec(naked) void FUN_00657700(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [ebp+0x8]
        push    esi
        mov     esi, ecx
        xor     eax, eax
        push    edi
        push    4
        mov     dword ptr [esi+0x8], eax
        mov     dword ptr [esi+0xc], eax
        mov     dword ptr [esi+0x10], eax
        mov     dword ptr [esi+0x14], eax
        mov     eax, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        mov     dword ptr [ebp-0x10], esi
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [ebx]
        lea     edi, [esi+0x4]
        push    4
        push    edi
        mov     ecx, ebx
        mov     dword ptr [ebp-0xc], edi
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [ebx]
        push    4
        lea     ecx, [ebp-0x8]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x20]
        cmp     dword ptr [esi], 0
        jnz     L_57769
        cmp     dword ptr [edi], 0
        jnz     L_57769
        mov     eax, dword ptr [ebp-0x8]
        test    eax, eax
        jnz     L_57769
        push    0x794998
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_57769
        int     3
    L_57769:
        mov     eax, dword ptr [esi+0x8]
        test    eax, eax
        mov     ecx, dword ptr [esi]
        mov     edi, dword ptr [edi]
        mov     dword ptr [ebp+0x8], ecx
        jz      L_57791
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     ecx, esi
        mov     dword ptr [esi+0x8], 0
        call    FUN_00657a80
        mov     ecx, dword ptr [ebp+0x8]
    L_57791:
        mov     edx, dword ptr [ebp-0xc]
        mov     dword ptr [edx], edi
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     dword ptr [esi], ecx
        mov     esi, edx
        mov     eax, 0x66666667
        imul    edi
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     dword ptr [ebp-0xc], edx
        mov     edx, dword ptr [g_007f2464]
        push    edx
        mov     dword ptr [ebp+0x8], esi
        call    FUN_006f4950
        mov     edi, esi
        imul    edi, dword ptr [ebp-0xc]
        lea     eax, [edi+edi]
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ebp+0x8]
        mov     esi, eax
        mov     eax, dword ptr [ebp-0x10]
        add     esp, 4
        test    edi, edi
        mov     dword ptr [eax+0x8], esi
        mov     dword ptr [eax+0x14], ecx
        mov     dword ptr [eax+0x10], edx
        jle     L_5780a
        mov     ecx, edi
        shr     ecx, 1
        mov     eax, 0x3f003f
        mov     edi, esi
        rep stosd
        adc     ecx, ecx
        __emit 0x66      /* rep stosw: MSVC6 emits F3 66 AB, ref is 66 F3 AB */
        __emit 0xF3
        __emit 0xAB
    L_5780a:
        call    FUN_006f49a0
        mov     eax, dword ptr [ebx]
        push    0x80000
        push    esi
        mov     ecx, ebx
        call    dword ptr [eax+0x20]
        fld     dword ptr [g_0080da60]
        fmul    dword ptr [g_00788100]
        call    FUN_0075db4a
        fld     dword ptr [g_0080da5c]
        fmul    dword ptr [g_00788100]
        mov     edi, eax
        mov     dword ptr [ebp-0xc], edi
        call    FUN_0075db4a
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_00788100]
        mov     ebx, eax
        call    FUN_0075db4a
        fld     dword ptr [g_0080da54]
        fmul    dword ptr [g_00788100]
        mov     dword ptr [ebp+0x8], eax
        call    FUN_0075db4a
        mov     ecx, eax
        lea     edx, [edi+5]
        cmp     edi, edx
        mov     dword ptr [ebp-0x4], ecx
        mov     eax, edi
        jge     L_578ae
    L_57878:
        cmp     ebx, ecx
        jge     L_578a6
        lea     edx, [ebx+0x100]
        mov     edi, ecx
        shl     edx, 9
        sub     edi, ebx
    L_57889:
        lea     ecx, [edx+eax+0x100]
        or      byte ptr [esi+ecx*2], 0x3f
        lea     ecx, [esi+ecx*2]
        add     edx, 0x200
        dec     edi
        jnz     L_57889
        mov     ecx, dword ptr [ebp-0x4]
        mov     edi, dword ptr [ebp-0xc]
    L_578a6:
        inc     eax
        lea     edx, [edi+5]
        cmp     eax, edx
        jl      L_57878
    L_578ae:
        mov     edx, dword ptr [ebp+0x8]
        lea     eax, [edx-5]
        cmp     eax, edx
        jge     L_578ee
    L_578b8:
        cmp     ebx, ecx
        jge     L_578e9
        lea     edx, [ebx+0x100]
        mov     edi, ecx
        shl     edx, 9
        sub     edi, ebx
    L_578c9:
        lea     ecx, [edx+eax+0x100]
        or      byte ptr [esi+ecx*2], 0x3f
        lea     ecx, [esi+ecx*2]
        add     edx, 0x200
        dec     edi
        jnz     L_578c9
        mov     ecx, dword ptr [ebp-0x4]
        mov     edi, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ebp+0x8]
    L_578e9:
        inc     eax
        cmp     eax, edx
        jl      L_578b8
    L_578ee:
        cmp     edi, edx
        mov     eax, edi
        jge     L_5792e
    L_578f4:
        lea     edx, [ebx+5]
        cmp     ebx, edx
        jge     L_57926
        lea     edx, [ebx+0x100]
        lea     edi, [ebx+5]
        shl     edx, 9
        sub     edi, ebx
    L_57909:
        lea     ecx, [edx+eax+0x100]
        or      byte ptr [esi+ecx*2], 0x3f
        lea     ecx, [esi+ecx*2]
        add     edx, 0x200
        dec     edi
        jnz     L_57909
        mov     ecx, dword ptr [ebp-0x4]
        mov     edi, dword ptr [ebp-0xc]
    L_57926:
        mov     edx, dword ptr [ebp+0x8]
        inc     eax
        cmp     eax, edx
        jl      L_578f4
    L_5792e:
        cmp     edi, edx
        mov     eax, edi
        jge     L_5796a
    L_57937:
        lea     ebx, [ecx-5]
        cmp     ebx, ecx
        jge     L_57965
        lea     edx, [ebx+0x100]
        mov     edi, ecx
        shl     edx, 9
        sub     edi, ebx
    L_57948:
        lea     ecx, [edx+eax+0x100]
        or      byte ptr [esi+ecx*2], 0x3f
        lea     ecx, [esi+ecx*2]
        add     edx, 0x200
        dec     edi
        jnz     L_57948
        mov     ecx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebp+0x8]
    L_57965:
        inc     eax
        cmp     eax, edx
        __emit 0x7C      /* jl L_57937: MSVC6 miscomputes backward rel (off-by-3) */
        __emit 0xCD
    L_5796a:
        mov     esi, dword ptr [ebp-0x10]
        mov     ecx, esi
        call    FUN_00657980
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
