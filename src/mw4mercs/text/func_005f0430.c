/*
 * FUN_005f0430 (115 B) — __thiscall dispatcher. RET 8 (two stack params).
 * Compares param_1 against this->[0x14]; if equal returns it. Otherwise
 * dispatches through FUN_004dd250 and virtual calls on this->[0x18].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_004dd250(int a, int b);

__declspec(naked) int FUN_005f0430(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esp + 0x8]
        cmp     ecx, eax
        jz      L9b
        cmp     eax, 0x5
        jnz     L4
        cmp     ecx, 0x1
        jz      L4
        pop     esi
        ret     8
L4:
        mov     eax, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esi + 0x18]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004dd250
        dec     eax
        jz      L8
        sub     eax, 0x4
        jz      L7
        cmp     dword ptr [esi + 0x10], 0x1
        jnz     L9
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x70]
        mov     eax, dword ptr [esi + 0x14]
        pop     edi
        pop     esi
        ret     8
L7:
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0xb0]
        mov     eax, dword ptr [esi + 0x14]
        pop     edi
        pop     esi
        ret     8
L8:
        cmp     dword ptr [esi + 0x10], 0x1
        jz      L9
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x6c]
L9:
        mov     eax, dword ptr [esi + 0x14]
        pop     edi
L9b:
        pop     esi
        ret     8
    }
}
