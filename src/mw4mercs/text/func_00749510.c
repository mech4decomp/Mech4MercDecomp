/*
 * FUN_00749510 (95 B) — Linked-list node removal. Searches the list
 * headed at 0x00857f34 (next pointer at +0x38) for a node whose value
 * equals *param, unlinks it, and calls FUN_00749850 / FUN_004084E0.
 *
 * NOTE: Ghidra only disassembled the first instruction; the full body
 * was recovered from the raw reference bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_857f34;   /* 0x00857f34 list head */

extern void __cdecl FUN_00749850(void *node);
extern void __cdecl FUN_004084E0(void *node);

__declspec(naked) void FUN_00749510(void)
{
    __asm {
        mov     edx, dword ptr [g_857f34]
        mov     eax, edx
        test    eax, eax
        push    esi
        push    edi
        mov     ecx, edx
        jz      L56A
        mov     edi, dword ptr [esp + 0xC]
        mov     esi, dword ptr [edi]
L526:
        cmp     esi, eax
        jz      L538
        mov     ecx, eax
        mov     eax, dword ptr [eax + 0x38]
        test    eax, eax
        jnz     L526
        pop     edi
        pop     esi
        ret     4
L538:
        cmp     esi, edx
        jnz     L54A
        test    esi, esi
        mov     eax, dword ptr [edx + 0x38]
        mov     dword ptr [g_857f34], eax
        jz      L564
        jmp     L554
L54A:
        test    esi, esi
        mov     edx, dword ptr [eax + 0x38]
        mov     dword ptr [ecx + 0x38], edx
        jz      L564
L554:
        mov     ecx, esi
        call    FUN_00749850
        push    esi
        call    FUN_004084E0
        add     esp, 4
L564:
        mov     dword ptr [edi], 0
L56A:
        pop     edi
        pop     esi
        ret     4
    }
}
