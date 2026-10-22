/*
 * FUN_0041e910 (50 B) — __thiscall stream method: writes a NUL-terminated
 * string via vtable[0x24] (Write), then writes a 2-byte terminator from
 * DAT_0076d1b8. Bit-stream writer family (0x41E900-0x41EE00).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041e910(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi]
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [ebx + 0x24]
        mov     eax, dword ptr [esi]
        push    0x2
        push    0x76d1b8
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
