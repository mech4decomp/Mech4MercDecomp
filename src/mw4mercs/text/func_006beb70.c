/* FUN_006beb70 - gosScript anim/script holder command dispatch (RET 0x10) */

extern unsigned char g_82e238;      /* 0x0082e238 */
extern int g_82f348;                /* 0x0082f348 */
extern int g_82f328;                /* 0x0082f328 */
extern int g_82f338;                /* 0x0082f338 */
extern int g_82f33c;                /* 0x0082f33c */
extern int g_82f320;                /* 0x0082f320 */
extern int g_82f3d4;                /* 0x0082f3d4 */
extern int g_82f3d8;                /* 0x0082f3d8 */
extern int g_82f3b0;                /* 0x0082f3b0 */
extern int g_832af0[];              /* 0x00832af0 */
extern int g_82ef08[];              /* 0x0082ef08 */
extern int g_82ee88[];              /* 0x0082ee88 */
extern void (*g_76b304)(void);      /* 0x0076b304 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006ce300(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006c12e0(void);
extern void __cdecl FUN_006cbfe0(void);
extern void __cdecl FUN_006ce3b0(void);
extern void __cdecl FUN_00723c90(void);

void __declspec(naked) func_006beb70(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x80
        push ebx
        mov ebx, dword ptr [ebp+0x10]
        cmp ebx, 0x1
        jnz L_c0b
        mov eax, dword ptr [ebp+0x14]
        test eax, eax
        jnz L_9f
        push 0x79bd50
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz L_9f
        int 3
L_9f:
        call FUN_006ce300
        mov al, byte ptr [g_82e238]
        test al, al
        jnz L_bbf
        push 0x79b618
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz L_bbf
        int 3
L_bbf:
        or ecx, -1
        push esi
        push edi
        mov edi, dword ptr [ebp+0xc]
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 0x2
        lea edx, [ebp-0x80]
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        lea ecx, [ebp-0x80]
        push ecx
        call dword ptr [g_76b304]
        mov eax, dword ptr [g_82f348]
        mov esi, dword ptr [ebp+0x8]
        xor edi, edi
        add esp, 0x4
        cmp eax, edi
        jz L_c31
L_ff:
        cmp esi, eax
        jz L_c2d
        mov eax, dword ptr [eax]
        cmp eax, edi
        jnz L_ff
        jmp L_c31
L_c0b:
        cmp ebx, 0x6
        jnz L_9f
        push 0x79bd1c
        call FUN_006fabf0
        add esp, 0x4
        test eax, eax
        jz L_de4
        int 3
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
L_c2d:
        cmp eax, edi
        jnz L_c43
L_c31:
        push 0x79b63c
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz L_c43
        int 3
L_c43:
        mov edx, dword ptr [esi+0x8]
        lea eax, [ebp-0x80]
        mov dword ptr [g_82f328], eax
        lea eax, [ebp-0x80]
        and eax, 0x7ff
        lea ecx, [eax+eax*2]
        mov dword ptr [g_82f338], esi
        mov dword ptr [g_82f33c], edx
        mov dword ptr [ecx*4 + g_832af0], edi
        call FUN_006c12e0
        cmp eax, 0x68
        jz L_ca3
        cmp ebx, 0x6
        jz L_ddd
        push 0x79bcd0
        call FUN_006fabf0
        add esp, 0x4
        test eax, eax
        jz L_ddd
        int 3
        call FUN_006ce3b0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
L_ca3:
        mov edx, dword ptr [g_82f320]
        mov esi, dword ptr [edx]
        lea eax, [ebx-1]
        cmp eax, 0x4
        ja L_dd6
        __emit 0xFF  /* __emit: MSVC6 re-bases jmp [eax*4+imm32] via EBX; emit reference FF 24 85 form */
        __emit 0x24
        __emit 0x85
        __emit 0xEC
        __emit 0xED
        __emit 0x6B
        __emit 0x00
        /* case 1 (0x6becbe) */
        mov edx, dword ptr [esi+0x34]
        push 0x4
        or edx, 0x1
        push esi
        mov dword ptr [esi+0x34], edx
        call FUN_006cbfe0
        call FUN_006ce3b0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        /* case 2 (0x6becdd) */
        mov edx, dword ptr [esi+0x34]
        push 0x5
        and edx, 0xfffffffe
        push esi
        mov dword ptr [esi+0x34], edx
        call FUN_006cbfe0
        call FUN_006ce3b0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        /* case 3 (0x6becfc) */
        mov eax, dword ptr [g_82f3d4]
        cmp eax, edi
        jz L_d0d
        push 0x3
        push eax
        call FUN_006cbfe0
L_d0d:
        mov dword ptr [g_82f3d4], edi
        mov dword ptr [g_82f3d8], edi
        call FUN_006ce3b0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        /* case 4 (0x6bed27) */
        mov eax, dword ptr [g_82f3d4]
        cmp eax, esi
        jz L_ddd
        cmp eax, edi
        jz L_d40
        push 0x3
        push eax
        call FUN_006cbfe0
L_d40:
        mov eax, dword ptr [esi+0x8]
        mov dword ptr [g_82f3d4], esi
        mov dword ptr [g_82f3d8], eax
        call FUN_00723c90
        mov ecx, dword ptr [g_82f3d4]
        push 0x2
        push ecx
        call FUN_006cbfe0
        call FUN_006ce3b0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        /* case 5 (0x6bed6f) */
        mov eax, dword ptr [g_82f3b0]
        inc eax
        cmp eax, 0x20
        mov dword ptr [g_82f3b0], eax
        jbe L_d9f
        push 0x79bca0
        call FUN_006fabf0
        add esp, 0x4
        test eax, eax
        jz L_ddd
        int 3
        call FUN_006ce3b0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
L_d9f:
        mov ecx, dword ptr [ebp+0x14]
        mov ecx, dword ptr [ecx]
        mov edx, eax
        push 0x1
        shl edx, 0x5
        push esi
        mov dword ptr [edx + g_82ef08], ecx
        mov dword ptr [eax*4 + g_82ee88], 0xffffffff
        call FUN_006cbfe0
        dec dword ptr [g_82f3b0]
        call FUN_006ce3b0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
L_dd6:
        push ebx
        push esi
        call FUN_006cbfe0
L_ddd:
        call FUN_006ce3b0
        pop edi
        pop esi
L_de4:
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}
