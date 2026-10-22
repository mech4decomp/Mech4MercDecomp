/*
 * FUN_100259d0 (187 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001ca30 / FUN_1002af80 / FUN_1001c660, advancing buffer pointers
 * (ebp/ebx) by parsed counts, and stores the final pointer into *out
 * (+0x28).  On failure frees the intermediate buffer via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_100259d0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a7d0
        push    ebp
        push    edi
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L_25a6d
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_25a6d
        mov     eax, dword ptr [edi + 0x24]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edi + 0x1c]
        push    eax
        push    0x10049e5c
        push    ecx
        push    0x10049e50
        push    edx
        push    0x10049bc4
        push    0x10050f68
        lea     eax, [esp + 0x2c]
        push    eax
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x28
        test    esi, esi
        jl      L_25a6d
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        add     edx, ecx
        mov     dword ptr [eax], edx
L_25a6d:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x20]
        je      L_25a7f
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_25a7f:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
