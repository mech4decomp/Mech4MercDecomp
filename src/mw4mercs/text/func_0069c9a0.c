/*
 * FUN_0069c9a0 (75 B) — __fastcall (ECX = this) destructor.
 *
 * Sets vtable 0x7999c8, calls FUN_0069c9f0(), walks a linked list at
 * [this+0x50] freeing each node via FUN_004084e0, resets the list head,
 * frees the head node, then calls FUN_00561730().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0069c9f0(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00561730(void);

__declspec(naked) void FUN_0069c9a0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        mov     dword ptr [ebx], 0x7999c8
        call    FUN_0069c9f0
        mov     edi, dword ptr [ebx + 0x50]
        mov     esi, dword ptr [edi]
        cmp     esi, edi
        jz      L_ce
    L_b9:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi]
        jz      L_ca
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_ca:
        cmp     esi, edi
        jnz     L_b9
    L_ce:
        test    edi, edi
        mov     dword ptr [edi], edi
        mov     dword ptr [edi + 0x4], edi
        jz      L_e0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_e0:
        mov     ecx, ebx
        call    FUN_00561730
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
