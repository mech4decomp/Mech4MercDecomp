/*
 * FUN_006A7F80 (93 B) — Linked-list teardown.
 *
 * __fastcall (ECX = this), RET 0. Walks a list at this->+4 calling
 * FUN_006A81F0/FUN_006A80F0 on each node, resets the list head, and
 * frees the head via FUN_004084E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a81f0(void);
extern void __cdecl FUN_006a80f0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_006a7f80(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 4]
        test    eax, eax
        jz      l_cc
        mov     eax, dword ptr [ebx]
        push    esi
        mov     esi, dword ptr [eax + 4]
        test    esi, esi
        jz      l_b5
    l_95:
        push    edi
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, ebx
        call    FUN_006a81f0
        mov     edi, dword ptr [esi + 8]
        push    1
        push    esi
        call    FUN_006a80f0
        add     esp, 8
        test    edi, edi
        mov     esi, edi
        /* __emit: backward JNZ rel-offset miscomputed by MSVC6 (E0 vs ref E1)
           because two call-relocs sit between branch and target */
        __emit 0x75
        __emit 0xE1
        pop     edi
    l_b5:
        mov     eax, dword ptr [ebx]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [eax + 4], 0
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [ebx + 4], 0
        pop     esi
    l_cc:
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jz      l_db
        push    ebx
        call    FUN_004084e0
        add     esp, 4
    l_db:
        pop     ebx
        ret
    }
}
