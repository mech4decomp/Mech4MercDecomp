/*
 * FUN_005b6f10 (56 B) — __thiscall (ECX = this), RET 4.
 *
 * Walks a linked list at this+0x94; for each node, virtual-calls
 * (vtable+0x4) on node[0]+0x78 and returns node[0] if [eax+0x30]==param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005b6f10(void *param_1)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [ecx + 0x94]
        push    edi
top:
        test    esi, esi
        jz      ret0
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      ret0
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 0x4]
        cmp     dword ptr [eax + 0x30], ebx
        jnz     top
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
ret0:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x4
    }
}
