/* FUN_00450f80 - MLR render/mesh transform (__thiscall, RET 0x14) */

extern void __cdecl FUN_00458e10(void);
extern int __cdecl FUN_00491cd0(void);
extern char __cdecl FUN_00421f00(void);

extern int g_7da848;
extern int g_7da864;
extern int g_7da600;
extern int g_7da5f4;
extern int g_7d98fc;
extern float g_76d064;
extern float g_7da87c;
extern float g_7da874;
extern float g_7da878;
extern float g_7da870;

__declspec(naked) void func_00450f80(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x68]
        test eax, eax
        jnz L_0x450fb2
        mov eax, dword ptr [ebp + 0x18]
        mov ecx, dword ptr [ebp + 0x14]
        mov edx, dword ptr [ebp + 0x10]
        push eax
        mov eax, dword ptr [ebp + 0xc]
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call FUN_00458e10
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
    L_0x450fb2:
        mov eax, dword ptr [esi + 0x24]
        and eax, 0x3fff
        push edi
        mov byte ptr [ebp + 0x17], 0x0
        mov dword ptr [ebp - 0x10], 0x0
        mov dword ptr [ebp - 0x14], 0x0
        jz L_0x451089
        test eax, eax
        jle L_0x451089
        mov edx, dword ptr [g_7da848]
        mov edi, dword ptr [edx + eax*4 + 0x24]
        test edi, edi
        jz L_0x451089
        mov eax, dword ptr [edi]
        push 0x0
        mov ecx, edi
        call dword ptr [eax + 0x4]
        mov ecx, eax
        call FUN_00491cd0
        cmp eax, 0x100
        mov ecx, 0x1
        jl L_0x451011
        mov dword ptr [g_7da864], ecx
        jmp L_0x45106c
    L_0x451011:
        cmp eax, 0x80
        jl L_0x451024
        mov dword ptr [g_7da864], 0x2
        jmp L_0x45106c
    L_0x451024:
        cmp eax, 0x40
        jl L_0x451035
        mov dword ptr [g_7da864], 0x4
        jmp L_0x45106c
    L_0x451035:
        cmp eax, 0x20
        jl L_0x451046
        mov dword ptr [g_7da864], 0x8
        jmp L_0x45106c
    L_0x451046:
        cmp eax, 0x10
        jl L_0x451057
        mov dword ptr [g_7da864], 0x10
        jmp L_0x45106c
    L_0x451057:
        xor edx, edx
        cmp eax, 0x8
        setl dl
        dec edx
        and edx, 0xffffffe0
        add edx, 0x40
        mov dword ptr [g_7da864], edx
    L_0x45106c:
        mov al, byte ptr [edi + 0x24]
        test al, al
        jnz L_0x4510b1
        mov edi, dword ptr [edi + 0x28]
        test edi, edi
        jz L_0x4510b1
        mov eax, dword ptr [edi + 0xc]
        mov byte ptr [ebp + 0x17], cl
        mov ecx, dword ptr [edi + 0x1c]
        mov dword ptr [ebp - 0x10], eax
        mov dword ptr [ebp - 0x14], ecx
    L_0x451089:
        push ebx
        mov ebx, dword ptr [esi + 0x18]
        cmp ebx, 0x100
        mov dword ptr [ebp - 0xc], ebx
        jle L_0x4510a2
        mov dword ptr [ebp - 0xc], 0x100
        mov ebx, dword ptr [ebp - 0xc]
    L_0x4510a2:
        mov al, byte ptr [ebp + 0x18]
        test al, al
        jz L_0x4510b7
        mov edx, dword ptr [ebp + 0xc]
        mov eax, dword ptr [edx + 0x30]
        jmp L_0x4510c4
    L_0x4510b1:
        mov byte ptr [ebp + 0x17], 0x0
        jmp L_0x451089
    L_0x4510b7:
        mov ecx, dword ptr [ebp + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ecx + 0x10]
        shl eax, 0x5
        add eax, edx
    L_0x4510c4:
        cmp word ptr [esi + 0x56], 0x0
        mov dword ptr [esi + 0x44], eax
        mov word ptr [esi + 0xa], 0x0
        jnz L_0x4510de
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x98]
    L_0x4510de:
        xor edi, edi
        cmp ebx, edi
        mov dword ptr [ebp - 0x8], edi
        jle L_0x451297
        mov dword ptr [ebp - 0x4], edi
    L_0x4510ee:
        mov ecx, dword ptr [g_7da600]
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + edi*1], 0x0
        jnz L_0x451104
        inc dword ptr [ebp - 0x8]
        jmp L_0x451285
    L_0x451104:
        mov edx, dword ptr [ebp - 0x8]
        mov ecx, dword ptr [g_7da5f4]
        mov eax, edi
        sub eax, edx
        mov edx, dword ptr [esi + 0x1c]
        mov dword ptr [ecx + edi*2], eax
        mov ecx, dword ptr [esi + 0x14]
        mov eax, dword ptr [ebp - 0x4]
        add eax, ecx
        xor ecx, ecx
        mov cx, word ptr [esi + 0xa]
        lea ebx, [edx + edi*8]
        mov edx, dword ptr [esi + 0x44]
        mov dword ptr [ebp - 0x1c], eax
        shl ecx, 0x5
        add ecx, edx
        mov dword ptr [ebp - 0x18], ecx
        mov edx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [ebp - 0x1c]
        fld dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [ebp - 0x18]
        fld dword ptr [edx + 0x34]
        fmul st(0), st(2)
        fld dword ptr [edx + 0x38]
        fmul st(0), st(2)
        fxch st(1)
        fadd dword ptr [edx + 0x3c]
        fld dword ptr [edx + 0x30]
        fmul st(0), st(5)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx + 0x14]
        fmul st(0), st(4)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx + 0x18]
        fmul st(0), st(3)
        fxch st(1)
        fstp dword ptr [eax + 0xc]
        fadd dword ptr [edx + 0x1c]
        fld dword ptr [edx + 0x10]
        fmul st(0), st(5)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx + 0x24]
        fmul st(0), st(4)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx + 0x28]
        fmul st(0), st(3)
        fxch st(1)
        fstp dword ptr [eax + 0x4]
        fadd dword ptr [edx + 0x2c]
        fld dword ptr [edx + 0x20]
        fmul st(0), st(5)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx + 0x4]
        fmul st(0), st(4)
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx + 0x8]
        fmul st(0), st(3)
        fxch st(1)
        fstp dword ptr [eax + 0x8]
        fadd dword ptr [edx + 0xc]
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
        fdiv dword ptr [ecx + 0xc]
        fst dword ptr [ecx + 0xc]
        fld st(0)
        fmul dword ptr [ecx + 0x8]
        fstp dword ptr [ecx + 0x8]
        fld st(0)
        fmul dword ptr [ecx]
        fmul dword ptr [g_7da87c]
        fadd dword ptr [g_7da874]
        fstp dword ptr [ecx]
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx + 0x18], edx
        fmul dword ptr [g_7da878]
        fmul dword ptr [ecx + 0x4]
        fadd dword ptr [g_7da870]
        fstp dword ptr [ecx + 0x4]
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x1c], eax
        mov ecx, dword ptr [esi + 0x6c]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x44]
        mov edx, dword ptr [edx + edi*4]
        xor eax, eax
        mov ax, word ptr [esi + 0xa]
        shl eax, 0x5
        mov dword ptr [eax + ecx*1 + 0x10], edx
        mov al, byte ptr [ebp + 0x17]
        test al, al
        jz L_0x451259
        mov ecx, dword ptr [esi + 0x44]
        fld dword ptr [ebp - 0x10]
        xor eax, eax
        mov ax, word ptr [esi + 0xa]
        xor edx, edx
        shl eax, 0x5
        fadd dword ptr [eax + ecx*1 + 0x18]
        lea eax, [eax + ecx*1 + 0x18]
        fstp dword ptr [eax]
        mov dx, word ptr [esi + 0xa]
        mov eax, dword ptr [esi + 0x44]
        fld dword ptr [ebp - 0x14]
        shl edx, 0x5
        fadd dword ptr [edx + eax*1 + 0x1c]
        lea eax, [edx + eax*1 + 0x1c]
        fstp dword ptr [eax]
    L_0x451259:
        mov ecx, dword ptr [ebp + 0x10]
        test ecx, ecx
        jz L_0x45127e
        mov eax, dword ptr [esi + 0x14]
        mov edx, dword ptr [ebp - 0x4]
        add edx, eax
        push edx
        call FUN_00421f00
        mov edx, dword ptr [esi + 0x44]
        xor ecx, ecx
        mov cx, word ptr [esi + 0xa]
        shl ecx, 0x5
        mov byte ptr [ecx + edx*1 + 0x17], al
    L_0x45127e:
        inc word ptr [esi + 0xa]
        mov ebx, dword ptr [ebp - 0xc]
    L_0x451285:
        mov ecx, dword ptr [ebp - 0x4]
        inc edi
        add ecx, 0xc
        cmp edi, ebx
        mov dword ptr [ebp - 0x4], ecx
        jl L_0x4510ee
    L_0x451297:
        mov al, byte ptr [ebp + 0x18]
        test al, al
        jnz L_0x451368
        mov edx, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [edx]
        xor eax, eax
        mov ax, word ptr [esi + 0xa]
        add ecx, eax
        mov eax, dword ptr [edx + 0xc]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [edx + 0x28]
        lea eax, [ecx + eax*2]
    L_0x4512ba:
        mov ebx, dword ptr [esi + 0x58]
        xor ecx, ecx
        xor edi, edi
        cmp ebx, ecx
        mov dword ptr [esi + 0x50], eax
        mov word ptr [esi + 0x54], cx
        mov dword ptr [ebp + 0x10], ecx
        mov dword ptr [ebp + 0x8], ecx
        jle L_0x45133b
        mov edx, dword ptr [g_7d98fc]
        mov edx, dword ptr [edx]
        mov dword ptr [ebp + 0x14], edx
        mov edx, dword ptr [g_7da5f4]
    L_0x4512e3:
        mov ebx, dword ptr [ebp + 0x14]
        cmp byte ptr [ebx + ecx*1], 0x0
        jz L_0x451329
        mov ebx, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [esi + 0x48]
        add ecx, ebx
        xor ebx, ebx
        mov bl, byte ptr [ecx]
        add eax, 0x2
        inc edi
        add eax, 0x2
        mov bx, word ptr [edx + ebx*2]
        mov word ptr [eax - 0x4], bx
        xor ebx, ebx
        mov bl, byte ptr [ecx + 0x2]
        inc edi
        mov bx, word ptr [edx + ebx*2]
        mov word ptr [eax - 0x2], bx
        xor ebx, ebx
        mov bl, byte ptr [ecx + 0x1]
        inc edi
        add eax, 0x2
        mov cx, word ptr [edx + ebx*2]
        mov word ptr [eax - 0x2], cx
        mov ecx, dword ptr [ebp + 0x10]
    L_0x451329:
        add dword ptr [ebp + 0x8], 0x3
        mov ebx, dword ptr [esi + 0x58]
        inc ecx
        cmp ecx, ebx
        mov dword ptr [ebp + 0x10], ecx
        jl L_0x4512e3
        mov edx, dword ptr [ebp + 0xc]
    L_0x45133b:
        mov al, byte ptr [ebp + 0x18]
        test al, al
        mov word ptr [esi + 0x54], di
        pop ebx
        jnz L_0x451355
        mov eax, dword ptr [edx + 0xc]
        and edi, 0xffff
        add eax, edi
        mov dword ptr [edx + 0xc], eax
    L_0x451355:
        cmp word ptr [esi + 0xa], 0x0
        pop edi
        setnz dl
        mov byte ptr [esi + 0x10], dl
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
    L_0x451368:
        mov ecx, dword ptr [ebp + 0xc]
        mov eax, dword ptr [ecx + 0x48]
        mov edx, ecx
        jmp L_0x4512ba
    }
}
