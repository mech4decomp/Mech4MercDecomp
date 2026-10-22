/*
 * FUN_006c7f30 (102 B) — Doubly-linked-list node removal helper.
 *
 * Removes a node from a linked list given a container pointer (param_1).
 * Walks the list head at [param_1+0x14], unlinks the node, and frees
 * both the node and the container via FUN_006f4230 (__stdcall, 1 arg).
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4230(void *param);

__declspec(naked) void __stdcall FUN_006c7f30(void *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [edx + 0x18]
        cmp     ecx, esi
        push    edi
        jnz     loc_43
        mov     ecx, dword ptr [edx + 0x1c]
loc_43:
        mov     eax, dword ptr [edx + 0x14]
        test    eax, eax
        jz      loc_7D
        cmp     dword ptr [eax + 0x18], edx
        jnz     loc_66
        push    edx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [ecx + 0x14], eax
        call    FUN_006f4230
        push    esi
        call    FUN_006f4230
        pop     edi
        pop     esi
        ret     4
loc_66:
        push    edx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [ecx + 0x14], eax
        call    FUN_006f4230
        push    esi
        call    FUN_006f4230
        pop     edi
        pop     esi
        ret     4
loc_7D:
        mov     edi, dword ptr [esi + 0x20]
        push    edx
        mov     dword ptr [edi], ecx
        mov     dword ptr [ecx + 0x14], eax
        call    FUN_006f4230
        push    esi
        call    FUN_006f4230
        pop     edi
        pop     esi
        ret     4
    }
}
