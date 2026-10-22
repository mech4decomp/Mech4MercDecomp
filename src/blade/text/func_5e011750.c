/*
 * FUN_5e011750 (263 B) — fills an output DDSCAPS2-style struct from the inner
 * object's vtable[0x58/4] GetCaps call, then patches flags.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e011750(void)
{
    __asm {
        sub     esp, 0x6c
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x78]
        xor     ebx, ebx
        mov     edx, dword ptr [ebp + 0x10]
        cmp     edx, ebx
        jz      loc_184a
        push    esi
        push    edi
        mov     ecx, 0x1a
        xor     eax, eax
        lea     edi, [esp + 0x14]
        mov     dword ptr [esp + 0x10], 0x6c
        rep stosd
        mov     eax, dword ptr [edx]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        call    dword ptr [eax + 0x58]
        lea     esi, [esp + 0x58]
        mov     edx, dword ptr [esp + 0x84]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [edx + 0x8], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [edx + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [edx + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [edx + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [edx + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [edx + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [edx + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [edx + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [edx + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [edx + 0x2c], ecx
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [edx + 0x30], ecx
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [edx + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x48]
        mov     dword ptr [edx + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [edx + 0x3c], ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [edx + 0x40], ecx
        mov     ecx, dword ptr [esp + 0x54]
        mov     dword ptr [edx + 0x44], ecx
        lea     edi, [edx + 0x48]
        mov     ecx, 0x8
        rep movsd
        mov     esi, dword ptr [edx]
        mov     ecx, dword ptr [esp + 0x78]
        pop     edi
        cmp     esi, 0x7c
        mov     dword ptr [edx + 0x68], ecx
        pop     esi
        jc      loc_1830
        mov     dword ptr [edx + 0x6c], ebx
        mov     dword ptr [edx + 0x70], ebx
        mov     dword ptr [edx + 0x74], ebx
        mov     dword ptr [edx + 0x78], ebx
loc_1830:
        test    byte ptr [ebp + 0x20], 0x1
        jz      loc_184f
        and     ecx, 0xffffffbf
        pop     ebp
        or      ecx, 0x20000
        pop     ebx
        mov     dword ptr [edx + 0x68], ecx
        add     esp, 0x6c
        ret     0x8
loc_184a:
        mov     eax, 0x80004005
loc_184f:
        pop     ebp
        pop     ebx
        add     esp, 0x6c
        ret     0x8
    }
}
