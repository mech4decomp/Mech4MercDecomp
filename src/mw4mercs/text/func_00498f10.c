/*
 * FUN_00498f10 (72 B) - MLR particle/flare object destructor.
 * __thiscall (ECX = this).
 *
 * Releases the vertex buffer (virtual call on [0xbc]), frees the byte
 * mask ([0xb4]) and profile ([0xac]) buffers via FUN_004084e0, and calls
 * the base destructor FUN_00494140.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00494140(void);

__declspec(naked) void FUN_00498f10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xbc]
        test    ecx, ecx
        mov     dword ptr [esi], 0x7701dc
        jz      L_29
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_29:
        mov     eax, dword ptr [esi + 0xb4]
        test    eax, eax
        jz      L_3c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_3c:
        mov     eax, dword ptr [esi + 0xac]
        test    eax, eax
        jz      L_4f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4f:
        mov     ecx, esi
        call    FUN_00494140
        pop     esi
        ret
    }
}
