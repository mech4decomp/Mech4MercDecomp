/*
 * FUN_005c9660 (59 B) - __thiscall (this in ECX). Returns bool in AL based on
 * a flag at [ecx+0x5a0] and a float comparison at [eax+0x54].
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_005c9660(void)
{
    
__asm {
cmp     byte ptr [ecx + 0x5a0], 0x1
        jnz     l_966c
        xor     al, al
        ret
    l_966c:
        mov     eax, [ecx + 0x170]
        mov     ecx, [eax + 0x408]
        test    ecx, ecx
        jz      l_9698
        mov     eax, ecx
        mov     ecx, [eax + 0x5c]
        test    ecx, ecx
        jz      l_9698
        fld     dword ptr [eax + 0x54]
        _emit   0xD8            /* __emit: fcomp dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x1D
        _emit   0xB0
        _emit   0xC5
        _emit   0x76
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x41
        jnz     l_9698
        xor     al, al
        ret
    l_9698:
        mov     al, 0x1
        ret
    }


}
