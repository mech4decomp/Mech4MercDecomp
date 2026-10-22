/*
 * FUN_5e033e09 (264 B) - locale string-type conversion with SEH frame.
 * Lazily probes GetLocaleInfoW/GetLocaleInfoA to pick the active codepage
 * mode (DAT_5e77abcc), then converts via GetLocaleInfoW (mode 1) or
 * GetLocaleInfoA + MultiByteToWideChar (mode 2).
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_5e036ef0;   /* SEH handler */
extern char g_5e030a84;   /* SEH scope table */
extern int g_5e77abcc;
extern int *g_5e035100;   /* IAT: GetLocaleInfoW */
extern int *g_5e0350ec;   /* IAT: GetLocaleInfoA */
extern int g_5e77aa8c;
extern int *g_5e0350c8;   /* IAT: MultiByteToWideChar */

extern void __cdecl FUN_5e030b60(void);   /* alloca/chkstk */

__declspec(naked) void FUN_5e033e09(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push offset g_5e036ef0
        push offset g_5e030a84
        mov eax, fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x14
        push ebx
        push esi
        push edi
        mov dword ptr [ebp-0x18], esp
        mov eax, dword ptr [g_5e77abcc]
        xor edi, edi
        cmp eax, edi
        jnz Le68
        push edi
        push edi
        push 1
        push edi
        call dword ptr [g_5e035100]
        test eax, eax
        jz Le4d
        push 1
        jmp Le62
    Le4d:
        push edi
        push edi
        push 1
        push edi
        call dword ptr [g_5e0350ec]
        test eax, eax
        jz Lf08
        push 2
    Le62:
        pop eax
        mov dword ptr [g_5e77abcc], eax
    Le68:
        cmp eax, 1
        jnz Le84
        push dword ptr [ebp+0x14]
        push dword ptr [ebp+0x10]
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+0x8]
        call dword ptr [g_5e035100]
        jmp Lf0a
    Le84:
        cmp eax, 2
        jnz Lf08
        cmp dword ptr [ebp+0x18], edi
        jnz Le96
        mov eax, dword ptr [g_5e77aa8c]
        mov dword ptr [ebp+0x18], eax
    Le96:
        push edi
        push edi
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+0x8]
        call dword ptr [g_5e0350ec]
        mov dword ptr [ebp-0x1c], eax
        cmp eax, edi
        jz Lf08
        mov dword ptr [ebp-0x4], edi
        add eax, 3
        and al, 0xfc
        call FUN_5e030b60
        mov dword ptr [ebp-0x18], esp
        mov esi, esp
        mov dword ptr [ebp-0x20], esi
        jmp Lecd
        /* embedded SEH handler (unreachable from main flow, jumped over) */
        push 1
        pop eax
        ret
        mov esp, dword ptr [ebp-0x18]
        xor edi, edi
        xor esi, esi
    Lecd:
        or dword ptr [ebp-0x4], 0xffffffff
        cmp esi, edi
        jz Lf08
        push dword ptr [ebp-0x1c]
        push esi
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+0x8]
        call dword ptr [g_5e0350ec]
        test eax, eax
        jz Lf08
        cmp dword ptr [ebp+0x14], edi
        jnz Lef2
        push edi
        push edi
        jmp Lef8
    Lef2:
        push dword ptr [ebp+0x14]
        push dword ptr [ebp+0x10]
    Lef8:
        push -1
        push esi
        push 1
        push dword ptr [ebp+0x18]
        call dword ptr [g_5e0350c8]
        jmp Lf0a
    Lf08:
        xor eax, eax
    Lf0a:
        lea esp, [ebp-0x30]
        mov ecx, dword ptr [ebp-0x10]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
