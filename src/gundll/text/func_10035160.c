/*
 * FUN_10035160 (61 B) — __stdcall, RET 0x4.
 * Calls vtable method at +0x60 on object at [this+0xc], then releases it.
 */

__declspec(naked) void FUN_10035160(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esi + 0x1c], 0x0
        jnz     L10035177
        pop     esi
        ret     0x4
    L10035177:
        mov     ecx, dword ptr [eax]
        push    edi
        push    0x0
        push    eax
        call    dword ptr [ecx + 0x60]
        mov     edi, eax
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L10035196
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0xc], 0x0
    L10035196:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
