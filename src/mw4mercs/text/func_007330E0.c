// 0x007330E0: in-.text data block transcription (353 bytes)
// Builds a message struct on the stack, conditionally copies a name string,
// validates a token, and dispatches via IAT calls + a cached function pointer
// (g_76b068). ret 8.

extern void __cdecl FUN_00732af0(void);

extern int  g_8a9978;   // 0x8a9978
extern int  g_8a997c;   // 0x8a997c
extern int  g_8a9974;   // 0x8a9974
extern int  g_76b068;   // 0x76b068 (cached fn ptr)
extern void *g_76b074;  // IAT 0x76b074
extern void *g_76b320;  // IAT 0x76b320
extern void *g_76b104;  // IAT 0x76b104
extern void *g_76b07c;  // IAT 0x76b07c
extern char g_8816e6;   // 0x8816e6
extern int  g_8816cc;   // 0x8816cc
extern char g_89697c;   // 0x89697c
extern char g_779d48;   // 0x779d48
extern char g_896a80;   // 0x896a80
extern char g_76b768;   // 0x76b768

__declspec(naked) void func_007330E0(void)
{
    __asm {
        mov eax, dword ptr [g_8a9978]
        sub esp, 0x3c
        test eax, eax
        push ebp
        mov ebp, dword ptr [g_76b068]
        push esi
        push edi
        je L_fe
        push eax
        mov eax, dword ptr [g_8a997c]
        push eax
        call ebp
L_fe:
        mov eax, dword ptr [g_8a9974]
        test eax, eax
        je L_10e
        push eax
        call dword ptr [g_76b074]
L_10e:
        mov dl, byte ptr [g_8816e6]
        xor eax, eax
        mov ecx, 0xf
        lea edi, [esp + 0xc]
        rep stosd
        mov ecx, dword ptr [esp + 0x50]
        mov byte ptr [esp + 0x24], al
        mov byte ptr [esp + 0x25], al
        mov byte ptr [esp + 0x27], al
        mov eax, dword ptr [g_8816cc]
        test eax, eax
        mov dword ptr [esp + 0xc], ecx
        mov dword ptr [esp + 0x1c], 0x190
        mov byte ptr [esp + 0x20], dl
        mov byte ptr [esp + 0x23], 1
        mov byte ptr [esp + 0x26], 4
        je L_178
        mov ecx, dword ptr [eax + 0x75c]
        test ecx, ecx
        je L_178
        lea edx, [eax + 0xc]
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        add ecx, -5
        push ecx
        push edx
        lea eax, [esp + 0x30]
        push eax
        jmp L_194
L_178:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_89697c
        repne scasb
        not ecx
        add ecx, -5
        push ecx
        push offset g_89697c
        lea ecx, [esp + 0x30]
        push ecx
L_194:
        call dword ptr [g_76b320]
        mov eax, dword ptr [esp + 0x58]
        add esp, 0xc
        test eax, eax
        je L_219
        push eax
        call FUN_00732af0
        test al, al
        je L_219
        mov esi, offset g_779d48
        mov eax, offset g_896a80
L_1b9:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_1dd
        test cl, cl
        je L_1d9
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L_1dd
        add eax, 2
        add esi, 2
        test cl, cl
        jne L_1b9
L_1d9:
        xor eax, eax
        jmp L_1e2
L_1dd:
        sbb eax, eax
        sbb eax, -1
L_1e2:
        test eax, eax
        jne L_219
        call dword ptr [g_76b104]
        cmp eax, 0x3a4
        jne L_219
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_76b768
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        lea edx, [esp + 0x28]
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
L_219:
        lea ecx, [esp + 0xc]
        push ecx
        call dword ptr [g_76b07c]
        mov edx, dword ptr [g_8a997c]
        push eax
        push edx
        mov dword ptr [g_8a9974], eax
        call ebp
        pop edi
        pop esi
        mov dword ptr [g_8a9978], eax
        pop ebp
        add esp, 0x3c
        ret 8
    }
}
