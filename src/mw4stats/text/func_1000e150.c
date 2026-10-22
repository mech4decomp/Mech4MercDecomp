/*
 * FUN_1000e150 (159 B) - __stdcall, 3 params. If object already has a file
 * (+0x44 non-null) returns 0x80040210. Validates param_3 struct via
 * IsBadReadPtr (IAT @ 0x10021060), checks type (1/2/4) and that param_3[3] is
 * 0 or -1, then stores the file handle (+0x44), copies the 16-byte struct into
 * +0x48, and ORs the type into +0x4c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021060;   /* IsBadReadPtr IAT @ 0x10021060 */

__declspec(naked) unsigned int __cdecl FUN_1000e150(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     eax, dword ptr [ebx + 0x44]
        test    eax, eax
        jz      Le169
        pop     edi
        pop     esi
        mov     eax, 0x80040210
        pop     ebx
        ret     0xc
Le169:
        mov     esi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jnz     Le17b
        mov     edi, 0x2
        jmp     Le180
Le17b:
        and     eax, 0x7
        mov     edi, eax
Le180:
        push    0x10
        push    esi
        call    dword ptr [g_10021060]
        test    eax, eax
        jnz     Le1e4
        cmp     dword ptr [esi], 0x10
        jnz     Le1e4
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        jz      Le1e4
        cmp     edi, 0x1
        jz      Le1a9
        cmp     edi, 0x2
        jz      Le1a9
        cmp     edi, 0x4
        jnz     Le1e4
Le1a9:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      Le1b5
        cmp     eax, -0x1
        jz      Le1e4
Le1b5:
        mov     dword ptr [ebx + 0x44], ecx
        mov     ecx, dword ptr [esi]
        lea     eax, [ebx + 0x48]
        mov     dword ptr [ebx + 0x48], ecx
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [eax + 0x8], ecx
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [eax + 0xc], edx
        mov     eax, dword ptr [ebx + 0x4c]
        and     al, 0xf8
        or      eax, edi
        pop     edi
        mov     dword ptr [ebx + 0x4c], eax
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0xc
Le1e4:
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        ret     0xc
    }
}
