/*
 * FUN_006D4ED0 (132 B) — __thiscall (this in ECX), RET 0xC (3 params).
 * Calls a virtual method (vtable+0x24) several times to read fields into
 * [esi+4..0xc] and [esi+0x118], then loops over [esi+0x11c] calling
 * FUN_006D3E30 per element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006D3E30(void);

__declspec(naked) void FUN_006D4ED0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 6
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 4]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi + 8]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi + 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    4
        lea     ebx, [esi + 0x118]
        push    ebx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jle     L6d4f4d
        mov     esi, dword ptr [esi + 0x11c]
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
    L6d4f38:
        mov     ecx, dword ptr [esi]
        push    ebp
        push    eax
        push    edi
        call    FUN_006D3E30
        add     esi, 4
        dec     ebx
        __emit 0x75  /* jne L6d4f38: MSVC6 miscomputes backward rel offset (off-by-4) */
        __emit 0xEC
        pop     ebp
    L6d4f4d:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
