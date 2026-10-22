/*
 * FUN_005d9e50 (38 B) — __fastcall (ECX = param). Walks a linked list
 * starting at [param+0x10], clearing the [node+0x20] and [node+0x24]
 * fields of each node, then zeroes [param+0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005d9e50(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      L71
        push    esi
    L5B:
        lea     edx, [eax + 0x20]
        mov     esi, eax
        mov     eax, dword ptr [edx]
        cmp     eax, edi
        mov     dword ptr [edx], edi
        mov     dword ptr [esi + 0x24], edi
        jnz     L5B
        pop     esi
        mov     dword ptr [ecx + 0x10], edi
        pop     edi
        ret
    L71:
        mov     dword ptr [ecx + 0x10], edi
        pop     edi
        ret
    }
}
