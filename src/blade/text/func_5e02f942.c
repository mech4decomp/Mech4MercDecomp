/*
 * FUN_5e02f942 (283 B) — install a locale category. Parses the category
 * string, allocates a copy, saves/restores the previous category state, and
 * invokes the category's install callback. Returns the new category pointer
 * or 0 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_5e02fb16(char *, char *, void *, void *, int);
extern int FUN_5e02e6b0(char *);
extern void *FUN_5e02b6e4(int);
extern void FUN_5e02ed40(void *, void *, int);
extern void *FUN_5e02e220(void *, char *);
extern void FUN_5e02b69c(void *);
extern int g_5e77aa74[];
extern char g_5e77aab4[];
extern int g_5e77aa8c;
extern int g_5e77aa90;
extern int g_5e039694[];
extern int g_5e039698[];

__declspec(naked) void FUN_5e02f942(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0xa4
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp+8]
        lea eax, [ebp-0x18]
        push edi
        push eax
        lea eax, [ebp-0x10]
        push eax
        lea eax, [ebp-0xa4]
        push eax
        push dword ptr [ebp+0xc]
        call FUN_5e02fb16
        add esp, 0x14
        test eax, eax
        jz L_fa3c
        lea eax, [ebp-0xa4]
        push eax
        call FUN_5e02e6b0
        inc eax
        push eax
        call FUN_5e02b6e4
        pop ecx
        mov dword ptr [ebp+0xc], eax
        test eax, eax
        pop ecx
        jz L_fa3c
        lea esi, [edi+edi*2]
        lea ebx, [edi*4 + g_5e77aa74]
        shl esi, 2
        push 6
        mov eax, dword ptr [esi + g_5e039694]
        mov dword ptr [ebp+8], eax
        mov eax, dword ptr [ebx]
        mov dword ptr [ebp-0x14], eax
        lea eax, [edi+edi*2]
        lea eax, [eax*2 + g_5e77aab4]
        mov dword ptr [ebp-8], eax
        push eax
        lea eax, [ebp-0x20]
        push eax
        call FUN_5e02ed40
        mov eax, dword ptr [g_5e77aa8c]
        mov dword ptr [ebp-4], eax
        lea eax, [ebp-0xa4]
        push eax
        push dword ptr [ebp+0xc]
        call FUN_5e02e220
        mov dword ptr [esi + g_5e039694], eax
        push 6
        movzx eax, word ptr [ebp-0x10]
        mov dword ptr [ebx], eax
        lea eax, [ebp-0x10]
        push eax
        push dword ptr [ebp-8]
        call FUN_5e02ed40
        mov eax, dword ptr [ebp-0x18]
        add esp, 0x20
        cmp edi, 2
        jnz L_fa09
        mov dword ptr [g_5e77aa8c], eax
L_fa09:
        cmp edi, 1
        jnz L_fa13
        mov dword ptr [g_5e77aa90], eax
L_fa13:
        call dword ptr [esi + g_5e039698]
        test eax, eax
        jz L_fa40
        mov eax, dword ptr [ebp+8]
        push dword ptr [ebp+0xc]
        mov dword ptr [esi + g_5e039694], eax
        call FUN_5e02b69c
        mov eax, dword ptr [ebp-0x14]
        pop ecx
        mov dword ptr [ebx], eax
        mov eax, dword ptr [ebp-4]
        mov dword ptr [g_5e77aa8c], eax
L_fa3c:
        xor eax, eax
        jmp L_fa58
L_fa40:
        cmp dword ptr [ebp+8], 0x5e039580
        jz L_fa52
        push dword ptr [ebp+8]
        call FUN_5e02b69c
        pop ecx
L_fa52:
        mov eax, dword ptr [esi + g_5e039694]
L_fa58:
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
