/*
 * FUN_1000a130 (129 B) - copies a 0x2c-byte struct field-by-field from
 * src to dst, then calls swprintf (ptr @ 0x10021138) twice to copy two
 * wide-string members (src+0x2c -> dst+0x2c, src+0x130 -> dst+0x234).
 *
 * __stdcall, 2 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021138;   /* swprintf function ptr @ 0x10021138 */

__declspec(naked) void __cdecl FUN_1000a130(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [g_10021138]
        mov     eax, dword ptr [esi]
        mov     dword ptr [edi], eax
        mov     ecx, dword ptr [esi + 0x24]
        mov     dword ptr [edi + 0x24], ecx
        mov     edx, dword ptr [esi + 0x28]
        mov     dword ptr [edi + 0x28], edx
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [edi + 4], eax
        mov     ecx, dword ptr [esi + 8]
        mov     dword ptr [edi + 8], ecx
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [edi + 0xc], edx
        mov     eax, dword ptr [esi + 0x10]
        mov     dword ptr [edi + 0x10], eax
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [edi + 0x14], ecx
        mov     edx, dword ptr [esi + 0x18]
        mov     dword ptr [edi + 0x18], edx
        mov     eax, dword ptr [esi + 0x1c]
        lea     edx, [esi + 0x2c]
        mov     dword ptr [edi + 0x1c], eax
        mov     ecx, dword ptr [esi + 0x20]
        push    edx
        lea     eax, [edi + 0x2c]
        push    0x100260fc
        push    eax
        mov     dword ptr [edi + 0x20], ecx
        call    ebx
        add     esp, 0xc
        add     esi, 0x130
        add     edi, 0x234
        push    esi
        push    0x100260fc
        push    edi
        call    ebx
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
