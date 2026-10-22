/*
 * FUN_004ADA10 (664 B) — __thiscall (RET 0xC). MLR switch dispatcher over a
 * 12-entry jump table (at 0x4adcac, outside this code slice). Each case
 * advances `this` by a stride and/or performs FPU interpolation on the
 * object's vector fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ADE20(void);
extern void __cdecl FUN_004AE010(void);
extern void __cdecl FUN_004AE2B0(void);
extern float g_007704C4;
extern float g_0076D064;

__declspec(naked) void FUN_004ADA10(void)
{
    __asm {
        sub     esp, 8
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi]
        cmp     eax, 0xb
        ja      L4ADCA2
        mov     ecx, dword ptr [esp + 0x18]
L4ADA25:
        jmp     dword ptr [eax*4 + 0x4adcac]
L4ADA2C:
        test    ecx, ecx
        jne     L4ADA35
        add     edi, 4
        jmp     L4ADA5D
L4ADA35:
        add     edi, 0x10
        jmp     L4ADA5D
L4ADA3A:
        test    ecx, ecx
        jne     L4ADA43
        add     edi, 4
        jmp     L4ADA5D
L4ADA43:
        add     edi, 0xc
        jmp     L4ADA5D
L4ADA48:
        test    ecx, ecx
        jne     L4ADA5A
        add     edi, 4
        jmp     L4ADA5D
L4ADA51:
        test    ecx, ecx
        jne     L4ADA5A
        add     edi, 4
        jmp     L4ADA5D
L4ADA5A:
        add     edi, 0x18
L4ADA5D:
        mov     eax, dword ptr [edi]
        cmp     eax, 0xb
        jbe     L4ADA25
        pop     edi
        add     esp, 8
        ret     0xc
L4ADA6B:
        fld     dword ptr [edi + 4]
        fsub    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [edi + 4]
        pop     edi
        add     esp, 8
        ret     0xc
L4ADA84:
        fld     dword ptr [edi + 8]
        push    ecx
        fadd    dword ptr [edi + 4]
        fsub    dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 4]
        push    ecx
        fsub    dword ptr [esp + 0x1c]
        mov     ecx, edi
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_004ADE20
        pop     edi
        add     esp, 8
        ret     0xc
L4ADABB:
        fld     dword ptr [edi + 0x10]
        push    ecx
        fadd    st(0), st(0)
        fld     dword ptr [edi + 0xc]
        fmul    dword ptr [g_007704C4]
        faddp   st(1), st(0)
        fadd    dword ptr [edi + 8]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 0x10]
        push    ecx
        fadd    dword ptr [edi + 0xc]
        fadd    dword ptr [edi + 8]
        fadd    dword ptr [edi + 4]
        fsub    dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 8]
        push    ecx
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 4]
        push    ecx
        fsub    dword ptr [esp + 0x24]
        mov     ecx, edi
        fmul    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp]
        call    FUN_004AE010
        pop     edi
        add     esp, 8
        ret     0xc
L4ADB1E:
        push    ebx
        push    esi
        mov     esi, dword ptr [edi + 8]
        lea     ecx, [esi - 1]
        xor     eax, eax
        test    ecx, ecx
        jle     L4ADBF2
        push    ebp
        mov     ebp, dword ptr [edi + 4]
        mov     ebx, ebp
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ecx
L4ADB3E:
        mov     eax, dword ptr [ebx]
        fld     dword ptr [ebx + 0xc]
        xor     ecx, ecx
        test    esi, esi
        mov     dword ptr [esp + 0x24], eax
        jbe     L4ADB64
        mov     edx, ebp
L4ADB4F:
        fld     dword ptr [edx]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        je      L4ADB64
        inc     ecx
        add     edx, 0xc
        cmp     ecx, esi
        jb      L4ADB4F
L4ADB64:
        fld     dword ptr [esp + 0x24]
        lea     ecx, [ecx + ecx*2]
        fsub    dword ptr [ebp + ecx*4 - 0xc]
        lea     eax, [ebp + ecx*4 - 0xc]
        xor     ecx, ecx
        test    esi, esi
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        jbe     L4ADB94
        mov     edx, ebp
L4ADB81:
        fld     dword ptr [edx]
        fcomp   st(2)
        fnstsw  ax
        test    ah, 0x41
        je      L4ADB94
        inc     ecx
        add     edx, 0xc
        cmp     ecx, esi
        jb      L4ADB81
L4ADB94:
        push    ecx
        fld     st(1)
        fsub    dword ptr [esp + 0x28]
        lea     edx, [ecx + ecx*2]
        lea     eax, [ebp + edx*4 - 0xc]
        fstp    dword ptr [esp]
        push    ecx
        fxch    st(1)
        fsub    dword ptr [eax]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov     eax, dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp]
        push    ecx
        fsub    dword ptr [esp + 0x2c]
        mov     ecx, ebx
        fmul    dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        push    eax
        call    FUN_004AE2B0
        mov     eax, dword ptr [esp + 0x10]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jne     L4ADB3E
        mov     eax, dword ptr [esp + 0x14]
        pop     ebp
L4ADBF2:
        mov     edi, dword ptr [edi + 4]
        lea     ecx, [eax + eax*2]
        mov     edx, dword ptr [edi + ecx*4]
        lea     ecx, [edi + ecx*4]
        mov     dword ptr [esp + 0x20], edx
        xor     edx, edx
        test    esi, esi
        jbe     L4ADC1F
        mov     ebx, edi
L4ADC0A:
        fld     dword ptr [ebx]
        fcomp   dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L4ADC1F
        inc     edx
        add     ebx, 0xc
        cmp     edx, esi
        jb      L4ADC0A
L4ADC1F:
        fld     dword ptr [esp + 0x20]
        lea     eax, [edx + edx*2]
        fsub    dword ptr [edi + eax*4 - 0xc]
        lea     eax, [edi + eax*4 - 0xc]
        xor     edx, edx
        test    esi, esi
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        jbe     L4ADC53
        mov     ebx, edi
L4ADC3C:
        fld     dword ptr [ebx]
        fcomp   dword ptr [g_0076D064]
        fnstsw  ax
        test    ah, 0x41
        je      L4ADC53
        inc     edx
        add     ebx, 0xc
        cmp     edx, esi
        jb      L4ADC3C
L4ADC53:
        fld     dword ptr [g_0076D064]
        push    ecx
        fsub    dword ptr [esp + 0x24]
        lea     edx, [edx + edx*2]
        lea     eax, [edi + edx*4 - 0xc]
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [g_0076D064]
        fsub    dword ptr [eax]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov     eax, dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp]
        push    ecx
        fsub    dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp]
        push    eax
        call    FUN_004AE2B0
        pop     esi
        pop     ebx
L4ADCA2:
        pop     edi
        add     esp, 8
        ret     0xc
    }
}
