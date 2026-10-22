/*
 * FUN_00691A30 (131 B) — Doubly-linked-list node removal by key.
 *
 * __thiscall (ECX = this). Searches the list at this+4 for a node whose
 * [2]/[3] dwords match param_1[0]/[1]; unlinks it, decrements this+8,
 * frees the node via FUN_004084e0, returns 1 (AL) on success else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);

__declspec(naked) char __stdcall FUN_00691a30(void)
{
    __asm {
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        mov     eax, edi
        test    eax, eax
        jz      L_691a5b
        mov     edx, dword ptr [esp + 0x10]
L_691a42:
        mov     esi, dword ptr [edx]
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_691a4f
        mov     ebp, dword ptr [edx + 0x4]
        cmp     ebp, dword ptr [eax + 0xc]
        jz      L_691a57
L_691a4f:
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L_691a5b
        __emit 0xEB   /* __emit: backward jmp to L_691a42; MSVC6 miscomputes rel8 (EB E9) because a call-reloc sits between branch and target (ref EB EB) */
        __emit 0xEB
L_691a57:
        test    eax, eax
        jnz     L_691a63
L_691a5b:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebp
        ret     4
L_691a63:
        mov     ebp, dword ptr [ecx + 0x8]
        mov     edx, dword ptr [eax]
        dec     ebp
        test    edx, edx
        mov     dword ptr [ecx + 0x8], ebp
        jz      L_691a76
        mov     esi, dword ptr [eax + 0x4]
        mov     dword ptr [edx + 0x4], esi
L_691a76:
        mov     esi, dword ptr [eax + 0x4]
        test    esi, esi
        jz      L_691a7f
        mov     dword ptr [esi], edx
L_691a7f:
        cmp     eax, edi
        jnz     L_691a88
        mov     edx, dword ptr [edi]
        mov     dword ptr [ecx + 0x4], edx
L_691a88:
        mov     dword ptr [eax], 0x0
        mov     dword ptr [eax + 0x4], 0x0
        push    eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax], 0x0
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebp
        ret     4
    }
}
