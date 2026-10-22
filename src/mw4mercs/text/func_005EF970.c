/*
 * FUN_005EF970 (336 B) — Initializes a newly-created object. Calls a virtual
 * method (vtable+0x14) with 0x178, then FUN_00523e60 / FUN_005f0a60, then a
 * virtual method (vtable+4) that returns a buffer pointer (ebx). Copies two
 * strings (g_789fa0 -> ebx+0x6c, g_76cb8c -> ebx+0xec) into the buffer, sets
 * ebx+0x16c to a mode flag based on values read via FUN_004da8d0 (0x64..0x7b
 * -> 2, 0x33..0x4e -> 4, 0x4d -> 0x20, 0x4b/0x4c -> 8), and computes a
 * quotient into ebx+0x170/0x174 (or -1 if the divisor is <= 0). Returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_789fa0[];   /* 0x00789fa0 string */
extern unsigned char g_76cb8c[];   /* 0x0076cb8c string */
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_005f0a60(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) int FUN_005EF970(void)
{
    __asm {
        sub     esp, 0x44
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        mov     eax, dword ptr [esi]
        push    edi
        push    0x178
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    esi
        push    ecx
        lea     edx, [esp + 0x5c]
        mov     ecx, esp
        push    edx
        call    FUN_00523e60
        call    FUN_005f0a60
        mov     eax, dword ptr [esi]
        add     esp, 8
        mov     ecx, esi
        call    dword ptr [eax + 4]
        or      ecx, 0xffffffff
        mov     ebx, eax
        xor     eax, eax
        mov     edi, offset g_789fa0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebx + 0x6c]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_76cb8c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebx + 0xec]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     ecx, [esp + 0xc]
        mov     dword ptr [ebx + 0x16c], 1
        call    FUN_004d1f10
        lea     ecx, [esp + 0x54]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_004da8d0
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax + 0x30]
        mov     edx, eax
        add     eax, 0x30
        add     esp, 8
        cmp     ecx, 0x64
        jl      L_fa37
        cmp     ecx, 0x7b
        jg      L_fa37
        mov     dword ptr [ebx + 0x16c], 2
L_fa37:
        mov     eax, dword ptr [eax]
        cmp     eax, 0x33
        jl      L_fa4d
        cmp     eax, 0x4e
        jg      L_fa4d
        mov     dword ptr [ebx + 0x16c], 4
L_fa4d:
        cmp     eax, 0x4d
        jne     L_fa5c
        mov     dword ptr [ebx + 0x16c], 0x20
L_fa5c:
        cmp     eax, 0x4b
        je      L_fa66
        cmp     eax, 0x4c
        jne     L_fa70
L_fa66:
        mov     dword ptr [ebx + 0x16c], 8
L_fa70:
        mov     eax, dword ptr [edx + 0x44]
        test    eax, eax
        jle     L_fa9c
        mov     ecx, dword ptr [edx + 0x28]
        lea     ecx, [ecx + ecx*2]
        cdq
        idiv    ecx
        lea     ecx, [esp + 0xc]
        mov     dword ptr [ebx + 0x170], eax
        mov     dword ptr [ebx + 0x174], eax
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x44
        ret
L_fa9c:
        lea     ecx, [esp + 0xc]
        mov     dword ptr [ebx + 0x170], 0xffffffff
        mov     dword ptr [ebx + 0x174], 0xffffffff
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x44
        ret
    }
}
