/*
 * FUN_5e02f6fc (582 B) — locale/category string installer. Parses LC_*
 * category strings, installs them via FUN_5e02f942, and manages a cached
 * category table. Serialized via a global busy flag + Sleep(1) spin.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_5e02c830(int);
extern void FUN_5e02c891(int);
extern int FUN_5e02f942(int, char *);
extern void *FUN_5e0318e0(char *, char *);
extern int FUN_5e0318a0(char *, char *, char *);
extern int FUN_5e02e6b0(char *);
extern char *FUN_5e031860(char *, char *);
extern char *FUN_5e02f100(char *, char *, int);
extern int FUN_5e02fb16(char *, char *, int, int, int);
extern int FUN_5e0317d0(char *, char *);
extern void *FUN_5e02fa5d(void);
extern void FUN_5e02b69c(void *);
extern void *g_5e0350d4;   /* IAT: Sleep */
extern int g_5e77abe0;
extern int g_5e77abe4;
extern int g_5e039694;     /* cached category table */
extern char g_5e03969c[];  /* category name table */
extern char g_5e036688[];
extern char g_5e036684[];

__declspec(naked) void FUN_5e02f6fc(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x88
        push ebx
        push esi
        mov esi, dword ptr [ebp+8]
        xor ebx, ebx
        cmp esi, ebx
        jl L_f93c
        cmp esi, 5
        jg L_f93c
        push 0x13
        call FUN_5e02c830
        inc dword ptr [g_5e77abe0]
        pop ecx
L_f72b:
        cmp dword ptr [g_5e77abe4], ebx
        jz L_f73d
        push 1
        call dword ptr [g_5e0350d4]
        jmp L_f72b
L_f73d:
        cmp esi, ebx
        push edi
        jz L_f766
        cmp dword ptr [ebp+0xc], ebx
        jz L_f757
        push dword ptr [ebp+0xc]
        push esi
        call FUN_5e02f942
        pop ecx
        pop ecx
        jmp L_f927
L_f757:
        lea eax, [esi+esi*2]
        mov esi, dword ptr [eax*4 + g_5e039694]
        jmp L_f929
L_f766:
        mov edi, dword ptr [ebp+0xc]
        mov dword ptr [ebp-4], 1
        cmp edi, ebx
        mov dword ptr [ebp+8], ebx
        jz L_f922
        cmp byte ptr [edi], 0x4c
        jnz L_f899
        cmp byte ptr [edi+1], 0x43
        jnz L_f899
        cmp byte ptr [edi+2], 0x5f
        jnz L_f899
        push offset g_5e036688
        push edi
        call FUN_5e0318e0
        mov esi, eax
        pop ecx
        cmp esi, ebx
        pop ecx
        jz L_f879
        jmp L_f7b3
L_f7b1:
        xor ebx, ebx
L_f7b3:
        mov eax, esi
        sub eax, edi
        mov dword ptr [ebp-4], eax
        jz L_f879
        cmp byte ptr [esi], 0x3b
        jz L_f879
        mov dword ptr [ebp+0xc], 1
        mov ebx, offset g_5e03969c
        jmp L_f7da
L_f7d7:
        mov eax, dword ptr [ebp-4]
L_f7da:
        push eax
        push edi
        push dword ptr [ebx]
        call FUN_5e0318a0
        add esp, 0xc
        test eax, eax
        jnz L_f7f7
        push dword ptr [ebx]
        call FUN_5e02e6b0
        cmp dword ptr [ebp-4], eax
        pop ecx
        jz L_f805
L_f7f7:
        inc dword ptr [ebp+0xc]
        add ebx, 0xc
        cmp ebx, 0x5e0396cc
        jle L_f7d7
L_f805:
        inc esi
        push offset g_5e036684
        push esi
        call FUN_5e031860
        mov edi, eax
        pop ecx
        test edi, edi
        pop ecx
        jnz L_f81e
        cmp byte ptr [esi], 0x3b
        jnz L_f879
L_f81e:
        cmp dword ptr [ebp+0xc], 5
        jg L_f853
        push edi
        lea eax, [ebp-0x88]
        push esi
        push eax
        call FUN_5e02f100
        and byte ptr [ebp+edi-0x88], 0
        lea eax, [ebp-0x88]
        push eax
        push dword ptr [ebp+0xc]
        call FUN_5e02f942
        add esp, 0x14
        test eax, eax
        jz L_f853
        inc dword ptr [ebp+8]
L_f853:
        add edi, esi
        cmp byte ptr [edi], 0
        jz L_f888
        inc edi
        cmp byte ptr [edi], 0
        jz L_f888
        push offset g_5e036688
        push edi
        call FUN_5e0318e0
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        jnz L_f7b1
        xor ebx, ebx
L_f879:
        push 0x13
        call FUN_5e02c891
        pop ecx
        xor esi, esi
        jmp L_f931
L_f888:
        cmp dword ptr [ebp+8], 0
L_f88c:
        jnz L_f922
        xor esi, esi
        jmp L_f929
L_f899:
        push ebx
        push ebx
        lea eax, [ebp-0x88]
        push ebx
        push eax
        push edi
        call FUN_5e02fb16
        mov esi, eax
        add esp, 0x14
        cmp esi, ebx
        jz L_f929
        mov esi, offset g_5e039694
        mov edi, esi
L_f8b9:
        cmp edi, esi
        jz L_f8ec
        push dword ptr [edi]
        lea eax, [ebp-0x88]
        push eax
        call FUN_5e0317d0
        pop ecx
        test eax, eax
        pop ecx
        jz L_f8e9
        lea eax, [ebp-0x88]
        push eax
        push ebx
        call FUN_5e02f942
        pop ecx
        test eax, eax
        pop ecx
        jnz L_f8e9
        and dword ptr [ebp-4], eax
        jmp L_f8ec
L_f8e9:
        inc dword ptr [ebp+8]
L_f8ec:
        add edi, 0xc
        inc ebx
        cmp edi, 0x5e0396d0
        jle L_f8b9
        xor edi, edi
        cmp dword ptr [ebp-4], edi
        jz L_f91a
        call FUN_5e02fa5d
        push dword ptr [g_5e039694]
        mov esi, eax
        call FUN_5e02b69c
        pop ecx
        mov dword ptr [g_5e039694], edi
        jmp L_f929
L_f91a:
        cmp dword ptr [ebp+8], edi
        jmp L_f88c
L_f922:
        call FUN_5e02fa5d
L_f927:
        mov esi, eax
L_f929:
        push 0x13
        call FUN_5e02c891
        pop ecx
L_f931:
        dec dword ptr [g_5e77abe0]
        mov eax, esi
        pop edi
        jmp L_f93e
L_f93c:
        xor eax, eax
L_f93e:
        pop esi
        pop ebx
        leave
        ret
    }
}
