/*
 * FUN_006a05b0 (52 B) — Recursive tree destructor.
 *
 * __thiscall (ECX = this), RET 4. Recursively frees the left subtree
 * (node+0xC), frees the node via FUN_004084e0, then walks the right
 * subtree (node+0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_006a05b0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        mov     ebx, ecx
        jz      l_done
    l_loop:
        push    edi
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        mov     ecx, ebx
        call    FUN_006a05b0
        test    esi, esi
        mov     edi, dword ptr [esi + 0x8]
        jz      l_skipfree
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skipfree:
        test    edi, edi
        mov     esi, edi
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jnz rel-offset (75 DE) when a call-reloc sits between branch and target; ref needs 75 DF */
        __emit 0xDF
        pop     edi
    l_done:
        pop     esi
        pop     ebx
        ret     4
    }
}
