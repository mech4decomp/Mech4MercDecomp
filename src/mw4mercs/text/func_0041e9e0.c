/*
 * FUN_0041e9e0 (38 B) — stream method: reads a value via vtable[0x8]
 * (Size/GetSize), converts via vtable[0x4], writes via vtable[0x24].
 * Bit-stream writer family (0x41E900-0x41EE00).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041e9e0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [edi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        push    eax
        mov     ecx, edi
        call    dword ptr [ebx + 0x24]
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
