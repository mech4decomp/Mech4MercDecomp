/* FUN_10042dab __stdcall 0x10042DAB */
extern void __cdecl FUN_1003c5f0(void);
extern void __cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_1003ca70(void);
extern void __cdecl FUN_1003c500(void);
extern int g_10054b48;

__declspec(naked) void FUN_10042dab(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr [g_10054b48]
        push edi
        xor edi, edi
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 0xc], 7
L_42dc6:
        mov ebx, dword ptr [ebp - 8]
        push dword ptr [ebx + 0x1c]
        call FUN_1003c5f0
        push dword ptr [ebx]
        mov edx, eax
        mov dword ptr [ebp - 0x10], edx
        call FUN_1003c5f0
        add dword ptr [ebp - 8], 4
        pop ecx
        pop ecx
        add eax, edi
        mov ecx, dword ptr [ebp - 0x10]
        dec dword ptr [ebp - 0xc]
        lea edi, [eax + ecx*1 + 2]
        jnz L_42dc6
        lea eax, [esi + 0x38]
        mov dword ptr [ebp - 0xc], 0xc
        mov dword ptr [ebp - 8], eax
L_42dfe:
        mov ebx, dword ptr [ebp - 8]
        push dword ptr [ebx + 0x30]
        call FUN_1003c5f0
        push dword ptr [ebx]
        mov edx, eax
        mov dword ptr [ebp - 0x10], edx
        call FUN_1003c5f0
        add dword ptr [ebp - 8], 4
        pop ecx
        pop ecx
        add eax, edi
        mov ecx, dword ptr [ebp - 0x10]
        dec dword ptr [ebp - 0xc]
        lea edi, [eax + ecx*1 + 2]
        jnz L_42dfe
        push dword ptr [esi + 0x98]
        call FUN_1003c5f0
        push dword ptr [esi + 0x9c]
        mov ebx, eax
        call FUN_1003c5f0
        push dword ptr [esi + 0xa0]
        add eax, edi
        lea edi, [eax + ebx*1 + 2]
        call FUN_1003c5f0
        push dword ptr [esi + 0xa4]
        lea edi, [edi + eax*1 + 1]
        call FUN_1003c5f0
        push dword ptr [esi + 0xa8]
        lea edi, [edi + eax*1 + 1]
        call FUN_1003c5f0
        lea eax, [edi + eax*1 + 1]
        add eax, 0xac
        push eax
        call FUN_1003c3c5
        mov ebx, eax
        add esp, 0x18
        test ebx, ebx
        jz L_42fd6
        push 0xac
        lea edi, [ebx + 0xac]
        push dword ptr [g_10054b48]
        push ebx
        call FUN_1003ca70
        lea eax, [esi + 0x1c]
        mov dword ptr [ebp - 8], ebx
        add esp, 0xc
        sub dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 0xc], ebx
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0x10], 7
L_42ebc:
        mov eax, dword ptr [ebp - 0xc]
        mov dword ptr [eax], edi
        mov eax, dword ptr [ebp - 4]
        push dword ptr [eax - 0x1c]
        push edi
        call FUN_1003c500
        push eax
        call FUN_1003c5f0
        mov ecx, dword ptr [ebp - 8]
        lea edi, [edi + eax*1 + 1]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*1], edi
        push dword ptr [eax]
        push edi
        call FUN_1003c500
        push eax
        call FUN_1003c5f0
        add dword ptr [ebp - 0xc], 4
        add dword ptr [ebp - 4], 4
        add esp, 0x18
        dec dword ptr [ebp - 0x10]
        lea edi, [edi + eax*1 + 1]
        jnz L_42ebc
        lea eax, [ebx + 0x68]
        mov dword ptr [ebp - 0x10], 0xc
        mov dword ptr [ebp - 0xc], eax
        lea eax, [esi + 0x38]
        mov dword ptr [ebp - 4], eax
        jmp L_42f1a
L_42f17:
        mov eax, dword ptr [ebp - 4]
L_42f1a:
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*1], edi
        push dword ptr [eax]
        push edi
        call FUN_1003c500
        push eax
        call FUN_1003c5f0
        lea edi, [edi + eax*1 + 1]
        mov eax, dword ptr [ebp - 0xc]
        mov dword ptr [eax], edi
        mov eax, dword ptr [ebp - 4]
        push dword ptr [eax + 0x30]
        push edi
        call FUN_1003c500
        push eax
        call FUN_1003c5f0
        add dword ptr [ebp - 4], 4
        add dword ptr [ebp - 0xc], 4
        add esp, 0x18
        dec dword ptr [ebp - 0x10]
        lea edi, [edi + eax*1 + 1]
        jnz L_42f17
        mov dword ptr [ebx + 0x98], edi
        push dword ptr [esi + 0x98]
        push edi
        call FUN_1003c500
        push eax
        call FUN_1003c5f0
        lea edi, [edi + eax*1 + 1]
        mov dword ptr [ebx + 0x9c], edi
        push dword ptr [esi + 0x9c]
        push edi
        call FUN_1003c500
        push eax
        call FUN_1003c5f0
        lea edi, [edi + eax*1 + 1]
        mov dword ptr [ebx + 0xa0], edi
        push dword ptr [esi + 0xa0]
        push edi
        call FUN_1003c500
        push eax
        call FUN_1003c5f0
        lea edi, [edi + eax*1 + 1]
        mov dword ptr [ebx + 0xa4], edi
        push dword ptr [esi + 0xa4]
        push edi
        call FUN_1003c500
        push eax
        call FUN_1003c5f0
        lea eax, [eax + edi*1 + 1]
        add esp, 0x30
        mov dword ptr [ebx + 0xa8], eax
L_42fd6:
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        leave
        ret
    }
}
