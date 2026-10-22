/*
 * FUN_00619850 (103 B) — __fastcall list teardown.
 *
 * Iterates a linked list calling cleanup on each node, resets the list
 * head, and frees the backing buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00599130(int a);
extern void __cdecl FUN_0061a0e0(int a);
extern void __cdecl FUN_00619d30(void *ptr, int a);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00619850(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4]
        test    eax, eax
        jz      L_a6
        mov     eax, dword ptr [ebx]
        push    esi
        mov     esi, dword ptr [eax + 0x4]
        test    esi, esi
        jz      L_8f
        push    edi
    L_65:
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, ebx
        call    FUN_00599130
        mov     edi, dword ptr [esi + 0x8]
        push    0x0
        lea     ecx, [esi + 0x10]
        call    FUN_0061a0e0
        push    0x1
        push    esi
        call    FUN_00619d30
        add     esp, 0x8
        test    edi, edi
        mov     esi, edi
        jnz     L_65
        pop     edi
    L_8f:
        mov     eax, dword ptr [ebx]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [ebx + 0x4], 0x0
        pop     esi
    L_a6:
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jz      L_b5
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
    L_b5:
        pop     ebx
        ret
    }
}
