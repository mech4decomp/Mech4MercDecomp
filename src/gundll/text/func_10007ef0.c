/*
 * FUN_10007ef0 (178 B) - __stdcall, RET 0x8. Exports a crypto key via
 * CryptExportKey, encodes the blob via FUN_1000c140, returns error code.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10007b90(void);   /* rel32 call */
extern void __cdecl FUN_1000c140(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void *g_10049008;   /* IAT: CryptExportKey */
extern void *g_100490e4;   /* IAT: GetLastError */

__declspec(naked) void __stdcall FUN_10007ef0(void)
{
    __asm {
        sub     esp, 0x408
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x414]
        mov     esi, dword ptr [edi]
        push    esi
        mov     dword ptr [esp + 0xc], 0x0
        call    FUN_10007b90
        mov     esi, dword ptr [esi + 0xc]
        mov     edx, dword ptr [edi + 0x4]
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x0
        push    0x1
        push    esi
        push    edx
        mov     dword ptr [esp + 0x24], 0x400
        call    dword ptr [g_10049008]
        test    eax, eax
        jnz     L_7f59
        call    dword ptr [g_100490e4]
        test    eax, eax
        jge     L_7f45
        mov     esi, eax
        jmp     L_7f88
L_7f45:
        jg      L_7f4b
        mov     esi, eax
        jmp     L_7f88
L_7f4b:
        and     eax, 0xffff
        or      eax, 0x80070000
        mov     esi, eax
        jmp     L_7f88
L_7f59:
        mov     ecx, dword ptr [esp + 0xc]
        lea     eax, [esp + 0x10]
        push    eax
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_1000c140
        mov     esi, eax
        test    esi, esi
        jl      L_7f88
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x418]
        mov     dword ptr [ecx], eax
        mov     dword ptr [esp + 0x8], 0x0
L_7f88:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        call    FUN_10001d60
        add     esp, 0x4
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x408
        ret     0x8
    }
}
