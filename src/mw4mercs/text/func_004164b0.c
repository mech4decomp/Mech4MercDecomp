/*
 * FUN_004164b0 (42 B) — database item/pool helper. __thiscall (this in ECX),
 * RET 0x4 (1 param). Looks up an item in the pool array via vtable[0x24/4];
 * returns 0 if absent, else calls vtable[0x1c/4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004164b0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x24]
        mov     ecx, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [ecx + eax*0x4]
        test    ecx, ecx
        jnz     L164CF
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x4
L164CF:
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x1c]
        pop     edi
        pop     esi
        ret     0x4
    }
}
