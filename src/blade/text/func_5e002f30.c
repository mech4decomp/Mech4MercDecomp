/*
 * FUN_5e002f30 (56 B) — __stdcall, RET 8 (2 stack params). Releases the
 * object at +0x34 (vtable slot 2) and stores a new object (AddRef via
 * vtable slot 1).
 *
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e002f30(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        test    edi, edi
        jz      L_f62
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        jz      L_f52
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x34], 0x0
L_f52:
        mov     edx, dword ptr [edi]
        push    edi
        mov     dword ptr [esi + 0x34], edi
        call    dword ptr [edx + 0x4]
        pop     esi
        xor     eax, eax
        pop     edi
        ret     0x8
L_f62:
        xor     eax, eax
        pop     edi
        ret     0x8
    }
}
