// 0x0074FA90: in-.text data block transcription (true extent 351 bytes)
// Switch on a param (0..5) selecting a source string, copies it into the
// g_8ba014 buffer, then formats via IAT 0x76b4f8. Jump table at 0x74FBF0
// (outside this function's extent) is referenced by the dispatch.

extern void __cdecl FUN_0074e740(void);
extern void *g_76b4f8;   // IAT 0x76b4f8
extern int   g_74fbf0;   // jump table base 0x74fbf0
extern char  g_7aca14;   // 0x7aca14
extern char  g_7aca08;   // 0x7aca08
extern char  g_7ac9fc;   // 0x7ac9fc
extern char  g_7ac9ec;   // 0x7ac9ec
extern char  g_7ac9dc;   // 0x7ac9dc
extern char  g_7ac9d0;   // 0x7ac9d0
extern char  g_7ac9c4;   // 0x7ac9c4
extern char  g_7ac99c;   // 0x7ac99c
extern char  g_8ba014;   // 0x8ba014
extern char  g_7aca20;   // 0x7aca20

__declspec(naked) void func_0074FA90(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0x80
        dec eax
        cmp eax, 5
        push esi
        push edi
        ja L_fb28
        jmp dword ptr [eax*4 + g_74fbf0]
L_faad:
        mov edi, offset g_7aca14
        jmp L_fb2d
L_fab4:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7aca08
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_8ba014
        rep movsd
        mov ecx, eax
        jmp L_fb48
L_fad6:
        mov edi, offset g_7ac9fc
        jmp L_fb2d
L_fadd:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7ac9ec
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_8ba014
        rep movsd
        mov ecx, eax
        jmp L_fb48
L_faff:
        mov edi, offset g_7ac9dc
        jmp L_fb2d
L_fb06:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7ac9d0
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_8ba014
        rep movsd
        mov ecx, eax
        jmp L_fb48
L_fb28:
        mov edi, offset g_7ac9c4
L_fb2d:
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_8ba014
        rep movsd
        mov ecx, edx
L_fb48:
        mov eax, dword ptr [esp + 0x90]
        and ecx, 3
        rep movsb
        push eax
        lea ecx, [esp + 0x4c]
        push ecx
        call FUN_0074e740
        mov edx, dword ptr [esp + 0x98]
        push eax
        push edx
        lea eax, [esp + 0x10]
        push offset g_7aca20
        push eax
        call dword ptr [g_76b4f8]
        or ecx, 0xffffffff
        xor eax, eax
        add esp, 0x10
        lea edi, [esp + 8]
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8ba014
        repne scasb
        mov al, byte ptr [esp + 0x9c]
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        test al, 1
        rep movsb
        je L_fbdf
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7ac99c
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8ba014
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
L_fbdf:
        pop edi
        mov eax, offset g_8ba014
        pop esi
        add esp, 0x80
        ret 0x14
    }
}
