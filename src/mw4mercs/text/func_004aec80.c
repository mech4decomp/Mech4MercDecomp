/*
 * FUN_004AEC80 (181 B) — __thiscall float iteration with min/max.
 * Reads this+8 (count) and this+4 (array). Iterates backwards through
 * float array, computing cumulative min/max via FUN_004ae300.
 * RET 0x8 (two stack params: float **min_out, float **max_out).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004ae300(void);

extern float DAT_0076d064;
extern float DAT_0076c5b0;

__declspec(naked) void __fastcall FUN_004aec80(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 8]
        test    edi, edi
        jnz     l_nonzero
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [eax], edi
        mov     dword ptr [ecx], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    l_nonzero:
        mov     eax, dword ptr [ecx + 4]
        fld     dword ptr [DAT_0076d064]
        dec     edi
        lea     edx, [edi + edi * 2]
        fsub    dword ptr [eax + edx * 4]
        lea     esi, [eax + edx * 4]
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_skip_clamp
        mov     dword ptr [esp + 0x10], 0
    l_skip_clamp:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x18]
        push    ecx
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_004ae300
        dec     edi
        js      l_done
        inc     edi
    l_loop:
        fld     dword ptr [esi]
        sub     esi, 0x0c
        fsub    dword ptr [esi]
        push    ecx
        lea     edx, [esp + 0x20]
        lea     eax, [esp + 0x1c]
        fstp    dword ptr [esp]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004ae300
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [ebx]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_skip_max
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx], ecx
    l_skip_max:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [ebp]
        fnstsw  ax
        test    ah, 1
        jz      l_skip_min
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebp], edx
    l_skip_min:
        dec     edi
        jnz     l_loop
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }
}
