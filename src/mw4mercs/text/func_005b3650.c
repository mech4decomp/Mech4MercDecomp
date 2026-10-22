/*
 * FUN_005b3650 (61 B) — __thiscall, RET 8.
 *
 * Reads a sub-object at [ESI+0x364]; if its flags are clear, calls a
 * virtual method (vtable+0x34) and stores the returned float at
 * [ESI+0x3b8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005b3650(void *param1, void *param2)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x364]
        test    ecx, ecx
        jz      L3689
        mov     al, byte ptr [ecx + 0x1a]
        test    al, al
        jnz     L3689
        mov     al, byte ptr [ecx + 0x19]
        test    al, al
        jnz     L367E
        mov     eax, dword ptr [ecx]
        mov     byte ptr [ecx + 0x19], 0x1
        call    dword ptr [eax + 0x34]
        fstp    dword ptr [esi + 0x3b8]
        pop     esi
        ret     8
L367E:
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x34]
        fstp    dword ptr [esi + 0x3b8]
L3689:
        pop     esi
        ret     8
    }
}
