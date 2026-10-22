/*
 * FUN_00681520 (124 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Walks a linked list *param_1; for each entry calls FUN_00681020 and, if
 * it returns nonzero, FUN_00680ff0 and returns. Otherwise allocates via
 * FUN_004084d0(0x20), constructs via FUN_00680f60, calls FUN_004179b0, then
 * FUN_00680ff0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00681020(int a, int b);
extern void __cdecl FUN_00680ff0(int a, int b);
extern int __cdecl FUN_004084d0(int v);
extern int __cdecl FUN_00680f60(int v);
extern void __cdecl FUN_004179b0(int v);

__declspec(naked) void __stdcall FUN_00681520(int *param1, int param2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [eax]
        mov     ebx, ecx
        test    edi, edi
        jz      l_560
    l_530:
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      l_560
        mov     ecx, dword ptr [ebx + 0x1c]
        push    ecx
        push    ebp
        mov     ecx, esi
        call    FUN_00681020
        test    al, al
        __emit 0x74   /* __emit: backward jcc off-by-4 (call-reloc sits between branch and target) */
        __emit 0xE3
        mov     edx, dword ptr [ebx + 0x1c]
        push    edx
        push    ebp
        mov     ecx, esi
        call    FUN_00680ff0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    l_560:
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_57d
        mov     ecx, dword ptr [ebx + 0x18]
        push    ecx
        mov     ecx, eax
        call    FUN_00680f60
        mov     esi, eax
        jmp     l_57f
    l_57d:
        xor     esi, esi
    l_57f:
        mov     ecx, dword ptr [esp + 0x14]
        push    esi
        call    FUN_004179b0
        mov     edx, dword ptr [ebx + 0x1c]
        push    edx
        push    ebp
        mov     ecx, esi
        call    FUN_00680ff0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
