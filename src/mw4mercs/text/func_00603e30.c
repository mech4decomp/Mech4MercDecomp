/*
 * FUN_00603E30 (33 B) — __thiscall linked-list search.
 *
 * Walks a singly-linked list at [this+0x68]; each node holds a pointer at
 * [node+0] and a next pointer at [node+4]. Returns the node whose
 * [node+0]->[+0x14] equals the argument, or 0 if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00603e30(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x68]
        mov     edx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      L_ret0
    L_loop:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     ecx, dword ptr [ecx + 0x4]
        jz      L_ret0
        cmp     dword ptr [eax + 0x14], edx
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (off-by-4) */
        __emit 0x75
        __emit 0xEE
        ret     0x4
    L_ret0:
        xor     eax, eax
        ret     0x4
    }
}
