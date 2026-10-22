/*
 * FUN_5e011870 (282 B) — SetCaps-style: validates output struct size (0x7c),
 * calls inner object's vtable[0x64/4] method, fills the output struct.
 *
 * __stdcall, RET 0x14 (5 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e011870(void)
{
    __asm {
        sub     esp, 0x6c
        push    ebx
        mov     ebx, dword ptr [esp + 0x7c]
        push    ebp
        push    edi
        mov     ecx, 0x1a
        xor     eax, eax
        lea     edi, [esp + 0x10]
        mov     dword ptr [esp + 0xc], 0x6c
        rep stosd
        cmp     dword ptr [ebx], 0x7c
        jz      loc_18a2
        pop     edi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 0x6c
        ret     0x14
loc_18a2:
        mov     eax, dword ptr [esp + 0x7c]
        xor     ebp, ebp
        mov     eax, dword ptr [eax + 0x10]
        cmp     eax, ebp
        jz      loc_197c
        mov     edx, dword ptr [esp + 0x8c]
        push    esi
        push    edx
        mov     edx, dword ptr [esp + 0x90]
        mov     ecx, dword ptr [eax]
        and     dh, 0xf7
        push    edx
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x90]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x64]
        lea     edi, [ebx + 0x48]
        lea     esi, [esp + 0x58]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebx + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx + 0x8], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [ebx + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [ebx + 0x10], edx
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [ebx + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [ebx + 0x18], edx
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [ebx + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [ebx + 0x20], edx
        mov     edx, dword ptr [esp + 0x38]
        mov     dword ptr [ebx + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [ebx + 0x28], edx
        mov     edx, dword ptr [esp + 0x40]
        mov     dword ptr [ebx + 0x2c], ecx
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [ebx + 0x30], edx
        mov     edx, dword ptr [esp + 0x48]
        mov     dword ptr [ebx + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [ebx + 0x38], edx
        mov     edx, dword ptr [esp + 0x50]
        mov     dword ptr [ebx + 0x3c], ecx
        mov     ecx, dword ptr [esp + 0x54]
        mov     dword ptr [ebx + 0x40], edx
        mov     edx, dword ptr [esp + 0x78]
        mov     dword ptr [ebx + 0x44], ecx
        mov     ecx, 0x8
        rep movsd
        pop     esi
        mov     dword ptr [ebx + 0x6c], ebp
        mov     dword ptr [ebx + 0x70], ebp
        mov     dword ptr [ebx + 0x74], ebp
        mov     dword ptr [ebx + 0x78], ebp
        pop     edi
        mov     dword ptr [ebx + 0x68], edx
        pop     ebp
        pop     ebx
        add     esp, 0x6c
        ret     0x14
loc_197c:
        pop     edi
        pop     ebp
        mov     eax, 0x80004005
        pop     ebx
        add     esp, 0x6c
        ret     0x14
    }
}
