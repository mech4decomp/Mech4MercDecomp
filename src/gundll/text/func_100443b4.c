/*
 * FUN_100443b4 (45 B) — __cdecl.
 * 96-bit logical right shift by 1 across three dwords.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_100443b4(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     edx, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax + 0x4]
        mov     esi, edx
        mov     edi, ecx
        shl     esi, 0x1f
        shr     ecx, 0x1
        or      ecx, esi
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [eax]
        shl     edi, 0x1f
        shr     ecx, 0x1
        shr     edx, 0x1
        or      ecx, edi
        pop     edi
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], ecx
        pop     esi
        ret
    }
}
