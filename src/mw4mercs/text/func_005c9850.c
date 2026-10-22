/*
 * FUN_005c9850 (80 B) - __thiscall (this in ECX). Checks a global flag via
 * FUN_00415230 and conditionally calls a virtual method at [esi+0xb4].
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00415230(void);

__declspec(naked) void __cdecl FUN_005c9850(void)
{
    
__asm {
_emit   0xA1            /* __emit: mov eax,[imm32] -> MSVC6 encodes as immediate load (B8) */
        _emit   0xC0
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        push    esi
        mov     esi, [ecx + 0x170]
        mov     ecx, [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_989e
        test    esi, esi
        jz      l_989e
        _emit   0xA1            /* __emit: mov eax,[imm32] -> MSVC6 encodes as immediate load (B8) */
        _emit   0xC0
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        mov     ecx, [esi + 0x4]
        push    eax
        call    FUN_00415230
        _emit   0x8B            /* __emit: mov ecx,[imm32] -> MSVC6 encodes as immediate load (B9) */
        _emit   0x0D
        _emit   0x84
        _emit   0x1F
        _emit   0x7F
        _emit   0x00
        neg     al
        push    ecx
        sbb     eax, eax
        and     eax, esi
        mov     ecx, [eax + 0x4]
        call    FUN_00415230
        cmp     al, 0x1
        jnz     l_989e
        mov     eax, [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xb4]
    l_989e:
        pop     esi
        ret
    }


}
