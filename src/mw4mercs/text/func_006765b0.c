/*
 * FUN_006765b0 (53 B) — Walk a singly-linked list (next at +0x2C),
 * clear +0x30 and +0x2C on each node, and free each node via
 * FUN_00416130 (using global allocator at 0x0080DAA4). Clears this+0x4.
 *
 * __fastcall (ECX = this), no stack args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_daa4;              /* 0x0080DAA4 */
extern void __cdecl FUN_00416130(void *node);

__declspec(naked) void __fastcall FUN_006765b0(void *this)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     esi, dword ptr [ebx + 0x4]
        push    edi
        xor     edi, edi
        cmp     esi, edi
        jz      L_done
L_loop:
        mov     eax, esi
        cmp     eax, edi
        lea     ecx, [esi + 0x2C]
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax + 0x30], edi
        mov     dword ptr [ecx], edi
        jz      L_skip_free
        mov     ecx, dword ptr [g_daa4]
        push    eax
        call    FUN_00416130
L_skip_free:
        cmp     esi, edi
        jnz     L_loop
L_done:
        mov     dword ptr [ebx + 0x4], edi
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
