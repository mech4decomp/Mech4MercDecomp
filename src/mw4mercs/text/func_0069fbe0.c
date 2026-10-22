/*
 * FUN_0069fbe0 (80 B) — __thiscall (ECX = this). Frees a linked list of
 * nodes hanging off this->[1], then re-initializes the list head.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00647ac0(void *param);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void __fastcall FUN_0069fbe0(int *param_1)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 4]
        test    eax, eax
        jz      L_end
        mov     eax, dword ptr [ebx]
        push    esi
        mov     esi, dword ptr [eax + 4]
        test    esi, esi
        jz      L_cleanup
        push    edi
    L_loop:
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, ebx
        call    FUN_00647ac0
        test    esi, esi
        mov     edi, dword ptr [esi + 8]
        jz      L_cont
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_cont:
        test    edi, edi
        mov     esi, edi
        jnz     L_loop
        pop     edi
    L_cleanup:
        mov     eax, dword ptr [ebx]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [eax + 4], 0
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [ebx + 4], 0
        pop     esi
    L_end:
        pop     ebx
        ret
    }
}
