/* FUN_006bfe50 - gosScript string hash lookup/insert */

extern int g_82f328;                /* 0x0082f328 */
extern int g_83a0f4;                /* 0x0083a0f4 */
extern unsigned char g_82ebf8[];    /* 0x0082ebf8 */
extern int g_83a100;                /* 0x0083a100 */
extern int g_839ef0[];              /* 0x00839ef0 */
extern int g_83a0f8;                /* 0x0083a0f8 */

void __declspec(naked) func_006bfe50(void)
{
    __asm {
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [g_82f328]
        xor eax, eax
        mov al, byte ptr [ebx]
        xor edx, edx
        mov dl, byte ptr [ebx+0x1]
        lea ecx, [ebx+0x1]
        push ebp
        push esi
        push edi
        mov dword ptr [g_83a0f4], eax
        cmp byte ptr [edx + g_82ebf8], 0x0
        jz L_8d
L_77:
        lea eax, [edx + eax*8]
        inc ecx
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp byte ptr [edx + g_82ebf8], 0x0
        jnz L_77
        mov dword ptr [g_83a0f4], eax
L_8d:
        sub cl, bl
        mov byte ptr [g_83a100], cl
        mov ebp, dword ptr [g_83a100]
        and ebp, 0xff
        mov ecx, eax
        mov edx, ebp
        and ecx, 0xf
        and edx, 0x7
        lea ecx, [edx + ecx*8]
        mov edi, dword ptr [ecx*4 + g_839ef0]
        shl eax, 0x10
        test edi, edi
        lea eax, [eax + ebp + 0x400]
        mov dword ptr [g_83a0f8], ecx
        mov dword ptr [esp+0x18], eax
        mov dword ptr [esp+0x10], edi
        jz L_96
L_d5:
        cmp dword ptr [edi+0x4], eax
        jnz L_16
        mov eax, dword ptr [edi+0x8]
        mov cl, byte ptr [eax]
        test cl, cl
        jz L_f5
        mov esi, ebx
        sub esi, eax
L_e7:
        mov dl, byte ptr [esi + eax]
        inc eax
        cmp dl, cl
        jnz L_16
        mov cl, byte ptr [eax]
        test cl, cl
        jnz L_e7
L_f5:
        mov al, byte ptr [ebx + ebp]
        add ebx, ebp
        cmp al, 0x20
        mov dword ptr [g_82f328], ebx
        jnz L_0b
        inc ebx
        mov dword ptr [g_82f328], ebx
L_0b:
        mov eax, dword ptr [edi+0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret
L_16:
        mov esi, dword ptr [edi]
        test esi, esi
        mov dword ptr [esp+0x14], edi
        jz L_96
L_20:
        mov eax, dword ptr [esp+0x18]
        cmp dword ptr [esi+0x4], eax
        jnz L_4a
        mov eax, dword ptr [esi+0x8]
        mov cl, byte ptr [eax]
        test cl, cl
        jz L_5a
        mov edi, ebx
        sub edi, eax
L_36:
        mov dl, byte ptr [edi + eax]
        inc eax
        cmp dl, cl
        jnz L_46
        mov cl, byte ptr [eax]
        test cl, cl
        jz L_56
        jmp L_36
L_46:
        mov edi, dword ptr [esp+0x10]
L_4a:
        mov dword ptr [esp+0x14], esi
        mov esi, dword ptr [esi]
        test esi, esi
        jz L_96
        jmp L_20
L_56:
        mov edi, dword ptr [esp+0x10]
L_5a:
        mov al, byte ptr [ebx + ebp]
        add ebx, ebp
        cmp al, 0x20
        mov dword ptr [g_82f328], ebx
        jnz L_70
        inc ebx
        mov dword ptr [g_82f328], ebx
L_70:
        mov eax, dword ptr [esp+0x14]
        test eax, eax
        jz L_8b
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [g_83a0f8]
        mov dword ptr [eax], ecx
        mov dword ptr [esi], edi
        mov dword ptr [edx*4 + g_839ef0], esi
L_8b:
        mov eax, dword ptr [esi+0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret
L_96:
        pop edi
        pop esi
        pop ebp
        or eax, 0xffffffff
        pop ebx
        add esp, 0xc
        ret
    }
}
