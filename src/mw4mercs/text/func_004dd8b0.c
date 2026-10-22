/*
 * FUN_004dd8b0 (46 B) — __thiscall. Walks a linked list at [this+0x10];
 * for each node whose flags [node+0x10] have any of param_2's bits set,
 * calls its virtual method 1 (vtable[1]) with param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004dd8b0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0x8]
        push    esi
        mov     esi, dword ptr [ecx+0x10]
        push    edi
        mov     edi, dword ptr [esp+0x14]
L_loop:
        test    esi, esi
        jz      L_end
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+0x4]
        jz      L_end
        test    dword ptr [ecx+0x10], edi
        jz      L_loop
        mov     eax, dword ptr [ecx]
        push    ebx
        call    dword ptr [eax+0x4]
        jmp     L_loop
L_end:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
