/*
 * FUN_5e00f6b0 (197 B) — forwards to inner object's vtable[0x20/4] method,
 * with a fallback path that builds a local 27-dword buffer.
 *
 * __stdcall, RET 0x14 (5 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f6b0(void)
{
    __asm {
        sub     esp, 0x74
        push    ebx
        mov     ebx, dword ptr [esp + 0x7c]
        push    esi
        mov     eax, dword ptr [ebx + 0x24]
        test    eax, eax
        jz      L_ee
        mov     edx, dword ptr [esp + 0x90]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x90]
        push    edx
        mov     edx, dword ptr [esp + 0x90]
        push    edx
        mov     edx, dword ptr [esp + 0x90]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
        pop     esi
        pop     ebx
        add     esp, 0x74
        ret     0x14
L_ee:
        mov     eax, dword ptr [esp + 0x90]
        mov     ecx, dword ptr [esp + 0x8c]
        mov     dword ptr [esp + 0x8], eax
        mov     al, byte ptr [esp + 0x84]
        xor     edx, edx
        mov     dword ptr [esp + 0xc], ecx
        test    al, 0x1
        jz      L_716
        mov     edx, 0x1
L_716:
        mov     esi, dword ptr [esp + 0x88]
        test    esi, esi
        jz      L_757
        push    edi
        mov     eax, dword ptr [ebx + 0x1c]
        mov     ecx, 0x1b
        lea     edi, [esp + 0x14]
        rep movsd
        lea     esi, [esp + 0xc]
        push    0x5e00f780
        push    esi
        lea     esi, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], 0x6c
        mov     ecx, dword ptr [eax]
        push    esi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x74
        ret     0x14
L_757:
        mov     eax, dword ptr [ebx + 0x1c]
        lea     esi, [esp + 0x8]
        push    0x5e00f780
        push    esi
        mov     ecx, dword ptr [eax]
        push    0x0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
        pop     esi
        pop     ebx
        add     esp, 0x74
        ret     0x14
    }
}
