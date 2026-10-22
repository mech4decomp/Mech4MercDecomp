/*
 * FUN_006F6D80 (42 B) — Free two allocations. Frees *param_1.
 * If param_1[1] == 1, also frees param_1[4].
 *
 * __stdcall RET 4.
 *
 * Disassembly:
 *   56                push    esi
 *   8B 74 24 08       mov     esi, [esp + 8]
 *   8B 06             mov     eax, [esi]
 *   57                push    edi
 *   8B 3D D0 B2 76 00 mov     edi, [0x76B2D0]
 *   50                push    eax
 *   FF D7             call    edi
 *   8B 46 04          mov     eax, [esi + 4]
 *   83 C4 04          add     esp, 4
 *   83 F8 01          cmp     eax, 1
 *   75 09             jnz     skip
 *   8B 4E 10          mov     ecx, [esi + 0x10]
 *   51                push    ecx
 *   FF D7             call    edi
 *   83 C4 04          add     esp, 4
 *   5F                pop     edi
 *   5E                pop     esi
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f6d80(void **param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi]
        push    edi
        _emit 0x8B
        _emit 0x3D
        _emit 0xD0
        _emit 0xB2
        _emit 0x76
        _emit 0x00
        push    eax
        call    edi
        mov     eax, dword ptr [esi + 4]
        add     esp, 4
        cmp     eax, 1
        jnz     skip
        mov     ecx, dword ptr [esi + 0x10]
        push    ecx
        call    edi
        add     esp, 4
skip:
        pop     edi
        pop     esi
        ret     4
    }
}
