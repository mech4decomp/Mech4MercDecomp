/* FUN_006bfc90 - gosScript string hash-table init */

extern int g_82e21c;                /* 0x0082e21c */
extern int g_83a104;                /* 0x0083a104 */
extern int g_839ef0[];              /* 0x00839ef0 */
extern int g_7b6310[];              /* 0x007b6310 */
extern int g_7b6584[];              /* 0x007b6584 */

extern void __cdecl FUN_006f3c80(void);

void __declspec(naked) func_006bfc90(void)
{
    __asm {
        push ecx
        mov eax, dword ptr [g_82e21c]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        push 0x1310
        call FUN_006f3c80
        mov edx, eax
        xor eax, eax
        mov ecx, 0x80
        mov edi, 0x839ef0
        mov dword ptr [g_83a104], edx
        rep stosd
        xor ebp, ebp
L_bd:
        mov ecx, dword ptr [ebp + g_7b6310]
        mov ebx, dword ptr [ebp + g_7b6584]
        mov dword ptr [edx+0xc], ecx
        or ecx, -1
        xor eax, eax
        mov edi, ebx
        mov dword ptr [edx], 0x0
        mov dword ptr [edx+0x8], ebx
        repne scasb
        not ecx
        dec ecx
        mov esi, eax
        jz L_f1
L_e5:
        movsx edi, byte ptr [ebx + esi]
        inc esi
        cmp esi, ecx
        lea eax, [edi + eax*8]
        jc L_e5
L_f1:
        mov esi, eax
        shl esi, 0x10
        lea esi, [esi + ecx + 0x100]
        and ecx, 0x7
        and eax, 0xf
        lea eax, [ecx + eax*8]
        mov ecx, dword ptr [eax*4 + g_839ef0]
        test ecx, ecx
        mov dword ptr [edx+0x4], esi
        jz L_16
        mov dword ptr [edx], ecx
L_16:
        mov dword ptr [eax*4 + g_839ef0], edx
        add ebp, 0x4
        add edx, 0x10
        cmp ebp, 0x274
        jc L_bd
        mov dword ptr [esp+0x10], 0x0
        mov ebx, 0x7b60c0
L_38:
        mov eax, dword ptr [esp+0x10]
        mov esi, dword ptr [ebx]
        mov dword ptr [edx+0xc], eax
        or ecx, -1
        xor eax, eax
        mov edi, esi
        mov dword ptr [edx], 0x0
        mov dword ptr [edx+0x8], esi
        repne scasb
        not ecx
        dec ecx
        mov edi, eax
        jz L_67
L_5a:
        movsx ebp, byte ptr [esi + edi]
        inc edi
        cmp edi, ecx
        lea eax, [ebp + eax*8]
        jc L_5a
L_67:
        mov esi, eax
        shl esi, 0x10
        lea esi, [esi + ecx + 0x200]
        and ecx, 0x7
        and eax, 0xf
        lea eax, [ecx + eax*8]
        mov ecx, dword ptr [eax*4 + g_839ef0]
        test ecx, ecx
        mov dword ptr [edx+0x4], esi
        jz L_8c
        mov dword ptr [edx], ecx
L_8c:
        mov esi, dword ptr [esp+0x10]
        mov dword ptr [eax*4 + g_839ef0], edx
        add edx, 0x10
        inc esi
        add ebx, 0x4
        cmp ebx, 0x7b618c
        mov dword ptr [esp+0x10], esi
        jc L_38
        mov dword ptr [esp+0x10], 0x0
        mov ebx, 0x7b618c
L_b7:
        mov ecx, dword ptr [esp+0x10]
        mov esi, dword ptr [ebx]
        mov dword ptr [edx+0xc], ecx
        or ecx, -1
        xor eax, eax
        mov edi, esi
        mov dword ptr [edx], 0x0
        mov dword ptr [edx+0x8], esi
        repne scasb
        not ecx
        dec ecx
        mov edi, eax
        jz L_e6
L_d9:
        movsx ebp, byte ptr [esi + edi]
        inc edi
        cmp edi, ecx
        lea eax, [ebp + eax*8]
        jc L_d9
L_e6:
        mov esi, eax
        shl esi, 0x10
        lea esi, [esi + ecx + 0x400]
        and ecx, 0x7
        and eax, 0xf
        lea eax, [ecx + eax*8]
        mov ecx, dword ptr [eax*4 + g_839ef0]
        test ecx, ecx
        mov dword ptr [edx+0x4], esi
        jz L_0b
        mov dword ptr [edx], ecx
L_0b:
        mov esi, dword ptr [esp+0x10]
        mov dword ptr [eax*4 + g_839ef0], edx
        add edx, 0x10
        inc esi
        add ebx, 0x4
        cmp ebx, 0x7b6310
        mov dword ptr [esp+0x10], esi
        jc L_b7
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
