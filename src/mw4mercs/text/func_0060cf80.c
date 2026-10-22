/*
 * FUN_0060cf80 (65 B) — __thiscall recursive linked-list walk + flush.
 *
 * Walks a singly-linked list at this+0xbc, recursively calling
 * FUN_0060cf80(this, node) for each node until the list ends or a node's
 * first field is null. Then, if this+0xd0 is non-null, calls
 * FUN_004dab80(this, 1, 0).
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0060cf80(void);
extern void FUN_004dab80(void);

__declspec(naked) void __fastcall FUN_0060cf80(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [ebx + 0xbc]
        push    edi
        mov     edi, ecx
    L_loop:
        test    esi, esi
        jz      L_done
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x4]
        jz      L_done
        push    eax
        mov     ecx, edi
        call    FUN_0060cf80
        jmp     L_loop
    L_done:
        mov     eax, dword ptr [ebx + 0xd0]
        test    eax, eax
        jz      L_ret
        push    0x0
        push    0x1
        mov     ecx, ebx
        call    FUN_004dab80
    L_ret:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
