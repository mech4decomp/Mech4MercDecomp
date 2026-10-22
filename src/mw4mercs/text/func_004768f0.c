/* FUN_004768f0 - MLR vertex transform / build (1090 B, __thiscall, 5 args) */

extern int g_7da848;
extern int g_7da864;
extern int g_7da600;
extern int g_7da5f4;
extern int g_7da5e8;
extern float g_76d064;
extern float g_7da87c;
extern float g_7da874;
extern float g_7da878;
extern float g_7da870;

extern void __cdecl FUN_0047b160(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_00421f00(void);

__declspec(naked) void func_004768f0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi+0x6c]
        test eax, eax
        jnz L476922
        mov eax, dword ptr [ebp+0x18]
        mov ecx, dword ptr [ebp+0x14]
        mov edx, dword ptr [ebp+0x10]
        push eax
        mov eax, dword ptr [ebp+0xc]
        push ecx
        mov ecx, dword ptr [ebp+0x8]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call FUN_0047b160
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
L476922:
        mov eax, dword ptr [esi+0x24]
        and eax, 0x3fff
        push edi
        mov byte ptr [ebp+0x17], 0x0
        mov dword ptr [ebp-0x10], 0x0
        mov dword ptr [ebp-0x14], 0x0
        jz L4769f9
        test eax, eax
        jle L4769f9
        mov edx, dword ptr [g_7da848]
        mov edi, dword ptr [edx+eax*4+0x24]
        test edi, edi
        jz L4769f9
        mov eax, dword ptr [edi]
        push 0x0
        mov ecx, edi
        call dword ptr [eax+0x4]
        mov ecx, eax
        call FUN_00491cd0
        cmp eax, 0x100
        jl L476980
        mov dword ptr [g_7da864], 0x1
        jmp L4769db
L476980:
        cmp eax, 0x80
        jl L476993
        mov dword ptr [g_7da864], 0x2
        jmp L4769db
L476993:
        cmp eax, 0x40
        jl L4769a4
        mov dword ptr [g_7da864], 0x4
        jmp L4769db
L4769a4:
        cmp eax, 0x20
        jl L4769b5
        mov dword ptr [g_7da864], 0x8
        jmp L4769db
L4769b5:
        cmp eax, 0x10
        jl L4769c6
        mov dword ptr [g_7da864], 0x10
        jmp L4769db
L4769c6:
        xor ecx, ecx
        cmp eax, 0x8
        setl cl
        dec ecx
        and ecx, 0xffffffe0
        add ecx, 0x40
        mov dword ptr [g_7da864], ecx
L4769db:
        mov al, byte ptr [edi+0x24]
        test al, al
        jnz L476a27
        mov edi, dword ptr [edi+0x28]
        test edi, edi
        jz L476a27
        mov edx, dword ptr [edi+0xc]
        mov eax, dword ptr [edi+0x1c]
        mov byte ptr [ebp+0x17], 0x1
        mov dword ptr [ebp-0x10], edx
        mov dword ptr [ebp-0x14], eax
L4769f9:
        mov ecx, dword ptr [esi+0x64]
        push ebx
        mov ebx, dword ptr [esi+0x18]
        cmp ebx, 0x100
        mov dword ptr [ebp-0x18], ecx
        mov dword ptr [ebp-0xc], ebx
        jle L476a18
        mov dword ptr [ebp-0xc], 0x100
        mov ebx, dword ptr [ebp-0xc]
L476a18:
        mov al, byte ptr [ebp+0x18]
        test al, al
        jz L476a2d
        mov edx, dword ptr [ebp+0xc]
        mov eax, dword ptr [edx+0x30]
        jmp L476a3a
L476a27:
        mov byte ptr [ebp+0x17], 0x0
        jmp L4769f9
L476a2d:
        mov ecx, dword ptr [ebp+0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ecx+0x10]
        shl eax, 0x5
        add eax, edx
L476a3a:
        cmp word ptr [esi+0x56], 0x0
        mov dword ptr [esi+0x44], eax
        mov word ptr [esi+0xa], 0x0
        jnz L476a54
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax+0x98]
L476a54:
        xor edi, edi
        cmp ebx, edi
        mov dword ptr [ebp-0x4], edi
        jle L476c0e
        mov dword ptr [ebp-0x8], edi
L476a64:
        mov ecx, dword ptr [g_7da600]
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx+edi], 0x0
        jnz L476a7a
        inc dword ptr [ebp-0x4]
        jmp L476bfa
L476a7a:
        mov edx, dword ptr [ebp-0x4]
        mov ecx, dword ptr [g_7da5f4]
        mov eax, edi
        sub eax, edx
        mov edx, dword ptr [esi+0x1c]
        mov word ptr [ecx+edi*2], ax
        mov ecx, dword ptr [esi+0x14]
        mov eax, dword ptr [ebp-0x8]
        add eax, ecx
        xor ecx, ecx
        mov cx, word ptr [esi+0xa]
        mov dword ptr [ebp-0x20], eax
        mov eax, dword ptr [esi+0x44]
        lea ebx, [edx+edi*8]
        shl ecx, 0x5
        add ecx, eax
        mov dword ptr [ebp-0x1c], ecx
        mov edx, dword ptr [ebp+0x8]
        mov eax, dword ptr [ebp-0x20]
        fld dword ptr [eax]
        fld dword ptr [eax+0x4]
        fld dword ptr [eax+0x8]
        mov eax, dword ptr [ebp-0x1c]
        fld dword ptr [edx+0x34]
        fmul st(0), st(2)
        fld dword ptr [edx+0x38]
        fmul st(0), st(2)
        fxch st(1)
        fadd dword ptr [edx+0x3c]
        fld dword ptr [edx+0x30]
        fmul st(0), st(5)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x14]
        fmul st(0), st(4)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x18]
        fmul st(0), st(3)
        fxch st(1)
        fstp dword ptr [eax+0xc]
        fadd dword ptr [edx+0x1c]
        fld dword ptr [edx+0x10]
        fmul st(0), st(5)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x24]
        fmul st(0), st(4)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x28]
        fmul st(0), st(3)
        fxch st(1)
        fstp dword ptr [eax+0x4]
        fadd dword ptr [edx+0x2c]
        fld dword ptr [edx+0x20]
        fmul st(0), st(5)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x4]
        fmul st(0), st(4)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x8]
        fmul st(0), st(3)
        fxch st(1)
        fstp dword ptr [eax+0x8]
        fadd dword ptr [edx+0xc]
        fld dword ptr [edx]
        fmul st(0), st(5)
        fxch st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fstp st(1)
        fstp st(1)
        fstp st(1)
        fstp dword ptr [eax]
        fld dword ptr [g_76d064]
        fdiv dword ptr [ecx+0xc]
        fst dword ptr [ecx+0xc]
        fld st(0)
        fmul dword ptr [ecx+0x8]
        fstp dword ptr [ecx+0x8]
        fld st(0)
        fmul dword ptr [g_7da87c]
        fmul dword ptr [ecx]
        fadd dword ptr [g_7da874]
        fstp dword ptr [ecx]
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx+0x18], edx
        fmul dword ptr [ecx+0x4]
        xor edx, edx
        mov dx, word ptr [esi+0xa]
        fmul dword ptr [g_7da878]
        fadd dword ptr [g_7da870]
        shl edx, 0x5
        fstp dword ptr [ecx+0x4]
        mov eax, dword ptr [ebx+0x4]
        mov dword ptr [ecx+0x1c], eax
        mov ecx, dword ptr [esi+0x68]
        mov ecx, dword ptr [ecx+edi*4]
        mov eax, dword ptr [esi+0x44]
        mov dword ptr [edx+eax+0x10], ecx
        mov ecx, dword ptr [ebp+0x10]
        test ecx, ecx
        jz L476bba
        mov eax, dword ptr [esi+0x14]
        mov edx, dword ptr [ebp-0x8]
        add edx, eax
        push edx
        call FUN_00421f00
        mov edx, dword ptr [esi+0x44]
        xor ecx, ecx
        mov cx, word ptr [esi+0xa]
        shl ecx, 0x5
        mov byte ptr [ecx+edx+0x17], al
L476bba:
        mov al, byte ptr [ebp+0x17]
        test al, al
        jz L476bf3
        mov ecx, dword ptr [esi+0x44]
        fld dword ptr [ebp-0x10]
        xor eax, eax
        mov ax, word ptr [esi+0xa]
        xor edx, edx
        shl eax, 0x5
        fadd dword ptr [eax+ecx+0x18]
        lea eax, [eax+ecx+0x18]
        fstp dword ptr [eax]
        mov dx, word ptr [esi+0xa]
        mov eax, dword ptr [esi+0x44]
        fld dword ptr [ebp-0x14]
        shl edx, 0x5
        fadd dword ptr [edx+eax+0x1c]
        lea eax, [edx+eax+0x1c]
        fstp dword ptr [eax]
L476bf3:
        inc word ptr [esi+0xa]
        mov ebx, dword ptr [ebp-0xc]
L476bfa:
        mov ecx, dword ptr [ebp-0x8]
        inc edi
        add ecx, 0xc
        cmp edi, ebx
        mov dword ptr [ebp-0x8], ecx
        jl L476a64
        xor edi, edi
L476c0e:
        mov al, byte ptr [ebp+0x18]
        test al, al
        jnz L476c8e
        mov ecx, dword ptr [ebp+0xc]
        mov eax, dword ptr [ecx]
        xor edx, edx
        mov dx, word ptr [esi+0xa]
        add eax, edx
        mov edx, dword ptr [ecx+0xc]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ecx+0x28]
        lea eax, [eax+edx*2]
        mov dword ptr [ebp+0x14], eax
L476c30:
        mov ebx, dword ptr [ebp-0x18]
        xor edx, edx
        cmp ebx, edi
        mov dword ptr [esi+0x50], eax
        mov word ptr [esi+0x54], di
        mov dword ptr [ebp-0x14], edx
        mov dword ptr [ebp+0x8], edi
        jle L476d05
        mov ecx, dword ptr [g_7da5e8]
        mov ecx, dword ptr [ecx]
        mov dword ptr [ebp-0x20], ecx
L476c55:
        mov ecx, dword ptr [esi+0x60]
        movzx cx, byte ptr [ecx+edx]
        mov ebx, dword ptr [ebp-0x20]
        cmp byte ptr [ebx+edx], 0x0
        mov dword ptr [ebp-0x4], ecx
        jz L476ce5
        mov ebx, ecx
        and ebx, 0xffff
        dec ebx
        cmp ebx, 0x1
        jle L476ce5
        mov ecx, dword ptr [ebp+0x8]
        mov edx, dword ptr [esi+0x48]
        add edx, ecx
        dec ebx
        lea eax, [eax+edi*2]
        mov dword ptr [ebp-0x1c], edx
        lea ecx, [edx+0x1]
        mov dword ptr [ebp+0x10], ebx
        jmp L476c9f
L476c8e:
        mov eax, dword ptr [ebp+0xc]
        mov eax, dword ptr [eax+0x48]
        mov ecx, dword ptr [ebp+0xc]
        mov dword ptr [ebp+0x14], eax
        jmp L476c30
L476c9c:
        mov edx, dword ptr [ebp-0x1c]
L476c9f:
        xor ebx, ebx
        mov bl, byte ptr [edx]
        mov edx, dword ptr [g_7da5f4]
        add eax, 0x2
        inc edi
        add eax, 0x2
        add eax, 0x2
        mov bx, word ptr [edx+ebx*2]
        mov word ptr [eax-0x6], bx
        xor ebx, ebx
        mov bl, byte ptr [ecx+0x1]
        inc edi
        mov bx, word ptr [edx+ebx*2]
        mov word ptr [eax-0x4], bx
        xor ebx, ebx
        mov bl, byte ptr [ecx]
        inc edi
        inc ecx
        mov dx, word ptr [edx+ebx*2]
        mov word ptr [eax-0x2], dx
        dec dword ptr [ebp+0x10]
        jnz L476c9c
        mov eax, dword ptr [ebp+0x14]
        mov ecx, dword ptr [ebp-0x4]
        mov edx, dword ptr [ebp-0x14]
L476ce5:
        mov ebx, dword ptr [ebp+0x8]
        and ecx, 0xffff
        add ebx, ecx
        mov ecx, dword ptr [ebp-0x18]
        inc edx
        cmp edx, ecx
        mov dword ptr [ebp+0x8], ebx
        mov dword ptr [ebp-0x14], edx
        jl L476c55
        mov ecx, dword ptr [ebp+0xc]
L476d05:
        mov al, byte ptr [ebp+0x18]
        test al, al
        mov word ptr [esi+0x54], di
        pop ebx
        jnz L476d1f
        mov eax, dword ptr [ecx+0xc]
        and edi, 0xffff
        add eax, edi
        mov dword ptr [ecx+0xc], eax
L476d1f:
        cmp word ptr [esi+0xa], 0x0
        pop edi
        setnz al
        mov byte ptr [esi+0x10], al
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
    }
}
