/*
 * FUN_5e02f5b3 (318 B) — GetStringType wrapper with SEH frame. Detects
 * ANSI vs Unicode at runtime (GetStringTypeW/A), caches the mode, and
 * dispatches to the appropriate GetStringTypeA/W / MultiByteToWideChar path.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77aa64;
extern int g_5e77aa7c;
extern int g_5e77aa8c;
extern void *g_5e0350d0;   /* IAT: GetStringTypeW */
extern void *g_5e0350cc;   /* IAT: GetStringTypeA */
extern void *g_5e0350c8;   /* IAT: MultiByteToWideChar */
extern char g_5e036630[];
extern char g_5e03662c[];
extern char g_5e036638[];  /* SEH scope table */
extern void __cdecl FUN_5e030a84(void); /* SEH handler */
extern void FUN_5e030b60(void);
extern void FUN_5e02e310(void *, void *, void *);

__declspec(naked) void FUN_5e02f5b3(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push offset g_5e036638
        push offset FUN_5e030a84
        mov eax, fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov dword ptr [ebp-0x18], esp
        mov eax, dword ptr [g_5e77aa64]
        xor ebx, ebx
        cmp eax, ebx
        jnz L_f622
        lea eax, [ebp-0x1c]
        push eax
        push 1
        pop esi
        push esi
        push offset g_5e036630
        push esi
        call dword ptr [g_5e0350d0]
        test eax, eax
        jz L_f600
        mov eax, esi
        jmp L_f61d
L_f600:
        lea eax, [ebp-0x1c]
        push eax
        push esi
        push offset g_5e03662c
        push esi
        push ebx
        call dword ptr [g_5e0350cc]
        test eax, eax
        jz L_f6e8
        push 2
        pop eax
L_f61d:
        mov dword ptr [g_5e77aa64], eax
L_f622:
        cmp eax, 2
        jnz L_f64b
        mov eax, dword ptr [ebp+0x1c]
        cmp eax, ebx
        jnz L_f633
        mov eax, dword ptr [g_5e77aa7c]
L_f633:
        push dword ptr [ebp+0x14]
        push dword ptr [ebp+0x10]
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+0x8]
        push eax
        call dword ptr [g_5e0350cc]
        jmp L_f6ea
L_f64b:
        cmp eax, 1
        jnz L_f6e8
        cmp dword ptr [ebp+0x18], ebx
        jnz L_f661
        mov eax, dword ptr [g_5e77aa8c]
        mov dword ptr [ebp+0x18], eax
L_f661:
        push ebx
        push ebx
        push dword ptr [ebp+0x10]
        push dword ptr [ebp+0xc]
        mov eax, dword ptr [ebp+0x20]
        neg eax
        sbb eax, eax
        and eax, 8
        inc eax
        push eax
        push dword ptr [ebp+0x18]
        call dword ptr [g_5e0350c8]
        mov dword ptr [ebp-0x20], eax
        cmp eax, ebx
        jz L_f6e8
        mov dword ptr [ebp-4], ebx
        lea edi, [eax+eax]
        mov eax, edi
        add eax, 3
        and al, 0xfc
        call FUN_5e030b60
        mov dword ptr [ebp-0x18], esp
        mov esi, esp
        mov dword ptr [ebp-0x24], esi
        push edi
        push ebx
        push esi
        call FUN_5e02e310
        add esp, 0xc
        jmp L_f6b7
        /* __except filter: return 1 (EXCEPTION_EXECUTE_HANDLER) */
        push 1
        pop eax
        ret
        /* __except handler: restore ESP, clear regs, fall through */
        mov esp, dword ptr [ebp-0x18]
        xor ebx, ebx
        xor esi, esi
L_f6b7:
        or dword ptr [ebp-4], 0xffffffff
        cmp esi, ebx
        jz L_f6e8
        push dword ptr [ebp-0x20]
        push esi
        push dword ptr [ebp+0x10]
        push dword ptr [ebp+0xc]
        push 1
        push dword ptr [ebp+0x18]
        call dword ptr [g_5e0350c8]
        cmp eax, ebx
        jz L_f6e8
        push dword ptr [ebp+0x14]
        push eax
        push esi
        push dword ptr [ebp+0x8]
        call dword ptr [g_5e0350d0]
        jmp L_f6ea
L_f6e8:
        xor eax, eax
L_f6ea:
        lea esp, [ebp-0x34]
        mov ecx, dword ptr [ebp-0x10]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
