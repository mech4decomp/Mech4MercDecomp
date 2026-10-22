/*
 * FUN_00491620 (70 B) — __thiscall, RET 8 (2 stack params).
 * Bitwise blend operation on two 6-dword structs.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00491620(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [esi + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + 0xc]
        mov     ebx, dword ptr [ecx]
        and     edx, edi
        mov     edi, edx
        not     edi
        and     edi, ebx
        mov     ebx, dword ptr [esi]
        and     ebx, edx
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [ecx + 0x4]
        or      edi, ebx
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [esi + 0x10]
        mov     esi, dword ptr [esi + 0x4]
        and     edx, edi
        mov     edi, edx
        not     edi
        and     ecx, edi
        and     esi, edx
        pop     edi
        or      ecx, esi
        pop     esi
        mov     dword ptr [eax + 0x4], ecx
        pop     ebx
        ret     0x8
    }
}
