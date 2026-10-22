/*
 * FUN_5e033875 (647 B) - timezone/string parsing initializer. Reads the
 * timezone info via GetTimeZoneInformation, computes offsets, converts
 * wide-char strings to multibyte, and parses a "HH:MM:SS" duration string
 * into DAT_5e03a37c.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e03a420;
extern int g_5e03a410;
extern int g_5e77ab10;
extern char g_5e036ee8;
extern int g_5e77ab18;
extern int *g_5e0350fc;   /* IAT: GetTimeZoneInformation */
extern int g_5e77ab6c;
extern short g_5e77ab5e;
extern int g_5e03a37c;
extern short g_5e77abb2;
extern int g_5e77abc0;
extern int g_5e03a380;
extern int g_5e03a384;
extern int *g_5e035078;   /* IAT: WideCharToMultiByte */
extern int g_5e03a408;    /* PTR_DAT_5e03a408 (string table) */
extern char g_5e77ab1c;
extern int g_5e77aa8c;
extern int g_5e03a40c;    /* PTR_DAT_5e03a40c (string table) */
extern char g_5e77ab70;
extern char *g_5e77abc4;

extern void __cdecl FUN_5e02c830(int);
extern void __cdecl FUN_5e02c891(int);
extern void *FUN_5e034185(void *);
extern int FUN_5e0317d0(char *, char *);
extern void FUN_5e02b69c(void *);
extern int FUN_5e02e6b0(char *);
extern void *FUN_5e02b6e4(int);
extern void FUN_5e02e220(void *, char *);
extern char *FUN_5e02f100(char *, char *, int);
extern int FUN_5e0336e1(char *);

__declspec(naked) void FUN_5e033875(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        push 0xc
        pop edi
        xor ebx, ebx
        push edi
        mov dword ptr [ebp-0x8], ebx
        call FUN_5e02c830
        or dword ptr [g_5e03a420], 0xffffffff
        or dword ptr [g_5e03a410], 0xffffffff
        mov dword ptr [g_5e77ab10], ebx
        mov dword ptr [esp], offset g_5e036ee8
        call FUN_5e034185
        mov esi, eax
        pop ecx
        cmp esi, ebx
        jnz L9b3
        push edi
        call FUN_5e02c891
        mov dword ptr [esp], offset g_5e77ab18
        call dword ptr [g_5e0350fc]
        cmp eax, -1
        jz Laf7
        mov eax, dword ptr [g_5e77ab18]
        mov ecx, dword ptr [g_5e77ab6c]
        imul eax, eax, 0x3c
        cmp word ptr [g_5e77ab5e], bx
        push 1
        pop edx
        mov dword ptr [g_5e03a37c], eax
        mov dword ptr [g_5e77ab10], edx
        jz L903
        mov esi, ecx
        imul esi, esi, 0x3c
        add eax, esi
        mov dword ptr [g_5e03a37c], eax
    L903:
        cmp word ptr [g_5e77abb2], bx
        jz L927
        mov eax, dword ptr [g_5e77abc0]
        cmp eax, ebx
        jz L927
        sub eax, ecx
        mov dword ptr [g_5e03a380], edx
        imul eax, eax, 0x3c
        mov dword ptr [g_5e03a384], eax
        jmp L933
    L927:
        mov dword ptr [g_5e03a380], ebx
        mov dword ptr [g_5e03a384], ebx
    L933:
        lea eax, [ebp-0x4]
        mov esi, dword ptr [g_5e035078]
        push eax
        push ebx
        push 0x3f
        mov edi, 0x220
        push dword ptr [g_5e03a408]
        push -1
        push offset g_5e77ab1c
        push edi
        push dword ptr [g_5e77aa8c]
        call esi
        test eax, eax
        jz L96f
        cmp dword ptr [ebp-0x4], ebx
        jnz L96f
        mov eax, dword ptr [g_5e03a408]
        and byte ptr [eax+0x3f], 0
        jmp L977
    L96f:
        mov eax, dword ptr [g_5e03a408]
        and byte ptr [eax], 0
    L977:
        lea eax, [ebp-0x4]
        push eax
        push ebx
        push 0x3f
        push dword ptr [g_5e03a40c]
        push -1
        push offset g_5e77ab70
        push edi
        push dword ptr [g_5e77aa8c]
        call esi
        test eax, eax
        jz Lae6
        cmp dword ptr [ebp-0x4], ebx
        jnz Lae6
        mov eax, dword ptr [g_5e03a40c]
        and byte ptr [eax+0x3f], 0
        jmp Laf7
    L9b3:
        cmp byte ptr [esi], 0
        jz Laf0
        mov eax, dword ptr [g_5e77abc4]
        cmp eax, ebx
        jz L9d6
        push eax
        push esi
        call FUN_5e0317d0
        pop ecx
        test eax, eax
        pop ecx
        jz Laf0
    L9d6:
        push dword ptr [g_5e77abc4]
        call FUN_5e02b69c
        push esi
        call FUN_5e02e6b0
        inc eax
        push eax
        call FUN_5e02b6e4
        add esp, 0xc
        cmp eax, ebx
        mov dword ptr [g_5e77abc4], eax
        jz Laf0
        push esi
        push eax
        call FUN_5e02e220
        push edi
        call FUN_5e02c891
        push 3
        push esi
        push dword ptr [g_5e03a408]
        call FUN_5e02f100
        mov eax, dword ptr [g_5e03a408]
        add esi, 3
        add esp, 0x18
        and byte ptr [eax+3], 0
        cmp byte ptr [esi], 0x2d
        jnz La35
        mov dword ptr [ebp-0x8], 1
        inc esi
    La35:
        push esi
        call FUN_5e0336e1
        pop ecx
        mov bl, 0x30
        mov ecx, eax
        imul ecx, ecx, 0xe10
        mov dword ptr [g_5e03a37c], ecx
    La4c:
        mov al, byte ptr [esi]
        cmp al, 0x2b
        jz La5a
        cmp al, bl
        jl La5d
        cmp al, 0x39
        jg La5d
    La5a:
        inc esi
        jmp La4c
    La5d:
        cmp byte ptr [esi], 0x3a
        jnz Lab0
        inc esi
        push esi
        call FUN_5e0336e1
        imul eax, eax, 0x3c
        pop ecx
        mov ecx, dword ptr [g_5e03a37c]
        add ecx, eax
        mov dword ptr [g_5e03a37c], ecx
    La7b:
        mov al, byte ptr [esi]
        cmp al, bl
        jl La88
        cmp al, 0x39
        jg La88
        inc esi
        jmp La7b
    La88:
        cmp byte ptr [esi], 0x3a
        jnz Lab0
        inc esi
        push esi
        call FUN_5e0336e1
        pop ecx
        mov ecx, dword ptr [g_5e03a37c]
        add ecx, eax
        mov dword ptr [g_5e03a37c], ecx
    Laa3:
        mov al, byte ptr [esi]
        cmp al, bl
        jl Lab0
        cmp al, 0x39
        jg Lab0
        inc esi
        jmp Laa3
    Lab0:
        cmp dword ptr [ebp-0x8], 0
        jz Labe
        neg ecx
        mov dword ptr [g_5e03a37c], ecx
    Labe:
        movsx eax, byte ptr [esi]
        test eax, eax
        mov dword ptr [g_5e03a380], eax
        jz Lae6
        push 3
        push esi
        push dword ptr [g_5e03a40c]
        call FUN_5e02f100
        mov eax, dword ptr [g_5e03a40c]
        add esp, 0xc
        and byte ptr [eax+3], 0
        jmp Laf7
    Lae6:
        mov eax, dword ptr [g_5e03a40c]
        and byte ptr [eax], 0
        jmp Laf7
    Laf0:
        push edi
        call FUN_5e02c891
        pop ecx
    Laf7:
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
