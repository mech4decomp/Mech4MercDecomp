/*
 * FUN_5e003630 (83 B) — DirectDraw wrapper method.
 * If obj+0x41e8 is set, forwards (param_2) through its vtable[0x30/4].
 * Otherwise stores param_2 into obj+0x41ec (releasing the old one first)
 * and links it back to this object.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e003630(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x41e8]
        test    eax, eax
        jz      L64e
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x30]
        pop     esi
        ret     0x8
    L64e:
        mov     eax, dword ptr [esi + 0x41ec]
        test    eax, eax
        jz      L668
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x41ec], 0x0
    L668:
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    edi
        mov     dword ptr [esi + 0x41ec], edi
        mov     edx, dword ptr [edi]
        call    dword ptr [edx + 0x4]
        mov     dword ptr [edi + 0x4], esi
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x8
    }
}
