/* FUN_1003a220 __cdecl 0x1003A220 */
extern void __cdecl FUN_1003a444(void);
extern void __cdecl FUN_10037940(void);
extern void *g_10049130; /* IAT LCMapStringW */
extern void *g_1004912c; /* IAT LCMapStringA */
extern void *g_10049100; /* IAT MultiByteToWideChar */
extern void *g_100490fc; /* IAT WideCharToMultiByte */
extern int g_10075694;
extern int g_1007568c;

__declspec(naked) void FUN_1003a220(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x1004b720
        push 0x1003eb9c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x18], esp
        xor edi, edi
        cmp dword ptr [g_10075694], edi
        jnz L_3a296
        push edi
        push edi
        push 1
        pop ebx
        push ebx
        push 0x1004b71c
        mov esi, 0x100
        push esi
        push edi
        call dword ptr [g_10049130]
        test eax, eax
        jz L_3a274
        mov dword ptr [g_10075694], ebx
        jmp L_3a296
L_3a274:
        push edi
        push edi
        push ebx
        push 0x1004b718
        push esi
        push edi
        call dword ptr [g_1004912c]
        test eax, eax
        jz L_3a3ae
        mov dword ptr [g_10075694], 2
L_3a296:
        cmp dword ptr [ebp + 0x14], edi
        jle L_3a2ab
        push dword ptr [ebp + 0x14]
        push dword ptr [ebp + 0x10]
        call FUN_1003a444
        pop ecx
        pop ecx
        mov dword ptr [ebp + 0x14], eax
L_3a2ab:
        mov eax, dword ptr [g_10075694]
        cmp eax, 2
        jnz L_3a2d2
        push dword ptr [ebp + 0x1c]
        push dword ptr [ebp + 0x18]
        push dword ptr [ebp + 0x14]
        push dword ptr [ebp + 0x10]
        push dword ptr [ebp + 0xc]
        push dword ptr [ebp + 0x8]
        call dword ptr [g_1004912c]
        jmp L_3a3b0
L_3a2d2:
        cmp eax, 1
        jnz L_3a3ae
        cmp dword ptr [ebp + 0x20], edi
        jnz L_3a2e8
        mov eax, dword ptr [g_1007568c]
        mov dword ptr [ebp + 0x20], eax
L_3a2e8:
        push edi
        push edi
        push dword ptr [ebp + 0x14]
        push dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x24]
        neg eax
        sbb eax, eax
        and eax, 8
        inc eax
        push eax
        push dword ptr [ebp + 0x20]
        call dword ptr [g_10049100]
        mov ebx, eax
        mov dword ptr [ebp - 0x1c], ebx
        cmp ebx, edi
        jz L_3a3ae
        mov dword ptr [ebp - 4], edi
        lea eax, [ebx + ebx*1]
        add eax, 3
        and al, 0xfc
        call FUN_10037940
        mov dword ptr [ebp - 0x18], esp
        mov eax, esp
        mov dword ptr [ebp - 0x24], eax
        or dword ptr [ebp - 4], 0xffffffff
        jmp L_3a343
        /* SEH filter: return EXCEPTION_EXECUTE_HANDLER */
        push 1
        pop eax
        ret
        /* SEH handler body */
        mov esp, dword ptr [ebp - 0x18]
        xor edi, edi
        mov dword ptr [ebp - 0x24], edi
        or dword ptr [ebp - 4], 0xffffffff
        mov ebx, dword ptr [ebp - 0x1c]
L_3a343:
        cmp dword ptr [ebp - 0x24], edi
        jz L_3a3ae
        push ebx
        push dword ptr [ebp - 0x24]
        push dword ptr [ebp + 0x14]
        push dword ptr [ebp + 0x10]
        push 1
        push dword ptr [ebp + 0x20]
        call dword ptr [g_10049100]
        test eax, eax
        jz L_3a3ae
        push edi
        push edi
        push ebx
        push dword ptr [ebp - 0x24]
        push dword ptr [ebp + 0xc]
        push dword ptr [ebp + 0x8]
        call dword ptr [g_10049130]
        mov esi, eax
        mov dword ptr [ebp - 0x28], esi
        cmp esi, edi
        jz L_3a3ae
        test byte ptr [ebp + 0xd], 4
        jz L_3a3c2
        cmp dword ptr [ebp + 0x1c], edi
        jz L_3a43d
        cmp esi, dword ptr [ebp + 0x1c]
        jg L_3a3ae
        push dword ptr [ebp + 0x1c]
        push dword ptr [ebp + 0x18]
        push ebx
        push dword ptr [ebp - 0x24]
        push dword ptr [ebp + 0xc]
        push dword ptr [ebp + 0x8]
        call dword ptr [g_10049130]
        test eax, eax
        jnz L_3a43d
L_3a3ae:
        xor eax, eax
L_3a3b0:
        lea esp, [ebp - 0x38]
        mov ecx, dword ptr [ebp - 0x10]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
L_3a3c2:
        mov dword ptr [ebp - 4], 1
        lea eax, [esi + esi*1]
        add eax, 3
        and al, 0xfc
        call FUN_10037940
        mov dword ptr [ebp - 0x18], esp
        mov ebx, esp
        mov dword ptr [ebp - 0x20], ebx
        or dword ptr [ebp - 4], 0xffffffff
        jmp L_3a3f6
        /* SEH filter: return EXCEPTION_EXECUTE_HANDLER */
        push 1
        pop eax
        ret
        /* SEH handler body */
        mov esp, dword ptr [ebp - 0x18]
        xor edi, edi
        xor ebx, ebx
        or dword ptr [ebp - 4], 0xffffffff
        mov esi, dword ptr [ebp - 0x28]
L_3a3f6:
        cmp ebx, edi
        jz L_3a3ae
        push esi
        push ebx
        push dword ptr [ebp - 0x1c]
        push dword ptr [ebp - 0x24]
        push dword ptr [ebp + 0xc]
        push dword ptr [ebp + 0x8]
        call dword ptr [g_10049130]
        test eax, eax
        jz L_3a3ae
        cmp dword ptr [ebp + 0x1c], edi
        push edi
        push edi
        jnz L_3a41d
        push edi
        push edi
        jmp L_3a423
L_3a41d:
        push dword ptr [ebp + 0x1c]
        push dword ptr [ebp + 0x18]
L_3a423:
        push esi
        push ebx
        push 0x220
        push dword ptr [ebp + 0x20]
        call dword ptr [g_100490fc]
        mov esi, eax
        cmp esi, edi
        jz L_3a3ae
L_3a43d:
        mov eax, esi
        jmp L_3a3b0
    }
}
