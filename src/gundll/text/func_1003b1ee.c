/*
 * FUN_1003b1ee (194 B) — __cdecl.
 * Formats a floating-point-ish value into a string buffer (sign, exponent
 * "e+000" style), returns param_1.
 */

extern void __cdecl FUN_1003b490(void);
extern void __cdecl FUN_1003c500(void);   /* strcpy */

extern char g_10051b94;

__declspec(naked) void __cdecl FUN_1003b1ee(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        xor     ebx, ebx
        cmp     byte ptr [ebp + 0x18], bl
        push    esi
        mov     esi, dword ptr [ebp + 0x14]
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        jz      L_b21c
        xor     eax, eax
        cmp     dword ptr [ebp + 0xc], ebx
        setg    al
        push    eax
        xor     eax, eax
        cmp     dword ptr [esi], 0x2d
        setz    al
        add     eax, edi
        push    eax
        call    FUN_1003b490
        pop     ecx
        pop     ecx
    L_b21c:
        cmp     dword ptr [esi], 0x2d
        mov     eax, edi
        jnz     L_b229
        mov     byte ptr [edi], 0x2d
        lea     eax, [edi + 1]
    L_b229:
        cmp     dword ptr [ebp + 0xc], ebx
        jle     L_b240
        mov     dl, byte ptr [eax + 1]
        lea     ecx, [eax + 1]
        mov     byte ptr [eax], dl
        mov     eax, ecx
        mov     cl, byte ptr [g_10051b94]
        mov     byte ptr [eax], cl
    L_b240:
        xor     ecx, ecx
        cmp     byte ptr [ebp + 0x18], bl
        push    0x1004b798
        setz    cl
        add     ecx, eax
        add     ecx, dword ptr [ebp + 0xc]
        push    ecx
        call    FUN_1003c500
        cmp     dword ptr [ebp + 0x10], ebx
        pop     ecx
        pop     ecx
        mov     ecx, eax
        jz      L_b264
        mov     byte ptr [ecx], 0x45
    L_b264:
        mov     eax, dword ptr [esi + 0xc]
        inc     ecx
        cmp     byte ptr [eax], 0x30
        jz      L_b2a9
        mov     ebx, dword ptr [esi + 0x4]
        dec     ebx
        jns     L_b278
        neg     ebx
        mov     byte ptr [ecx], 0x2d
    L_b278:
        inc     ecx
        cmp     ebx, 0x64
        jl      L_b28f
        mov     eax, ebx
        push    0x64
        cdq
        pop     esi
        idiv    esi
        add     byte ptr [ecx], al
        mov     eax, ebx
        cdq
        idiv    esi
        mov     ebx, edx
    L_b28f:
        inc     ecx
        cmp     ebx, 0xa
        jl      L_b2a6
        mov     eax, ebx
        push    0xa
        cdq
        pop     esi
        idiv    esi
        add     byte ptr [ecx], al
        mov     eax, ebx
        cdq
        idiv    esi
        mov     ebx, edx
    L_b2a6:
        add     byte ptr [ecx + 1], bl
    L_b2a9:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
