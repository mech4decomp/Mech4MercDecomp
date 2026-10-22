/*
 * FUN_00624900 (88 B) — __thiscall. Clears a linked list rooted at
 * this+0x4: for each node, calls FUN_00624b00, FUN_006247a0, and
 * frees the node via FUN_004084e0. Reinitializes the list head.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00624b00(void *a);
extern void __fastcall FUN_006247a0(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __fastcall FUN_00624900(void *param_1)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4]
        test    eax, eax
        jz      L_exit
        mov     eax, dword ptr [ebx]
        push    esi
        mov     esi, dword ptr [eax + 0x4]
        test    esi, esi
        jz      L_3f
        push    edi
L_15:
        mov     ecx, dword ptr [esi + 0xC]
        push    ecx
        mov     ecx, ebx
        call    FUN_00624b00
        mov     edi, dword ptr [esi + 0x8]
        lea     ecx, [esi + 0x14]
        call    FUN_006247a0
        test    esi, esi
        jz      L_38
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_38:
        test    edi, edi
        mov     esi, edi
        jnz     L_15
        pop     edi
L_3f:
        mov     eax, dword ptr [ebx]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0xC], eax
        mov     dword ptr [ebx + 0x4], 0x0
        pop     esi
L_exit:
        pop     ebx
        ret
    }
}
