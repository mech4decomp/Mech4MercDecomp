/*
 * FUN_005c95a0 (179 B) - __fastcall (this in ECX). Checks an obfuscated
 * pointer/flag, then compares two virtual-method results; returns bool in AL.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_005fffa0(void);
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void __cdecl FUN_005c95a0(void)
{
    
__asm {
_emit   0xA1            /* __emit: mov eax,[imm32] -> MSVC6 encodes as immediate load (B8) */
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        push    ebx
        push    esi
        mov     esi, [eax]
        mov     ebx, ecx
        _emit   0x33            /* __emit: xor esi,[imm32] -> MSVC6 encodes as immediate (81 F6) */
        _emit   0x35
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     ecx, [esi + 0x20]
        xor     ecx, 0x85739531
        push    edi
        jnz     l_95c3
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret
    l_95c3:
        mov     ecx, [ebx + 0x170]
        mov     edx, [ecx]
        call    dword ptr [edx + 0x60]
        mov     ecx, [esi + 0x20]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_005fffa0
        test    eax, eax
        jz      l_964d
        mov     ecx, [eax + 0x10]
        shr     ecx, 0x13
        and     cl, 0x1
        cmp     cl, 0x1
        jz      l_964d
        lea     edi, [eax + 0x258]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_964d
        mov     ecx, edi
        call    FUN_0041fd80
        mov     edx, [eax + 0x10]
        shr     edx, 0x13
        test    dl, 0x1
        jnz     l_964d
        lea     esi, [ebx + 0x1c8]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_9647
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, edi
        mov     esi, eax
        call    FUN_0041fd80
        mov     edx, [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x60]
        mov     edi, eax
        mov     eax, [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x60]
        cmp     eax, edi
        jnz     l_964d
    l_9647:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret
    l_964d:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret
    }


}
