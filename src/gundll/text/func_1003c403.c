// FUN_1003c403 (0x1003C403) __cdecl, 231 bytes
extern void __cdecl FUN_10039b19(int);
extern void __cdecl FUN_10039B7A(int);
extern void * __cdecl FUN_1003d5d6(unsigned int);
extern void * __cdecl FUN_1003e49b(unsigned int);
extern int g_10076a94;
extern unsigned int g_10076860;
extern unsigned int g_10053f94;
extern void *g_10076a90;
extern void *g_10049074;   // IAT HeapAlloc

__declspec(naked) void FUN_1003c403(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x1004b7d0
        push 0x1003eb9c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        push edi

        mov eax, dword ptr [g_10076a94]
        cmp eax, 3
        jnz loc_473
        mov esi, dword ptr [ebp+8]
        cmp esi, dword ptr [g_10076860]
        ja loc_4d2
        push 9
        call FUN_10039b19
        pop ecx
        and dword ptr [ebp-4], 0
        push esi
        call FUN_1003d5d6
        pop ecx
        mov dword ptr [ebp-0x1c], eax
        or dword ptr [ebp-4], 0xffffffff
        call loc_46a
        mov eax, dword ptr [ebp-0x1c]
        test eax, eax
        jz loc_4d2
        jmp loc_4f0
loc_46a:
        push 9
        call FUN_10039B7A
        pop ecx
        ret
loc_473:
        cmp eax, 2
        jnz loc_4d2
        mov eax, dword ptr [ebp+8]
        test eax, eax
        jz loc_487
        lea esi, [eax+0xf]
        and esi, 0xfffffff0
        jmp loc_48a
loc_487:
        push 0x10
        pop esi
loc_48a:
        mov dword ptr [ebp+8], esi
        cmp esi, dword ptr [g_10053f94]
        ja loc_4c3
        push 9
        call FUN_10039b19
        pop ecx
        mov dword ptr [ebp-4], 1
        mov eax, esi
        shr eax, 4
        push eax
        call FUN_1003e49b
        pop ecx
        mov dword ptr [ebp-0x1c], eax
        or dword ptr [ebp-4], 0xffffffff
        call loc_4c9
        mov eax, dword ptr [ebp-0x1c]
        test eax, eax
        jnz loc_4f0
loc_4c3:
        push esi
        jmp loc_4e2
        mov esi, dword ptr [ebp+8]   /* dead code, 8B 75 08 */
loc_4c9:
        push 9
        call FUN_10039B7A
        pop ecx
        ret
loc_4d2:
        mov eax, dword ptr [ebp+8]
        test eax, eax
        jnz loc_4dc
        push 1
        pop eax
loc_4dc:
        add eax, 0xf
        and al, 0xf0
        push eax
loc_4e2:
        push 0
        push dword ptr [g_10076a90]
        call dword ptr [g_10049074]
loc_4f0:
        mov ecx, dword ptr [ebp-0x10]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
