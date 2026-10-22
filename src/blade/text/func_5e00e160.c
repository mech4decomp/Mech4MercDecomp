/*
 * FUN_5e00e160 (45 B) — __fastcall (ECX = this).
 * If this->m7c != 0 and this->m80 != 0, call vtable[0x80/4]
 * (this->m7c, 0); set this->m80 = 0. Return 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_5e00e160(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x7c]
        test    eax, eax
        jz      L189
        mov     ecx, dword ptr [esi + 0x80]
        test    ecx, ecx
        jz      L189
        mov     ecx, dword ptr [eax]
        push    0
        push    eax
        call    dword ptr [ecx + 0x80]
        mov     dword ptr [esi + 0x80], 0
    L189:
        xor     eax, eax
        pop     esi
        ret
    }
}
