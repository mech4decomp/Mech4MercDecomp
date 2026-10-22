/*
 * FUN_1003e870 (350 B) — __stdcall.
 * Validates a linked-list of 0x1000-byte blocks; returns 0 or a negative
 * error code (-1..-9).
 */

extern char g_10051f70;
extern int g_10053f90;

__declspec(naked) void __stdcall FUN_1003e870(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        and     dword ptr [ebp - 0x1c], 0x0
        push    ebx
        mov     edx, offset g_10051f70
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x20], edx
    L_1003e885:
        cmp     dword ptr [g_10053f90], edx
        jnz     L_1003e890
        inc     dword ptr [ebp - 0x1c]
    L_1003e890:
        mov     ecx, dword ptr [edx + 0x10]
        cmp     ecx, -0x1
        jz      L_1003e988
        and     dword ptr [ebp - 0x18], 0x0
        and     dword ptr [ebp - 0xc], 0x0
        mov     ebx, ecx
        lea     eax, [edx + 0x18]
        mov     dword ptr [ebp - 0x14], eax
        lea     edi, [ebx + 0x8]
    L_1003e8af:
        cmp     dword ptr [eax], -0x1
        jnz     L_1003e8cb
        cmp     dword ptr [ebp - 0xc], 0x0
        jnz     L_1003e8c3
        cmp     dword ptr [edx + 0xc], eax
        jnz     L_1003e99a
    L_1003e8c3:
        inc     dword ptr [ebp - 0xc]
        jmp     L_1003e969
    L_1003e8cb:
        mov     esi, dword ptr [ebx]
        lea     ecx, [edi + 0xf0]
        cmp     esi, ecx
        jnc     L_1003e99f
        cmp     byte ptr [ecx], 0xff
        jnz     L_1003e9a4
        xor     ecx, ecx
        and     dword ptr [ebp - 0x8], ecx
        and     dword ptr [ebp - 0x10], ecx
        and     dword ptr [ebp - 0x4], ecx
    L_1003e8ef:
        lea     esi, [edi + ecx]
        cmp     esi, dword ptr [ebx]
        jnz     L_1003e8fc
        inc     dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x14]
    L_1003e8fc:
        cmp     byte ptr [esi], 0x0
        jnz     L_1003e90a
        inc     dword ptr [ebp - 0x10]
        inc     dword ptr [ebp - 0x4]
        inc     ecx
        jmp     L_1003e954
    L_1003e90a:
        mov     edx, dword ptr [ebp - 0x4]
        cmp     edx, dword ptr [eax + 0x4]
        jge     L_1003e9a8
        cmp     dword ptr [ebp - 0x8], 0x1
        jnz     L_1003e931
        mov     eax, edx
        cmp     eax, dword ptr [edi - 0x4]
        jl      L_1003e9ac
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x8], 0x2
    L_1003e931:
        and     dword ptr [ebp - 0x4], 0x0
        lea     edx, [ecx + 0x1]
        movzx   esi, byte ptr [esi]
    L_1003e93b:
        add     esi, ecx
        cmp     edx, esi
        jge     L_1003e94f
        cmp     byte ptr [edi + edx], 0x0
        jnz     L_1003e9b0
        movzx   esi, byte ptr [ecx + ebx + 0x8]
        inc     edx
        jmp     L_1003e93b
    L_1003e94f:
        mov     ecx, edx
        mov     edx, dword ptr [ebp - 0x20]
    L_1003e954:
        cmp     ecx, 0xf0
        jl      L_1003e8ef
        mov     ecx, dword ptr [ebp - 0x10]
        cmp     ecx, dword ptr [eax]
        jnz     L_1003e9b4
        cmp     dword ptr [ebp - 0x8], 0x0
        jz      L_1003e9b8
    L_1003e969:
        inc     dword ptr [ebp - 0x18]
        mov     ecx, 0x1000
        add     eax, 0x8
        add     ebx, ecx
        add     edi, ecx
        cmp     dword ptr [ebp - 0x18], 0x400
        mov     dword ptr [ebp - 0x14], eax
        jl      L_1003e8af
    L_1003e988:
        mov     edx, dword ptr [edx]
        cmp     edx, offset g_10051f70
        mov     dword ptr [ebp - 0x20], edx
        jz      L_1003e9bc
        jmp     L_1003e885
    L_1003e99a:
        or      eax, 0xffffffff
        jmp     L_1003e9c9
    L_1003e99f:
        push    -0x2
    L_1003e9a1:
        pop     eax
        jmp     L_1003e9c9
    L_1003e9a4:
        push    -0x3
        jmp     L_1003e9a1
    L_1003e9a8:
        push    -0x4
        jmp     L_1003e9a1
    L_1003e9ac:
        push    -0x5
        jmp     L_1003e9a1
    L_1003e9b0:
        push    -0x6
        jmp     L_1003e9a1
    L_1003e9b4:
        push    -0x7
        jmp     L_1003e9a1
    L_1003e9b8:
        push    -0x8
        jmp     L_1003e9a1
    L_1003e9bc:
        mov     eax, dword ptr [ebp - 0x1c]
        neg     eax
        sbb     eax, eax
        and     eax, 0x9
        add     eax, -0x9
    L_1003e9c9:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
