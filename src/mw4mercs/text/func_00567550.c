// 0x00567550: in-.text data block transcription (343 bytes)
// Reads a byte stream via g_805918/g_805908, dispatches on a token value
// (g_80d9bc/g_80d9b8/g_80d9b4/g_80d9b0) and formats output via sprintf-like
// IAT call at 0x76b420.

extern char *g_805918;   // 0x805918
extern int   g_805908;   // 0x805908
extern char *g_80592c;   // 0x80592c
extern int   g_80d9bc;   // 0x80d9bc
extern int   g_80d9b8;   // 0x80d9b8
extern int   g_80d9b4;   // 0x80d9b4
extern int   g_80d9b0;   // 0x80d9b0

extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064c950(void);

extern void *g_76b420;   // IAT 0x76b420
extern char g_76b9a8;    // 0x76b9a8
extern char g_77f804;    // 0x77f804
extern char g_77f7fc;    // 0x77f7fc
extern char g_76d170;    // 0x76d170
extern char g_76d834;    // 0x76d834
extern char g_76c690;    // 0x76c690

__declspec(naked) void func_00567550(void)
{
    __asm {
        mov eax, dword ptr [g_805918]
        movsx ecx, byte ptr [eax + 1]
        sub esp, 0x14
        inc eax
        push ebx
        push esi
        inc eax
        push edi
        mov dword ptr [g_805908], ecx
        mov dword ptr [g_805918], eax
        call FUN_0064db40
        mov eax, dword ptr [g_80592c]
        mov ebx, dword ptr [eax]
        sub eax, 4
        mov dword ptr [g_80592c], eax
        mov eax, dword ptr [g_805918]
        movsx edx, byte ptr [eax]
        inc eax
        mov dword ptr [g_805908], edx
        mov dword ptr [g_805918], eax
        call FUN_0064db40
        push eax
        call FUN_0064c950
        mov ecx, dword ptr [g_80d9bc]
        add esp, 4
        cmp eax, ecx
        jne L_c0
        mov eax, dword ptr [g_80592c]
        mov ecx, dword ptr [eax]
        push ecx
        push offset g_76b9a8
        lea edx, [esp + 0x14]
        push edx
        jmp L_636
L_c0:
        mov ecx, dword ptr [g_80d9b8]
        cmp eax, ecx
        jne L_e1
        mov ecx, dword ptr [g_80592c]
        xor eax, eax
        mov al, byte ptr [ecx]
        lea edx, [esp + 0xc]
        push eax
        push offset g_77f804
        push edx
        jmp L_636
L_e1:
        cmp eax, dword ptr [g_80d9b4]
        jne L_60f
        mov eax, dword ptr [g_80592c]
        fld dword ptr [eax]
        sub esp, 8
        fstp qword ptr [esp]
        lea ecx, [esp + 0x14]
        push offset g_77f7fc
        push ecx
        call dword ptr [g_76b420]
        add esp, 0x10
        lea edi, [esp + 0xc]
        jmp L_657
L_60f:
        cmp eax, dword ptr [g_80d9b0]
        jne L_645
        mov eax, dword ptr [g_80592c]
        cmp dword ptr [eax], 0
        mov eax, offset g_76d170
        jne L_62b
        mov eax, offset g_76d834
L_62b:
        push eax
        push offset g_76c690
        lea ecx, [esp + 0x14]
        push ecx
L_636:
        call dword ptr [g_76b420]
        add esp, 0xc
        lea edi, [esp + 0xc]
        jmp L_657
L_645:
        cmp dword ptr [eax + 4], 3
        jne L_67c
        cmp dword ptr [eax + 0x14], ecx
        jne L_67c
        mov eax, dword ptr [g_80592c]
        mov edi, dword ptr [eax]
L_657:
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, ebx
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
L_67c:
        mov eax, dword ptr [g_80592c]
        mov dword ptr [eax], 0
        mov eax, dword ptr [g_805918]
        movsx ecx, byte ptr [eax]
        pop edi
        inc eax
        pop esi
        mov dword ptr [g_805918], eax
        mov eax, dword ptr [g_80d9bc]
        mov dword ptr [g_805908], ecx
        pop ebx
        add esp, 0x14
        ret
    }
}
