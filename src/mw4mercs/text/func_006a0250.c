/*
 * FUN_006a0250 (109 B) — Destructor-ish: walks a linked list of nodes
 * calling FUN_006a05b0/FUN_006a0590 on each, resets the list head,
 * frees the head via FUN_004084e0, and swaps the vtable pointer.
 *
 * __fastcall (ECX = this). EBP is used as `this` (push ebp; mov ebp,ecx).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a05b0(void);
extern void __cdecl FUN_006a0590(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_006a0250(void)
{
    __asm {
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        push    edi
        lea     edi, [ebp + 0x4]
        mov     dword ptr [ebp], 0x799c2c
        jz      L_a2a4
        mov     eax, dword ptr [edi]
        push    esi
        mov     esi, dword ptr [eax + 0x4]
        test    esi, esi
        jz      L_a28d
        push    ebx
L_a270:
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, edi
        call    FUN_006a05b0
        mov     ebx, dword ptr [esi + 0x8]
        push    esi
        mov     ecx, edi
        call    FUN_006a0590
        test    ebx, ebx
        mov     esi, ebx
        jnz     L_a270
        pop     ebx
L_a28d:
        mov     eax, dword ptr [edi]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [edi + 0x4], 0x0
        pop     esi
L_a2a4:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jz      L_a2b3
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_a2b3:
        pop     edi
        mov     dword ptr [ebp], 0x799c54
        pop     ebp
        ret
    }
}
