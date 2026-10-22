/*
 * FUN_005f5bc0 (63 B) — __fastcall (ECX = this). If a flag bit is clear,
 * sets this->0x160, calls a virtual method, and releases the marker at
 * this->0x508.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005f5bc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jnz     l_5bfd
        mov     edx, dword ptr [esi]
        push    0
        push    3
        mov     dword ptr [esi + 0x160], 0xffffffce
        call    dword ptr [edx + 0x88]
        mov     ecx, dword ptr [esi + 0x508]
        test    ecx, ecx
        jz      l_5bfd
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [esi + 0x508], 0
    l_5bfd:
        pop     esi
        ret
    }
}
