/* func_0040491D.c -- in-.text data block (block 0x40491D), 391 bytes.
   Two functions: one manipulates a string table (copying string pointers),
   the other looks up objects via an obfuscated pointer and calls methods. */

extern int g_7b7df4;
extern int g_7b7df0;
extern int g_7b7e14;
extern int g_7b7e2c;
extern int g_7b7e28;
extern int g_7dab44;
extern int g_7dab40;

extern void FUN_006FB7C0(void);
extern void FUN_004C8F70(void);
extern void FUN_00402EC0(void);
extern void FUN_004C9040(void);

__declspec(naked) void func_0040491D(void)
{
    __asm {
        nop
        nop
        nop
        mov eax, dword ptr [g_7b7df4]
        sub esp, 0x100
        cmp eax, 2
        jge L_40493c
        or eax, 0xffffffff
        add esp, 0x100
        ret 0xc
L_40493c:
        or ecx, 0xffffffff
        push ebx
        xor eax, eax
        push ebp
        push esi
        push edi
        mov edi, 0x76b78c
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        lea edx, [esp + 0x10]
        mov edi, edx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [g_7b7df0]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [g_7b7e14]
        mov edi, dword ptr [ecx + eax*4]
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        lea edx, [esp + 0x10]
        mov edi, edx
        repne scasb
        dec edi
        mov ecx, ebx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        or ecx, 0xffffffff
        mov edi, 0x76b784
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        lea edx, [esp + 0x10]
        mov edi, edx
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        lea eax, [esp + 0x10]
        and ecx, 3
        push eax
        rep movsb
        call FUN_006FB7C0
        mov eax, dword ptr [g_7b7df0]
        mov ebp, dword ptr [g_7b7df4]
        lea ebx, [eax + 1]
        cmp ebx, ebp
        jge L_404a1b
        mov ecx, dword ptr [g_7b7e14]
        lea edx, [ecx + eax*4]
L_4049ee:
        mov edi, dword ptr [edx + 4]
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, dword ptr [edx]
        rep movsd
        mov ecx, eax
        and ecx, 3
        add edx, 4
        inc ebx
        cmp ebx, ebp
        rep movsb
        jl L_4049ee
        mov eax, dword ptr [g_7b7df0]
L_404a1b:
        pop edi
        dec ebp
        pop esi
        mov dword ptr [g_7b7df4], ebp
        cmp eax, ebp
        pop ebp
        pop ebx
        jne L_404a30
        dec eax
        mov dword ptr [g_7b7df0], eax
L_404a30:
        xor eax, eax
        add esp, 0x100
        ret 0xc
        nop
        nop
        nop
        nop
        nop
        call FUN_004C8F70
        test al, al
        jne L_404a8b
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        lea eax, [ecx + 0xc]
        mov ecx, dword ptr [eax]
        push esi
        mov esi, dword ptr [eax]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x754d
        xor esi, 0x85739531
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esi]
        push 0x7546
        mov ecx, esi
        call dword ptr [eax + 0x34]
        push eax
        call FUN_00402EC0
        add esp, 8
        pop esi
L_404a8b:
        mov ecx, dword ptr [g_7b7e2c]
        push ecx
        call FUN_004C9040
        mov dword ptr [g_7b7e28], eax
        add esp, 4
        xor eax, eax
        ret 0xc
    }
}
