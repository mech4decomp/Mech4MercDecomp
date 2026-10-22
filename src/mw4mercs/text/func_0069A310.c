/*
 * FUN_0069A310 (724 B) — __thiscall (this in ECX), RET 0xC (3 stack args:
 * arg1 = out ptr, arg2 = ebp, arg3 = ebx). Hash-table / linked-list insert
 * helper. Walks a chain comparing keys via FUN_0069A760, allocates nodes via
 * FUN_0069AC00, and links them into the list. Contains a literal write to
 * absolute address 0xC (deliberate low-memory store, transcribed verbatim).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0069A760(void);
extern void __cdecl FUN_0069AC00(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_0069ACA0(void);
extern void __cdecl FUN_0069A860(void);
extern void __cdecl FUN_004114B0(void);
extern void __cdecl FUN_0069ACB0(void);
extern void __cdecl FUN_0069ACD0(void);
extern void __cdecl FUN_0069A9D0(void);

__declspec(naked) void func_0069A310(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x44]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi]
        cmp     ebp, dword ptr [edi + 8]
        jne     L_a4b3
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        mov     ebx, dword ptr [esp + 0x50]
        jbe     L_a3d5
        lea     eax, [ebp + 0x10]
        push    eax
        push    ebx
        call    FUN_0069A760
        add     esp, 8
        test    al, al
        je      L_a3d5
        cmp     ebp, edi
        je      L_a383
        test    ebp, ebp
        jne     L_a383
        lea     eax, [ebp + 0x10]
        push    eax
        push    ebx
        call    FUN_0069A760
        add     esp, 8
        test    al, al
        jne     L_a383
        push    ebx
        mov     ecx, esi
        call    FUN_0069AC00
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        __emit  0x89            /* mov dword ptr [0xc], edi: MSVC6 rejects [0xc] literal mem operand */
        __emit  0x3D
        __emit  0x0C
        __emit  0x00
        __emit  0x00
        __emit  0x00
        jne     L_a3a6
        mov     dword ptr [eax + 0xc], edi
        jmp     L_a3a6
L_a383:
        push    ebx
        mov     ecx, esi
        call    FUN_0069AC00
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebp, eax
        mov     dword ptr [ebp + 8], edi
        jne     L_a39e
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 0xc], edi
        jmp     L_a3a6
L_a39e:
        cmp     ebp, dword ptr [eax + 8]
        jne     L_a3a6
        mov     dword ptr [eax + 8], edi
L_a3a6:
        mov     dword ptr [edi + 4], ebp
L_a3a9:
        add     eax, 4
        xor     ecx, ecx
        push    eax
        push    edi
        mov     dword ptr [edi + 8], ecx
        mov     dword ptr [edi + 0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [esi + 4]
        add     esp, 8
        inc     eax
        mov     dword ptr [esi + 4], eax
        mov     eax, dword ptr [esp + 0x48]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_a3d5:
        mov     ebp, edi
        mov     edi, dword ptr [edi + 4]
        test    edi, edi
        mov     al, 1
        je      L_a3ff
L_a3e0:
        lea     eax, [edi + 0x10]
        push    eax
        push    ebx
        mov     ebp, edi
        call    FUN_0069A760
        add     esp, 8
        test    al, al
        je      L_a3f8
        mov     edi, dword ptr [edi + 8]
        jmp     L_a3fb
L_a3f8:
        mov     edi, dword ptr [edi + 0xc]
L_a3fb:
        test    edi, edi
        jne     L_a3e0
L_a3ff:
        test    al, al
        mov     dword ptr [esp + 0x14], ebp
        je      L_a448
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    FUN_0069ACA0
        mov     edx, dword ptr [esp + 0x14]
        cmp     edx, dword ptr [eax]
        jne     L_a43b
        lea     eax, [esp + 0x50]
        push    eax
        push    ebx
        push    ebp
        push    edi
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x64], 1
        call    FUN_0069A860
        push    eax
        lea     ecx, [esp + 0x34]
        jmp     L_a490
L_a43b:
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_004114B0
        add     esp, 4
L_a448:
        mov     eax, dword ptr [esp + 0x14]
        add     eax, 0x10
        push    ebx
        push    eax
        call    FUN_0069A760
        add     esp, 8
        test    al, al
        je      L_a47d
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    ebx
        push    ebp
        push    edi
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x60], 1
        call    FUN_0069A860
        push    eax
        lea     ecx, [esp + 0x3c]
        jmp     L_a490
L_a47d:
        lea     eax, [esp + 0x13]
        lea     ecx, [esp + 0x14]
        push    eax
        push    ecx
        mov     byte ptr [esp + 0x1b], 0
        lea     ecx, [esp + 0x44]
L_a490:
        call    FUN_0069ACB0
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0069ACD0
        mov     eax, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_a4b3:
        cmp     ebp, edi
        jne     L_a542
        mov     ebx, dword ptr [edi + 0xc]
        mov     ebp, dword ptr [esp + 0x50]
        lea     eax, [ebx + 0x10]
        push    ebp
        push    eax
        call    FUN_0069A760
        add     esp, 8
        test    al, al
        je      L_a538
        cmp     ebx, edi
        je      L_a507
        lea     ecx, [ebx + 0x10]
        push    ecx
        push    ebp
        call    FUN_0069A760
        add     esp, 8
        test    al, al
        jne     L_a507
        push    ebp
        mov     ecx, esi
        call    FUN_0069AC00
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebx, dword ptr [eax + 0xc]
        mov     dword ptr [ebx + 0xc], edi
        jne     L_a530
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [edi + 4], ebx
        jmp     L_a3a9
L_a507:
        push    ebp
        mov     ecx, esi
        call    FUN_0069AC00
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebx, eax
        mov     dword ptr [ebx + 8], edi
        jne     L_a528
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [edi + 4], ebx
        jmp     L_a3a9
L_a528:
        cmp     ebx, dword ptr [eax + 8]
        jne     L_a530
        mov     dword ptr [eax + 8], edi
L_a530:
        mov     dword ptr [edi + 4], ebx
        jmp     L_a3a9
L_a538:
        push    ebp
        lea     edx, [esp + 0x40]
        jmp     L_a5cc
L_a542:
        lea     edx, [esp + 0x4c]
        push    edx
        mov     dword ptr [esp + 0x50], ebp
        call    FUN_004114B0
        mov     eax, dword ptr [esp + 0x50]
        mov     edi, dword ptr [esp + 0x54]
        add     eax, 0x10
        push    edi
        push    eax
        call    FUN_0069A760
        add     esp, 0xc
        test    al, al
        je      L_a5c7
        lea     ecx, [ebp + 0x10]
        push    ecx
        push    edi
        call    FUN_0069A760
        add     esp, 8
        test    al, al
        je      L_a5c7
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        push    edi
        jne     L_a5a7
        push    eax
        push    0
        lea     edx, [esp + 0x5c]
        push    edx
        mov     ecx, esi
        call    FUN_0069A860
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_a5a7:
        push    ebp
        push    ebp
        lea     edx, [esp + 0x5c]
        push    edx
        mov     ecx, esi
        call    FUN_0069A860
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_a5c7:
        push    edi
        lea     edx, [esp + 0x40]
L_a5cc:
        push    edx
        mov     ecx, esi
        call    FUN_0069A9D0
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    }
}
