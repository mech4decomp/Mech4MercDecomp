/*
 * FUN_5e02fa5d (185 B) — locale category install helper. Lazily allocates a
 * 0x351-byte buffer, walks a table of category entries calling the install
 * callback for each, and returns the buffer (or a fallback pointer) depending
 * on whether all entries matched.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_5e02b6e4(int);
extern void FUN_5e02fc31(void);
extern void FUN_5e02e230(void);
extern int FUN_5e0317d0(void);
extern void FUN_5e02b69c(void);
extern int g_5e039694;
extern int g_5e0396a0;
extern int g_5e03969c;
extern int g_5e0396ac;

__declspec(naked) void FUN_5e02fa5d(void)
{
    __asm {
        mov eax, dword ptr [g_5e039694]
        push ebx
        push ebp
        push esi
        push edi
        push 1
        test eax, eax
        pop ebp
        jnz L_fa7d
        push 0x351
        call FUN_5e02b6e4
        pop ecx
        mov dword ptr [g_5e039694], eax
L_fa7d:
        and byte ptr [eax], 0
        push dword ptr [g_5e0396a0]
        mov edi, 0x5e03668c
        push edi
        push dword ptr [g_5e03969c]
        push 3
        push dword ptr [g_5e039694]
        call FUN_5e02fc31
        mov esi, 0x5e0396a0
        add esp, 0x14
        mov ebx, esi
L_faa9:
        push 0x5e036684
        push dword ptr [g_5e039694]
        call FUN_5e02e230
        push dword ptr [esi+0xc]
        add esi, 0xc
        push dword ptr [ebx]
        call FUN_5e0317d0
        add esp, 0x10
        test eax, eax
        jz L_facf
        xor ebp, ebp
L_facf:
        push dword ptr [esi]
        mov ebx, esi
        push edi
        push dword ptr [esi-4]
        push 3
        push dword ptr [g_5e039694]
        call FUN_5e02fc31
        add esp, 0x14
        cmp esi, 0x5e0396d0
        jl L_faa9
        pop edi
        pop esi
        test ebp, ebp
        pop ebp
        pop ebx
        jnz L_fafd
        mov eax, dword ptr [g_5e039694]
        ret
L_fafd:
        push dword ptr [g_5e039694]
        call FUN_5e02b69c
        and dword ptr [g_5e039694], 0
        mov eax, dword ptr [g_5e0396ac]
        pop ecx
        ret
    }
}
