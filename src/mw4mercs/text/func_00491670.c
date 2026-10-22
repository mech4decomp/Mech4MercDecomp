/*
 * FUN_00491670 (92 B) — __thiscall, RET 8 (2 stack params).
 * Bitwise blend operation on two 6-dword structs (full version).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00491670(void)
{
    __asm {
        push    ebx
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     ebx, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [esi + 0xc]
        and     edx, edi
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [ecx + 0x8]
        and     edx, edi
        mov     edi, edx
        not     edi
        and     edi, ebx
        mov     ebx, dword ptr [ecx]
        and     ebx, edx
        or      edi, ebx
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ecx + 0x14]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [esi + 0x14]
        mov     esi, dword ptr [esi + 0x4]
        and     edx, edi
        mov     dword ptr [eax + 0x14], edx
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ecx + 0x4]
        and     edx, edi
        mov     edi, edx
        not     edi
        and     esi, edi
        and     ecx, edx
        or      esi, ecx
        pop     edi
        mov     dword ptr [eax + 0x4], esi
        pop     esi
        mov     dword ptr [eax + 0x10], edx
        pop     ebx
        ret     0x8
    }
}
