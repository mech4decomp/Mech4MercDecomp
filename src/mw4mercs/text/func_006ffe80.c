/*
 * FUN_006FFE80 (33 B) — If param_1+0x08 != 0, calls vtable[0x10] on
 * param_1+0x04 with param_1+0x08 as arg, then zeros param_1+0x08.
 *
 * __stdcall RET 4.
 *
 * Disassembly:
 *   56                push    esi
 *   8B 74 24 08       mov     esi, [esp + 8]
 *   8B 4E 08          mov     ecx, [esi + 8]
 *   85 C9             test    ecx, ecx
 *   74 11             jz      skip
 *   8B 46 04          mov     eax, [esi + 4]
 *   8B 10             mov     edx, [eax]
 *   51                push    ecx
 *   50                push    eax
 *   FF 52 10          call    dword ptr [edx + 0x10]
 *   C7 46 08 00 00 00 00 mov   dword ptr [esi + 8], 0
 *   5E                pop     esi
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006ffe80(int param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 8]
        test    ecx, ecx
        jz      skip
        mov     eax, dword ptr [esi + 4]
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x10]
        mov     dword ptr [esi + 8], 0
skip:
        pop     esi
        ret     4
    }
}
