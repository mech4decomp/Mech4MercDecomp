/*
 * FUN_5e032081 (230 B) - locale string lookup. Binary-searches a table of
 * locale entries (stride 0x2c) for a matching codepage, then selects a
 * string field by LCTYPE and copies it into the output buffer. Falls back
 * to GetLocaleInfoA when no table entry matches.
 *
 * __stdcall, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e0350ec;   /* IAT: GetLocaleInfoA */
extern int g_5e039850;   /* locale table (stride 0x2c) */
extern int g_5e039854;
extern int g_5e03985c;
extern int g_5e039860;
extern int g_5e039864;
extern int g_5e039868;
extern int g_5e03986c;
extern int g_5e039874;
extern void __cdecl FUN_5e02f100(void *, void *, int);

__declspec(naked) void FUN_5e032081(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        push    0x1a
        xor     esi, esi
        pop     edi
    L208c:
        lea     eax, [edi+esi]
        mov     ebx, dword ptr [ebp+0x14]
        cdq
        sub     eax, edx
        sar     eax, 1
        mov     ecx, eax
        imul    ecx, ecx, 0x2c
        mov     ecx, dword ptr [ecx+g_5e039850]
        cmp     dword ptr [ebp+0x8], ecx
        jz      L20cf
        cmp     dword ptr [ebp+0x8], ecx
        jnc     L20b1
        lea     edi, [eax-1]
        jmp     L20b4
    L20b1:
        lea     esi, [eax+1]
    L20b4:
        cmp     esi, edi
        jle     L208c
    L20b8:
        push    ebx
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x8]
        call    dword ptr [g_5e0350ec]
    L20c8:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x10
    L20cf:
        mov     ecx, dword ptr [ebp+0xc]
        dec     ecx
        jz      L2130
        dec     ecx
        dec     ecx
        jz      L2126
        sub     ecx, 0x4
        jz      L211c
        sub     ecx, 0x4
        jz      L2112
        sub     ecx, 0xff6
        jz      L2107
        dec     ecx
        jz      L20fc
        dec     ecx
        dec     ecx
        jnz     L20b8
        imul    eax, eax, 0x2c
        __emit 0x05          /* add eax,imm32 (0x5e039874): MSVC emits 03 05 mem form for add eax,sym */
        __emit 0x74
        __emit 0x98
        __emit 0x03
        __emit 0x5E
        jmp     L2138
    L20fc:
        imul    eax, eax, 0x2c
        mov     eax, dword ptr [eax+g_5e039864]
        jmp     L2138
    L2107:
        imul    eax, eax, 0x2c
        mov     eax, dword ptr [eax+g_5e03985c]
        jmp     L2138
    L2112:
        imul    eax, eax, 0x2c
        __emit 0x05          /* add eax,imm32 (0x5e03986c): MSVC emits 03 05 mem form for add eax,sym */
        __emit 0x6c
        __emit 0x98
        __emit 0x03
        __emit 0x5E
        jmp     L2138
    L211c:
        imul    eax, eax, 0x2c
        __emit 0x05          /* add eax,imm32 (0x5e039868): MSVC emits 03 05 mem form for add eax,sym */
        __emit 0x68
        __emit 0x98
        __emit 0x03
        __emit 0x5E
        jmp     L2138
    L2126:
        imul    eax, eax, 0x2c
        __emit 0x05          /* add eax,imm32 (0x5e039860): MSVC emits 03 05 mem form for add eax,sym */
        __emit 0x60
        __emit 0x98
        __emit 0x03
        __emit 0x5E
        jmp     L2138
    L2130:
        imul    eax, eax, 0x2c
        __emit 0x05          /* add eax,imm32 (0x5e039854): MSVC emits 03 05 mem form for add eax,sym */
        __emit 0x54
        __emit 0x98
        __emit 0x03
        __emit 0x5E
    L2138:
        test    eax, eax
        jz      L20b8
        cmp     ebx, 0x1
        jl      L20b8
        mov     esi, dword ptr [ebp+0x10]
        lea     ecx, [ebx-1]
        push    ecx
        push    eax
        push    esi
        call    FUN_5e02f100
        add     esp, 0xc
        and     byte ptr [esi+ebx-1], 0
        push    0x1
        pop     eax
        jmp     L20c8
    }
}
