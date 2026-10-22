/*
 * FUN_00765700 (356 B) - in-.text data block transcription (wave U).
 * Opens a file (CreateFileA via IAT), reads a header, calls FUN_00765C80,
 * copies a 0x18-byte struct, calls FUN_00765E50/FUN_00765BB0.
 * Contains two embedded data runs (D6 D6 3C 00 + 27x EB 00) reproduced
 * verbatim as __emit bytes.
 *
 * Match: target 100%
 */

#pragma warning(disable : 4035 4793)

extern int *g_0076b4f8;
extern int *g_0076b0e8;
extern int *g_0076b1c0;
extern int  g_008bd500;
extern void __cdecl FUN_00765c80(void);
extern void __cdecl FUN_00765e50(void);
extern void __cdecl FUN_00765bb0(void);

__declspec(naked) void FUN_00765700(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x88
        mov     eax, dword ptr [ebp + 8]
        push    ebx
        push    esi
        push    edi
        push    eax
        lea     ecx, [ebp - 0x88]
        push    0x7b7958
        push    ecx
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        lea     edx, [ebp - 0x88]
        push    0
        push    0x80
        push    0x4000003
        push    0
        push    3
        push    0xc0000000
        push    edx
        call    dword ptr [g_0076b0e8]
        mov     esi, eax
        cmp     esi, -1
        mov     dword ptr [ebp - 8], esi
        jne     L76575a
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L76575a:
        mov     edi, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [g_008bd500]
        lea     eax, [ebp + 8]
        push    eax
        push    0x18
        push    edi
        push    0x96
        push    ecx
        push    edx
        call    FUN_00765c80
        add     esp, 0x18
        mov     ebx, eax
        jmp     L765784
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L765784:
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
    L7657ba:
        test    ebx, ebx
        jne     L7657c5
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L7657c5:
        lea     eax, [ebp - 4]
        push    0
        push    eax
        mov     eax, dword ptr [ebp + 8]
        push    eax
        push    ebx
        push    eax
        push    ebx
        push    0xc0002813
        push    esi
        call    dword ptr [g_0076b1c0]
        test    eax, eax
        jne     L7657e9
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L7657e9:
        lea     esi, [ebx + 0x10]
        mov     ecx, 6
        rep movsd
        mov     ecx, dword ptr [g_008bd500]
        push    ebx
        push    ecx
        call    FUN_00765e50
        add     esp, 8
        push    5
        push    4
        call    FUN_00765bb0
        mov     edx, dword ptr [ebp - 8]
        add     esp, 8
        mov     dword ptr [eax], edx
        jmp     L76581a
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L76581a:
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
        __emit 0xEB
        __emit 0x00
    L765850:
        mov     ecx, dword ptr [ebp + 0x14]
        test    ecx, ecx
        je      L76585d
        mov     dword ptr [ecx], 4
    L76585d:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
