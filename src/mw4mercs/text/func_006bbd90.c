/* FUN_006bbd90 - gosScript string-hash lookup (RET 0x8) */

extern unsigned char g_82e238;      /* 0x0082e238 */
extern unsigned short g_792748;     /* 0x00792748 */
extern int g_82f348;                /* 0x0082f348 */
extern int g_76b41c;                /* 0x0076b41c */

extern void __cdecl FUN_006fab90(void);

void __declspec(naked) func_006bbd90(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x104
        mov al, byte ptr [g_82e238]
        test al, al
        jnz L1
        push 0x79b618
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz L1
        int 3
L1:
        mov ax, word ptr [g_792748]
        push ebx
        push esi
        push edi
        mov word ptr [ebp-0x104], ax
        xor eax, eax
        mov ecx, 0x40
        lea edi, [ebp-0x102]
        rep stosd
        or ecx, -1
        stosw
        mov edi, dword ptr [ebp+0x8]
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, -1
        mov esi, edi
        lea edx, [ebp-0x104]
        mov edi, edx
        repne scasb
        dec edi
        mov ecx, ebx
        shr ecx, 0x2
        rep movsd
        mov ecx, ebx
        and ecx, 0x3
        rep movsb
        or ecx, -1
        mov edi, 0x792748
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, -1
        mov esi, edi
        lea edx, [ebp-0x104]
        mov edi, edx
        repne scasb
        mov ecx, ebx
        shr ecx, 0x2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 0x3
        rep movsb
        mov esi, dword ptr [g_82f348]
        test esi, esi
        jz L2
        mov ebx, dword ptr [ebp+0xc]
        mov edi, dword ptr [g_76b41c]
L3:
        mov ecx, dword ptr [esi+0x8]
        lea eax, [ebp-0x104]
        push eax
        add ecx, 0x44
        push ecx
        call edi
        add esp, 0x8
        test eax, eax
        jnz L4
        cmp ebx, dword ptr [esi+0x1c]
        jz L5
L4:
        mov esi, dword ptr [esi]
        test esi, esi
        jnz L3
L2:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
L5:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}
