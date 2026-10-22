/*
 * FUN_005d9c70 (50 B) — __thiscall, RET 4. Unlinks a doubly-linked-list
 * node (param) from the list whose head is this->[0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005d9c70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax + 0x20]
        push    esi
        push    edi
        xor     edi, edi
        cmp     edx, edi
        jz      L_9c85
        mov     esi, dword ptr [eax + 0x24]
        mov     dword ptr [edx + 0x24], esi
L_9c85:
        mov     esi, dword ptr [eax + 0x24]
        cmp     esi, edi
        jz      L_9c8f
        mov     dword ptr [esi + 0x20], edx
L_9c8f:
        cmp     eax, dword ptr [ecx + 0x10]
        jnz     L_9c97
        mov     dword ptr [ecx + 0x10], edx
L_9c97:
        mov     dword ptr [eax + 0x24], edi
        mov     dword ptr [eax + 0x20], edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
