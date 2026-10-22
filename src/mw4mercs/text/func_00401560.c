/*
 * FUN_00401560 (74 B) — initializes a structure: sets a default id,
 * copies the "alphabetical" string into a name field, sets a flag.
 * __cdecl, 1 param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_alphabetical[];   /* 0x76b76c "alphabetical" */

__declspec(naked) void __cdecl FUN_00401560(int param_1)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        or      ecx, -1
        push    esi
        push    edi
        mov     dword ptr [edx + 0x280], ecx
        xor     eax, eax
        mov     edi, offset g_alphabetical
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        lea     ebx, [edx + 0x2e8]
        shr     ecx, 0x2
        mov     edi, ebx
        mov     byte ptr [edx + 0x284], 0x0
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        mov     dword ptr [edx + 0x2fc], 0x1
        pop     ebx
        ret
    }
}
