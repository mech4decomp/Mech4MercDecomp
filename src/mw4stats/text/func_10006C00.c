/*
 * MW4Stats.dll - FUN_10006c00 (0x10006C00, 49 B, __fastcall)
 * Free a linked list of allocations rooted at this+0x4. this in ECX.
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10006c00 (49 B) -- __fastcall: free a linked list rooted at this+0x4.
 * Each node's first dword is the next pointer. Frees every node via IAT free,
 * then clears the root.
 */
extern void *g_100210ec; /* IAT: free */

__declspec(naked) void FUN_10006c00(void)
{
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx+0x4]
        test esi, esi
        jz L_c27
        push edi
        mov edi, dword ptr [g_100210ec]
    L_c12:
        mov eax, esi
        mov esi, dword ptr [esi]
        push eax
        call edi
        add esp, 0x4
        test esi, esi
        jnz L_c12
        mov dword ptr [ebx+0x4], esi
        pop edi
        pop esi
        pop ebx
        ret
    L_c27:
        mov dword ptr [ebx+0x4], 0x0
        pop esi
        pop ebx
        ret
    }
}
