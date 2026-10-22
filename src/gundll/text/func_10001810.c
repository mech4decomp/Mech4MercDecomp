/*
 * FUN_10001810 (348 B) - __stdcall, RET 0xC.  COM interface dispatcher:
 * matches arg2 (a GUID) against a table of GUIDs (0x100492a0, 0x1005012c,
 * 0x1005011c, 0x1005010c, 0x100500fc, 0x100500ec, 0x100500dc, 0x100500cc,
 * 0x100500bc).  On match, selects a sub-object pointer (arg1 + offset, or
 * arg1 itself for the first two GUIDs), AddRefs it via vtable[1], stores it
 * into *arg3, and returns S_OK.  Returns E_INVALIDARG (0x80070057) if arg3
 * is null, E_NOINTERFACE (0x80004002) on no match.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10001810(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        test    ebx, ebx
        push    esi
        push    edi
        jne     L_1826
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        ret     0xc
    L_1826:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, 4
        mov     edi, 0x100492a0
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jne     L_1847
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, eax
        jmp     L_194d
    L_1847:
        mov     ecx, 4
        mov     edi, 0x1005012c
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jne     L_1864
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, eax
        jmp     L_194d
    L_1864:
        mov     ecx, 4
        mov     edi, 0x1005011c
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jne     L_188a
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_1951
        lea     esi, [eax + 4]
        jmp     L_194d
    L_188a:
        mov     ecx, 4
        mov     edi, 0x1005010c
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jne     L_18b0
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_1951
        lea     esi, [eax + 8]
        jmp     L_194d
    L_18b0:
        mov     ecx, 4
        mov     edi, 0x100500fc
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jne     L_18d3
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_1951
        lea     esi, [eax + 0xc]
        jmp     L_194d
    L_18d3:
        mov     ecx, 4
        mov     edi, 0x100500ec
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jne     L_18f2
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_1951
        lea     esi, [eax + 0x10]
        jmp     L_194d
    L_18f2:
        mov     ecx, 4
        mov     edi, 0x100500dc
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jne     L_1911
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_1951
        lea     esi, [eax + 0x14]
        jmp     L_194d
    L_1911:
        mov     ecx, 4
        mov     edi, 0x100500cc
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jne     L_1930
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_1951
        lea     esi, [eax + 0x18]
        jmp     L_194d
    L_1930:
        mov     esi, eax
        mov     ecx, 4
        mov     edi, 0x100500bc
        xor     eax, eax
        repe    cmpsd
        jne     L_1951
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_1951
        lea     esi, [eax + 0x1c]
    L_194d:
        test    esi, esi
        jne     L_195c
    L_1951:
        pop     edi
        pop     esi
        mov     eax, 0x80004002
        pop     ebx
        ret     0xc
    L_195c:
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 4]
        pop     edi
        mov     dword ptr [ebx], esi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0xc
    }
}
