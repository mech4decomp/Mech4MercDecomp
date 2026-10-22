/*
 * FUN_00641010 (52 B) — __thiscall (ECX = this, 2 stack args, RET 0x8).
 *
 * Binary-tree search: walks [node+8]/[node+0xc] comparing [node+0x10]
 * against *param2, tracking the last node where [node+0x10] >= *param2.
 * Stores that node into *param1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00641010(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      L_empty
        mov     edx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [edx]
    L_loop:
        cmp     dword ptr [eax + 0x10], edx
        jl      L_left
        mov     ecx, eax
        mov     eax, dword ptr [eax + 0x8]
        jmp     L_after
    L_left:
        mov     eax, dword ptr [eax + 0xc]
    L_after:
        test    eax, eax
        jnz     L_loop
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     0x8
    L_empty:
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     0x8
    }
}
