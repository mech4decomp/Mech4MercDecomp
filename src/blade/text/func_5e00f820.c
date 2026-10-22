/*
 * FUN_5e00f820 (69 B) — forwards to inner object's vtable[0x30/4] method,
 * or zero-fills a 31-dword buffer and calls the +0x1c object's method.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f820(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [edx + 0x24]
        test    eax, eax
        jz      L_839
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x30]
        ret     0x8
L_839:
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, 0x1f
        xor     eax, eax
        mov     edi, esi
        rep stosd
        mov     eax, dword ptr [edx + 0x1c]
        push    esi
        push    eax
        mov     dword ptr [esi], 0x6c
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x30]
        mov     dword ptr [esi], 0x7c
        pop     edi
        pop     esi
        ret     0x8
    }
}
