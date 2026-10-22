/*
 * FUN_0051AE70 (134 B) — __stdcall RET 0xC (3 params). Walks a linked
 * list (g_007f27dc) of objects, calling virtual methods (vtable+4) and
 * accumulating a value from [eax+0x24] for entries matching g_007f25a8
 * via FUN_00415230. Returns the accumulated value or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f27dc;
extern int g_007f25a8;

extern void __cdecl FUN_00415230(void);

__declspec(naked) void FUN_0051AE70(void)
{
    __asm {
        mov     eax, dword ptr [g_007f27dc]
        push    ebx
        push    esi
        xor     esi, esi
        test    eax, eax
        push    edi
        je      L51aee6
        mov     eax, dword ptr [eax + 4]
        test    eax, eax
        je      L51aee6
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        test    eax, eax
        je      L51aee6
        mov     ecx, dword ptr [g_007f27dc]
        mov     eax, dword ptr [ecx + 4]
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov     ebx, dword ptr [eax + 0x78]
        mov     eax, dword ptr [g_007f27dc]
        mov     eax, dword ptr [eax + 4]
        mov     edi, dword ptr [eax + 0x34c]
        add     eax, 0x34c
        test    edi, edi
        je      L51aeee
    L51aeb9:
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 4]
        je      L51aeee
        mov     eax, dword ptr [g_007f25a8]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        __emit 0x74  /* je L51aeb9: MSVC6 miscomputes backward rel offset (off-by-4) */
        __emit 0xE1
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        add     ebx, dword ptr [eax + 0x24]
        __emit 0xEB  /* jmp L51aeb9: MSVC6 miscomputes backward rel offset (off-by-4) */
        __emit 0xD3
    L51aee6:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xc
    L51aeee:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0xc
    }
}
