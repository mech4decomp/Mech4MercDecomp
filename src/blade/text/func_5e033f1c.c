/*
 * FUN_5e033f1c (275 B) - locale string-type conversion with SEH frame
 * (ANSI variant). Lazily probes GetLocaleInfoW/GetLocaleInfoA to pick the
 * active codepage mode (DAT_5e77abd0), then converts via GetLocaleInfoA
 * (mode 2) or GetLocaleInfoW + WideCharToMultiByte (mode 1).
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_5e036f00;   /* SEH handler */
extern char g_5e030a84;   /* SEH scope table */
extern int g_5e77abd0;
extern int *g_5e035100;   /* IAT: GetLocaleInfoW */
extern int *g_5e0350ec;   /* IAT: GetLocaleInfoA */
extern int g_5e77aa8c;
extern int *g_5e035078;   /* IAT: WideCharToMultiByte */

extern void __cdecl FUN_5e030b60(void);   /* alloca/chkstk */

__declspec(naked) void FUN_5e033f1c(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push offset g_5e036f00
        push offset g_5e030a84
        mov eax, fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x14
        push ebx
        push esi
        push edi
        mov dword ptr [ebp-0x18], esp
        mov eax, dword ptr [g_5e77abd0]
        xor esi, esi
        cmp eax, esi
        jnz Lf7b
        push esi
        push esi
        push 1
        push esi
        call dword ptr [g_5e035100]
        test eax, eax
        jz Lf60
        push 1
        jmp Lf75
    Lf60:
        push esi
        push esi
        push 1
        push esi
        call dword ptr [g_5e0350ec]
        test eax, eax
        jz L4026
        push 2
    Lf75:
        pop eax
        mov dword ptr [g_5e77abd0], eax
    Lf7b:
        cmp eax, 2
        jnz Lf97
        push dword ptr [ebp+0x14]
        push dword ptr [ebp+0x10]
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+0x8]
        call dword ptr [g_5e0350ec]
        jmp L4028
    Lf97:
        cmp eax, 1
        jnz L4026
        cmp dword ptr [ebp+0x18], esi
        jnz Lfad
        mov eax, dword ptr [g_5e77aa8c]
        mov dword ptr [ebp+0x18], eax
    Lfad:
        push esi
        push esi
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+0x8]
        call dword ptr [g_5e035100]
        mov dword ptr [ebp-0x1c], eax
        cmp eax, esi
        jz L4026
        mov dword ptr [ebp-0x4], esi
        add eax, eax
        add eax, 3
        and al, 0xfc
        call FUN_5e030b60
        mov dword ptr [ebp-0x18], esp
        mov edi, esp
        mov dword ptr [ebp-0x20], edi
        jmp Lfe6
        /* embedded SEH handler (unreachable from main flow, jumped over) */
        push 1
        pop eax
        ret
        mov esp, dword ptr [ebp-0x18]
        xor esi, esi
        xor edi, edi
    Lfe6:
        or dword ptr [ebp-0x4], 0xffffffff
        cmp edi, esi
        jz L4026
        push dword ptr [ebp-0x1c]
        push edi
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+0x8]
        call dword ptr [g_5e035100]
        test eax, eax
        jz L4026
        cmp dword ptr [ebp+0x14], esi
        push esi
        push esi
        jnz L400d
        push esi
        push esi
        jmp L4013
    L400d:
        push dword ptr [ebp+0x14]
        push dword ptr [ebp+0x10]
    L4013:
        push -1
        push edi
        push 0x220
        push dword ptr [ebp+0x18]
        call dword ptr [g_5e035078]
        jmp L4028
    L4026:
        xor eax, eax
    L4028:
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
