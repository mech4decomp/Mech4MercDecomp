/* FUN_10040026 __stdcall 0x10040026 */
extern void __cdecl FUN_10040617(void);
extern void __cdecl FUN_10037bf0(void);
extern void __cdecl FUN_10043b70(void);
extern void __cdecl FUN_1003c5f0(void);
extern void __cdecl FUN_1004047a(void);
extern void __cdecl FUN_10040499(void);
extern void *g_10075718; /* IAT */
extern int g_100756fc;
extern int g_1007570c;
extern int g_10075704;
extern int g_10075708;
extern int g_10075710;
extern int g_10075714;
extern int g_100756f8;
extern int g_10075700;
extern char g_10075711;

__declspec(naked) void FUN_10040026(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x78
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 8]
        call FUN_10040617
        pop ecx
        mov esi, eax
        lea eax, [ebp - 0x78]
        push 0x78
        push eax
        mov eax, dword ptr [g_100756fc]
        neg eax
        sbb eax, eax
        and ax, 0xf005
        add eax, 0x1002
        push eax
        push esi
        call dword ptr [g_10075718]
        test eax, eax
        jz L_40175
        lea eax, [ebp - 0x78]
        push eax
        push dword ptr [g_1007570c]
        call FUN_10037bf0
        pop ecx
        mov ebx, 0xfffff002
        test eax, eax
        pop ecx
        mov edi, 0x1001
        jnz L_40141
        lea eax, [ebp - 0x78]
        push 0x78
        push eax
        mov eax, dword ptr [g_10075704]
        neg eax
        sbb eax, eax
        and eax, ebx
        add eax, edi
        push eax
        push esi
        call dword ptr [g_10075718]
        test eax, eax
        jz L_40175
        lea eax, [ebp - 0x78]
        push eax
        push dword ptr [g_10075708]
        call FUN_10037bf0
        pop ecx
        test eax, eax
        pop ecx
        jnz L_400d4
        or word ptr [g_10075710], 0x304
        mov dword ptr [g_10075714], esi
L_400cc:
        mov dword ptr [g_100756f8], esi
        jmp L_40141
L_400d4:
        test byte ptr [g_10075710], 2
        jnz L_40141
        mov eax, dword ptr [g_10075700]
        test eax, eax
        jz L_40120
        push eax
        lea eax, [ebp - 0x78]
        push eax
        push dword ptr [g_10075708]
        call FUN_10043b70
        add esp, 0xc
        test eax, eax
        jnz L_40120
        push dword ptr [g_10075708]
        or dword ptr [g_10075710], 2
        mov dword ptr [g_10075714], esi
        call FUN_1003c5f0
        cmp eax, dword ptr [g_10075700]
        pop ecx
        jnz L_40141
        jmp L_400cc
L_40120:
        test byte ptr [g_10075710], 1
        jnz L_40141
        push esi
        call FUN_1004047a
        test eax, eax
        pop ecx
        jz L_40141
        or dword ptr [g_10075710], 1
        mov dword ptr [g_10075714], esi
L_40141:
        mov ecx, dword ptr [g_10075710]
        mov eax, 0x300
        and ecx, eax
        cmp ecx, eax
        jz L_40216
        lea eax, [ebp - 0x78]
        push 0x78
        push eax
        mov eax, dword ptr [g_10075704]
        neg eax
        sbb eax, eax
        and eax, ebx
        add eax, edi
        push eax
        push esi
        call dword ptr [g_10075718]
        test eax, eax
        jnz L_40184
L_40175:
        and dword ptr [g_10075710], 0
        push 1
        pop eax
        jmp L_40223
L_40184:
        lea eax, [ebp - 0x78]
        push eax
        push dword ptr [g_10075708]
        call FUN_10037bf0
        pop ecx
        test eax, eax
        pop ecx
        jnz L_401ca
        or byte ptr [g_10075711], 2
        xor edi, edi
        cmp dword ptr [g_10075704], edi
        jnz L_40201
        cmp dword ptr [g_10075700], edi
        jz L_40201
        push dword ptr [g_10075708]
        call FUN_1003c5f0
        cmp eax, dword ptr [g_10075700]
        pop ecx
        jnz L_40201
        push 1
        jmp L_401f5
L_401ca:
        xor edi, edi
        cmp dword ptr [g_10075704], edi
        jnz L_40216
        mov eax, dword ptr [g_10075700]
        cmp eax, edi
        jz L_40216
        push eax
        lea eax, [ebp - 0x78]
        push eax
        push dword ptr [g_10075708]
        call FUN_10043b70
        add esp, 0xc
        test eax, eax
        jnz L_40216
        push edi
L_401f5:
        push esi
        call FUN_10040499
        pop ecx
        test eax, eax
        pop ecx
        jz L_40216
L_40201:
        or byte ptr [g_10075711], 1
        cmp dword ptr [g_100756f8], edi
        jnz L_40216
        mov dword ptr [g_100756f8], esi
L_40216:
        mov eax, dword ptr [g_10075710]
        not eax
        shr eax, 2
        and eax, 1
L_40223:
        pop edi
        pop esi
        pop ebx
        leave
        ret 4
    }
}
