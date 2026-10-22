/* FUN_00627460 - __thiscall, 208 bytes
   ABL interpreter region. Copies a target name string into a buffer and
   formats a float via sprintf. */
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void *g_76b420;                    /* IAT: sprintf */

__declspec(naked) void func_00627460(void)
{
    __asm {
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp+0x44]
        test edi, edi
        mov ebx, ecx
        jz L_8e
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [ebx+0x9c]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        jmp L_af
    L_8e:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, 0x78d02c
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, dword ptr [ebx+0x9c]
        shr ecx, 2
        rep movsd
        mov ecx, edx
    L_af:
        and ecx, 3
        rep movsb
        mov eax, dword ptr [ebx+0x9c]
        mov esi, dword ptr [ebx+0x134]
        mov ecx, dword ptr [esi+0x84]
        push 0
        push 0
        push eax
        call FUN_00560420
        mov ecx, dword ptr [ebx+0xa8]
        mov dword ptr [esp+0x44], ecx
        fld dword ptr [esp+0x44]
        call FUN_0075db4a
        push eax
        lea edx, [esp+0x10]
        push 0x78d060
        push edx
        call dword ptr [g_76b420]
        mov ecx, dword ptr [esi+0x80]
        add esp, 0xc
        push 0
        push 0
        lea eax, [esp+0x14]
        push eax
        call FUN_00560420
        fld dword ptr [ebx+0xa8]
        mov ecx, dword ptr [esp+0x44]
        mov edx, dword ptr [ebx+0x130]
        pop edi
        mov dword ptr [esi+0x88], ecx
        pop esi
        fstp dword ptr [edx+0x150]
        pop ebx
        add esp, 0x34
        ret 4
    }
}
