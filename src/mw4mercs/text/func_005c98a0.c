/*
 * FUN_005c98a0 (95 B) - __thiscall (this in ECX). Checks a global flag via
 * FUN_00415230, then returns whether [esi+0x14] == 0x25 (SETZ).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00415230(void);

__declspec(naked) void __cdecl FUN_005c98a0(void)
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
        jz      l_98fb
        test    esi, esi
        jz      l_98fb
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
        jnz     l_98fb
        mov     esi, [esi + 0x2f4]
        test    esi, esi
        jz      l_98fb
        mov     ecx, [esi + 0x14]
        xor     eax, eax
        cmp     ecx, 0x25
        setz    al
        pop     esi
        ret
    l_98fb:
        xor     al, al
        pop     esi
        ret
    }


}
