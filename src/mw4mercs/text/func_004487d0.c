/* MLR mesh/render function FUN_004487d0 (1012 bytes, __thiscall RET 0xc) */

extern void __cdecl FUN_00454f60(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_0048f380(void);
extern void __cdecl FUN_00448d80(void);

extern float g_76d040;   /* 0x0076d040 */
extern float g_76d978;   /* 0x0076d978 */
extern float g_76d064;   /* 0x0076d064 */
extern int   g_7b2238;   /* 0x007b2238 */
extern int  *g_7da848;   /* 0x007da848 */
extern void *g_76b320;   /* IAT 0x0076b320 */
extern void *g_76b420;   /* IAT 0x0076b420 */

__declspec(naked) void func_004487d0(void)
{
    __asm {
        mov eax, dword ptr [esp + 0xc]
        sub esp, 0x81c
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x834]
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x834]
        push edi
        push ecx
        mov ecx, esi
        call FUN_00454f60
        mov edx, dword ptr [edi]
        push 0x1
        lea ebx, [esi + 0x188]
        push ebx
        mov ecx, edi
        mov dword ptr [esi], 0x76e858
        call dword ptr [edx + 0x20]
        mov edx, dword ptr [eax]
        push 0x1
        lea ebp, [esi + 0x189]
        push ebp
        mov ecx, eax
        call dword ptr [edx + 0x20]
        mov eax, dword ptr [edi]
        push 0x1
        lea ecx, [esi + 0x18b]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x20]
        mov edx, dword ptr [eax]
        lea ecx, [esi + 0x18c]
        push 0x1
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x20]
        cmp dword ptr [esp + 0x838], 0x4
        jle L_44886a
        lea ebx, [esi + 0xc8]
        mov ebp, 0x20
L_448853:
        mov edx, dword ptr [edi]
        mov eax, ebx
        push 0x4
        push eax
        mov ecx, edi
        add ebx, 0x4
        call dword ptr [edx + 0x20]
        dec ebp
        jnz L_448853
        jmp L_44899f
L_44886a:
        mov eax, dword ptr [edi]
        push 0x4
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x20]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x20]
        mov edx, dword ptr [edi]
        push 0x4
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x20]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x20]
        fld dword ptr [esp + 0x1c]
        fmul dword ptr [g_76d040]
        mov edx, dword ptr [esp + 0x24]
        xor ecx, ecx
        mov cl, byte ptr [ebx]
        fadd dword ptr [esp + 0x24]
        mov dword ptr [esi + 0xc8], edx
        xor edx, edx
        mov dl, byte ptr [ebp]
        fstp dword ptr [esi + 0xd0]
        mov eax, dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x20]
        mov dword ptr [esi + 0xcc], eax
        fmul dword ptr [g_76d040]
        lea eax, [esi + 0xe8]
        shr ecx, 0x2
        shl ecx, 0x2
        fadd dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x14], ecx
        shr edx, 0x2
        shl edx, 0x2
        fstp dword ptr [esi + 0xd4]
        mov ecx, 0x6
        fild dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x14], edx
        fmul dword ptr [esp + 0x1c]
        fadd dword ptr [esp + 0x24]
        fst dword ptr [esi + 0xd8]
        fild dword ptr [esp + 0x14]
        fmul dword ptr [esp + 0x20]
        fadd dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x14]
        fstp dword ptr [esi + 0xdc]
        fld dword ptr [esp + 0x1c]
        fmul dword ptr [g_76d978]
        fadd st(0), st(1)
        fstp dword ptr [esi + 0xe0]
        fstp st(0)
        fld dword ptr [esp + 0x20]
        fmul dword ptr [g_76d978]
        fadd dword ptr [esp + 0x14]
        fstp dword ptr [esi + 0xe4]
L_448956:
        xor edx, edx
        mov dl, byte ptr [ebx]
        add eax, 0x10
        mov dword ptr [esp + 0x14], edx
        fild dword ptr [esp + 0x14]
        xor edx, edx
        dec ecx
        fmul dword ptr [esp + 0x1c]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [eax + -0x10]
        mov dl, byte ptr [ebp]
        mov dword ptr [esp + 0x14], edx
        fild dword ptr [esp + 0x14]
        fmul dword ptr [esp + 0x20]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [eax + -0xc]
        fld dword ptr [esp + 0x1c]
        fadd dword ptr [eax + -0x10]
        fstp dword ptr [eax + -0x8]
        fld dword ptr [esp + 0x20]
        fadd dword ptr [eax + -0xc]
        fstp dword ptr [eax + -0x4]
        jnz L_448956
L_44899f:
        lea ecx, [esi + 0x168]
        lea eax, [esi + 0xc8]
        mov edx, 0x8
L_4489b0:
        fld dword ptr [eax + 0x8]
        add ecx, 0x4
        fsub dword ptr [eax]
        add eax, 0x10
        dec edx
        fdivr dword ptr [g_76d064]
        fstp dword ptr [ecx + -0x24]
        fld dword ptr [eax + -0x4]
        fsub dword ptr [eax + -0xc]
        fdivr dword ptr [g_76d064]
        fstp dword ptr [ecx + -0x4]
        jnz L_4489b0
        mov eax, dword ptr [edi]
        push 0x4
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x20]
        mov edx, dword ptr [edi]
        push 0x1
        lea eax, [esp + 0x17]
        push eax
        mov ecx, edi
        mov bl, 0x1
        call dword ptr [edx + 0x20]
        mov ebp, dword ptr [g_7b2238]
        mov ecx, 0x7
        sub ecx, ebp
        mov edx, 0xff
        sar edx, cl
        mov cl, byte ptr [esp + 0x13]
        lea eax, [esi + 0xa8]
        mov edi, 0x8
        and cl, dl
        mov byte ptr [esp + 0x13], cl
L_448a1d:
        mov dl, cl
        or dl, bl
        neg dl
        sbb edx, edx
        neg edx
        mov dword ptr [eax], edx
        shl bl, 0x1
        add eax, 0x4
        dec edi
        jnz L_448a1d
        mov ebx, dword ptr [esi + 0x2c]
        and ebx, 0x3fff
        jg L_448a46
        mov dword ptr [esp + 0x18], 0x0
        jmp L_448a53
L_448a46:
        mov eax, dword ptr [g_7da848]
        mov ecx, dword ptr [eax + ebx*0x4 + 0x24]
        mov dword ptr [esp + 0x18], ecx
L_448a53:
        mov edx, dword ptr [esp + 0x18]
        mov edx, dword ptr [edx + 0x10]
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        test ebp, ebp
        jle L_448b7c
        movsx edi, byte ptr [edx + ebp*0x1 + -0x6]
        lea eax, [ebp + -0x7]
        push eax
        push edx
        lea ecx, [esp + 0x34]
        push ecx
        sub edi, 0x30
        call dword ptr [g_76b320]
        lea eax, [esi + 0xa8]
        add esp, 0xc
        mov byte ptr [esp + ebp*0x1 + 0x25], 0x0
        mov dword ptr [esi + edi*0x4 + 0xa8], ebx
        mov byte ptr [esp + 0x12], 0x1
        xor ebp, ebp
        mov ebx, eax
L_448aa6:
        mov dl, byte ptr [esp + 0x12]
        test byte ptr [esp + 0x13], dl
        jz L_448b47
        xor eax, eax
        mov al, byte ptr [esi + 0x189]
        xor ecx, ecx
        mov cl, byte ptr [esi + 0x18c]
        mov edi, 0x1
        sub ecx, ebp
        shl edi, cl
        mov ecx, eax
        mov eax, 0x7
        sub eax, ecx
        cdq
        idiv edi
        xor edx, edx
        mov dl, byte ptr [esi + 0x188]
        lea ecx, [esp + 0x42c]
        push eax
        mov eax, 0x7
        sub eax, edx
        cdq
        idiv edi
        push eax
        push ebp
        lea eax, [esp + 0x38]
        push eax
        push 0x76e848
        push ecx
        call dword ptr [g_76b420]
        mov ecx, dword ptr [g_7da848]
        add esp, 0x18
        push 0x0
        lea edx, [esp + 0x430]
        push edx
        call FUN_0048fac0
        test eax, eax
        jnz L_448b36
        mov ecx, dword ptr [g_7da848]
        push eax
        lea eax, [esp + 0x430]
        push eax
        call FUN_0048f380
L_448b36:
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx + 0x20]
        mov dword ptr [eax + 0x20], edx
        mov eax, dword ptr [eax + 0x1c]
        mov dword ptr [ebx], eax
        jmp L_448b4d
L_448b47:
        mov dword ptr [ebx], 0x0
L_448b4d:
        mov al, byte ptr [esp + 0x12]
        shl al, 0x1
        inc ebp
        add ebx, 0x4
        cmp ebp, 0x8
        mov byte ptr [esp + 0x12], al
        jl L_448aa6
        inc ebp
        cmp ebp, 0x8
        jge L_448b8b
        mov ecx, 0x8
        sub ecx, ebp
        lea edi, [esi + ebp*0x4 + 0xa8]
        xor eax, eax
        jmp L_448b89
L_448b7c:
        mov ecx, 0x8
        xor eax, eax
        lea edi, [esi + 0xa8]
L_448b89:
        rep stosd
L_448b8b:
        push 0x0
        mov ecx, esi
        mov byte ptr [esi + 0x18a], 0xff
        call FUN_00448d80
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [esi + 0x3c]
        and ecx, 0xfffffc5f
        or ecx, 0x40
        or eax, 0x3e0
        pop edi
        mov dword ptr [esi + 0x3c], eax
        mov dword ptr [esi + 0x30], ecx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x81c
        ret 0xc
    }
}
