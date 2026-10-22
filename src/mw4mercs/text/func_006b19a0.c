/*
 * FUN_006B19A0 (135 B) — Stream size accounting: compute size delta, call
 * FUN_0041ea60, then update global counters.
 *
 * __cdecl, RET 4 (one stack param: stream object).
 *
 * Disassembly:
 *   56                      push    esi
 *   8B 74 24 08             mov     esi, [esp + 8]
 *   8B 46 10                mov     eax, [esi + 0x10]
 *   57                      push    edi
 *   8B 7E 14                mov     edi, [esi + 0x14]
 *   2B F8                   sub     edi, eax
 *   8B 46 08                mov     eax, [esi + 0x8]
 *   C1 E7 03                shl     edi, 3
 *   83 F8 EC                cmp     eax, -0x14
 *   74 04                   jz      l_skip1
 *   8D 7C 07 F8             lea     edi, [edi + eax - 8]
 *   skip1:
 *   8D 44 24 0C             lea     eax, [esp + 0xc]
 *   50                      push    eax
 *   8B CE                   mov     ecx, esi
 *   E8 xx xx xx xx          call    FUN_0041ea60
 *   8B 46 14                mov     eax, [esi + 0x14]
 *   8B 4E 10                mov     ecx, [esi + 0x10]
 *   8B 76 08                mov     esi, [esi + 0x8]
 *   2B C1                   sub     eax, ecx
 *   C1 E0 03                shl     eax, 3
 *   83 FE EC                cmp     esi, -0x14
 *   74 04                   jz      l_skip2
 *   8D 44 30 F8             lea     eax, [eax + esi - 8]
 *   skip2:
 *   8B 0D 44 AB 7D 00       mov     ecx, [0x007dab44]
 *   8B 11                   mov     edx, [ecx]
 *   33 15 40 AB 7D 00       xor     edx, [0x007dab40]
 *   8B 4A 14                mov     ecx, [edx + 0x14]
 *   8B 54 24 1C             mov     edx, [esp + 0x1c]
 *   81 F1 31 95 73 85       xor     ecx, 0x85739531
 *   8B 89 14 18 00 00       mov     ecx, [ecx + 0x1814]
 *   8B B4 91 A4 9C 00 00    mov     esi, [ecx + edx*4 + 0x9ca4]
 *   81 C1 9C 9C 00 00       add     ecx, 0x9c9c
 *   2B C7                   sub     eax, edi
 *   03 F0                   add     esi, eax
 *   89 74 91 08             mov     [ecx + edx*4 + 8], esi
 *   8B 91 00 0C 00 00       mov     edx, [ecx + 0xc00]
 *   03 D0                   add     edx, eax
 *   5F                      pop     edi
 *   89 91 00 0C 00 00       mov     [ecx + 0xc00], edx
 *   5E                      pop     esi
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_0041ea60(void *param);

__declspec(naked) void FUN_006b19a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0x10]
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        sub     edi, eax
        mov     eax, dword ptr [esi + 0x8]
        shl     edi, 3
        cmp     eax, -0x14
        jz      l_skip1
        lea     edi, dword ptr [edi + eax - 8]
l_skip1:
        lea     eax, dword ptr [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    FUN_0041ea60
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x10]
        mov     esi, dword ptr [esi + 0x8]
        sub     eax, ecx
        shl     eax, 3
        cmp     esi, -0x14
        jz      l_skip2
        lea     eax, dword ptr [eax + esi - 8]
l_skip2:
; mov ecx, [0x007dab44]
_emit 0x8B
_emit 0x0D
_emit 0x44
_emit 0xAB
_emit 0x7D
_emit 0x00
        mov     edx, dword ptr [ecx]
        ; xor edx, [0x007dab40]
        _emit 0x33
        _emit 0x15
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     ecx, dword ptr [edx + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     esi, dword ptr [ecx + edx*4 + 0x9ca4]
        add     ecx, 0x9c9c
        sub     eax, edi
        add     esi, eax
        mov     dword ptr [ecx + edx*4 + 8], esi
        mov     edx, dword ptr [ecx + 0xc00]
        add     edx, eax
        pop     edi
        mov     dword ptr [ecx + 0xc00], edx
        pop     esi
        ret
    }
}
