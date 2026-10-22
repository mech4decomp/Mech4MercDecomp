/*
 * FUN_006E3AEC (161 B true extent; 202 B slice incl. next fn) — in-.text
 * data block function (block 0x6E3AEC). String/char-table scan loop using
 * two IAT callbacks (0x76b0d0, 0x76b28c) and a function pointer (0x76b13c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e2970(void);

extern void (__cdecl *g_0076b13c)(void);   /* fn ptr @ 0x76b13c */
extern void (__cdecl *g_0076b0d0)(void);   /* IAT @ 0x76b0d0 */
extern void (__cdecl *g_0076b28c)(void);   /* IAT @ 0x76b28c */

__declspec(naked) void FUN_006E3AEC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_006e2970
        mov     ebp, dword ptr [esi]
        mov     edi, dword ptr [g_0076b13c]
        mov     esi, ebp
        xor     ebx, ebx
L3B08:
        mov     bl, byte ptr [esi]
        push    ebx
        call    dword ptr [g_0076b0d0]
        test    eax, eax
        je      L3B45
        lea     ecx, [esp + 0x14]
        push    ecx
        xor     eax, eax
        mov     ax, word ptr [esi]
        push    2
        lea     edx, [esp + 0x20]
        push    edx
        push    1
        push    0x800
        mov     dword ptr [esp + 0x2c], eax
        call    edi
        mov     al, byte ptr [esp + 0x14]
        shr     al, 3
        test    al, 1
        je      L3B6C
        add     esi, 2
        __emit 0xEB   /* __emit: backward jmp L3B08 rel-offset miscomputed by MSVC6 (off-by-2, call-reloc between branch and target) */
        __emit 0xC3
L3B45:
        lea     ecx, [esp + 0x16]
        push    ecx
        push    1
        lea     edx, [esp + 0x1b]
        push    edx
        push    1
        push    0x800
        mov     byte ptr [esp + 0x27], bl
        call    edi
        mov     al, byte ptr [esp + 0x16]
        shr     al, 3
        test    al, 1
        je      L3B6C
        inc     esi
        __emit 0xEB   /* __emit: backward jmp L3B08 rel-offset miscomputed by MSVC6 (off-by-2) */
        __emit 0x9C
L3B6C:
        mov     edi, dword ptr [ebp - 8]
        sub     edi, esi
        add     edi, ebp
        lea     ecx, [edi + 1]
        push    ecx
        push    esi
        push    ebp
        call    dword ptr [g_0076b28c]
        add     esp, 0xc
        mov     dword ptr [ebp - 8], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }
}
