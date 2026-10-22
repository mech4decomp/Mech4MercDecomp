/*
 * FUN_0069FB30 (93 B) — Linked-list teardown.
 *
 * __fastcall (ECX = this), RET 0. Walks a list at this->+4 calling
 * FUN_00647AC0/FUN_00647AA0 on each node, resets the list head, and
 * frees the head via FUN_004084E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00647ac0(void);
extern void __cdecl FUN_00647aa0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_0069fb30(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 4]
        test    eax, eax
        jz      l_7c
        mov     eax, dword ptr [ebx]
        push    esi
        mov     esi, dword ptr [eax + 4]
        test    esi, esi
        jz      l_65
    l_45:
        push    edi
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, ebx
        call    FUN_00647ac0
        mov     edi, dword ptr [esi + 8]
        push    1
        push    esi
        call    FUN_00647aa0
        add     esp, 8
        test    edi, edi
        mov     esi, edi
        /* __emit: backward JNZ rel-offset miscomputed by MSVC6 (E0 vs ref E1)
           because two call-relocs sit between branch and target */
        __emit 0x75
        __emit 0xE1
        pop     edi
    l_65:
        mov     eax, dword ptr [ebx]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [eax + 4], 0
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [ebx + 4], 0
        pop     esi
    l_7c:
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jz      l_8b
        push    ebx
        call    FUN_004084e0
        add     esp, 4
    l_8b:
        pop     ebx
        ret
    }
}
