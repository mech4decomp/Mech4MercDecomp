/* FUN_0046fcd0 - MLR mesh build (1181 B, __thiscall RET 0x14) */

extern int g_7da848;
extern int g_7da864;
extern int g_7da600;
extern int g_7da5f4;
extern int g_7d997c;
extern int g_7da5e8;

extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_0043e0e0(void);
extern void __cdecl FUN_00421f00(void);

__declspec(naked) void func_0046fcd0(void)
{
    __asm {
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp+0x24]
        and eax, 0x3fff
        push esi
        mov byte ptr [esp+0xf], 0x0
        mov dword ptr [esp+0x18], 0x0
        mov dword ptr [esp+0x1c], 0x0
        jz L46fdb4
        test eax, eax
        jle L46fdb4
        mov ecx, dword ptr [g_7da848]
        mov esi, dword ptr [ecx+eax*4+0x24]
        test esi, esi
        jz L46fdb4
        mov edx, dword ptr [esi]
        push 0x0
        mov ecx, esi
        call dword ptr [edx+0x4]
        mov ecx, eax
        call FUN_00491cd0
        cmp eax, 0x100
        jl L46fd38
        mov dword ptr [g_7da864], 0x1
        jmp L46fd93
L46fd38:
        cmp eax, 0x80
        jl L46fd4b
        mov dword ptr [g_7da864], 0x2
        jmp L46fd93
L46fd4b:
        cmp eax, 0x40
        jl L46fd5c
        mov dword ptr [g_7da864], 0x4
        jmp L46fd93
L46fd5c:
        cmp eax, 0x20
        jl L46fd6d
        mov dword ptr [g_7da864], 0x8
        jmp L46fd93
L46fd6d:
        cmp eax, 0x10
        jl L46fd7e
        mov dword ptr [g_7da864], 0x10
        jmp L46fd93
L46fd7e:
        xor ecx, ecx
        cmp eax, 0x8
        setl cl
        dec ecx
        and ecx, 0xffffffe0
        add ecx, 0x40
        mov dword ptr [g_7da864], ecx
L46fd93:
        mov al, byte ptr [esi+0x24]
        test al, al
        jnz L46fde7
        mov esi, dword ptr [esi+0x28]
        test esi, esi
        jz L46fde7
        mov edx, dword ptr [esi+0xc]
        mov eax, dword ptr [esi+0x1c]
        mov byte ptr [esp+0xf], 0x1
        mov dword ptr [esp+0x18], edx
        mov dword ptr [esp+0x1c], eax
L46fdb4:
        mov esi, dword ptr [ebp+0x18]
        cmp esi, 0x100
        mov ecx, dword ptr [ebp+0x64]
        mov dword ptr [esp+0x2c], ecx
        mov dword ptr [esp+0x20], esi
        jle L46fdd6
        mov dword ptr [esp+0x20], 0x100
        mov esi, dword ptr [esp+0x20]
L46fdd6:
        mov al, byte ptr [esp+0x44]
        test al, al
        jz L46fdee
        mov ebx, dword ptr [esp+0x38]
        mov eax, dword ptr [ebx+0x30]
        jmp L46fdfe
L46fde7:
        mov byte ptr [esp+0xf], 0x0
        jmp L46fdb4
L46fdee:
        mov ecx, dword ptr [esp+0x38]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ecx+0x10]
        shl eax, 0x5
        add eax, edx
        mov ebx, ecx
L46fdfe:
        push edi
        xor edi, edi
        cmp word ptr [ebp+0x56], di
        mov dword ptr [ebp+0x44], eax
        mov word ptr [ebp+0xa], di
        jnz L46fe19
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx+0x98]
L46fe19:
        xor ecx, ecx
        cmp esi, ecx
        mov dword ptr [esp+0x14], ecx
        jle L46ff58
        /* __emit: no-base SIB form LEA EAX,[ESI*8+0] (8D 04 F5) not encodable in MSVC6 inline asm */
        __emit 0x8D
        __emit 0x04
        __emit 0xF5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov dword ptr [esp+0x18], ecx
        mov dword ptr [esp+0x2c], ecx
        mov dword ptr [esp+0x28], eax
L46fe3a:
        mov ecx, dword ptr [g_7da600]
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx+edi*1], 0x0
        jnz L46fe51
        inc dword ptr [esp+0x14]
        jmp L46ff37
L46fe51:
        mov edx, dword ptr [esp+0x14]
        mov ecx, dword ptr [g_7da5f4]
        mov eax, edi
        sub eax, edx
        mov edx, dword ptr [ebp+0x1c]
        mov word ptr [ecx+edi*2], ax
        mov ecx, dword ptr [ebp+0x44]
        xor eax, eax
        mov ax, word ptr [ebp+0xa]
        lea ebx, [edx+edi*8]
        mov edx, dword ptr [esp+0x38]
        push edx
        mov edx, dword ptr [ebp+0x14]
        shl eax, 0x5
        lea esi, [eax+ecx*1]
        mov eax, dword ptr [esp+0x1c]
        add eax, edx
        push eax
        mov ecx, esi
        call FUN_0043e0e0
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ebx+0x4]
        mov eax, dword ptr [esp+0x44]
        mov dword ptr [esi+0x18], ecx
        mov ecx, dword ptr [esp+0x40]
        test ecx, ecx
        mov dword ptr [esi+0x1c], edx
        mov dword ptr [esi+0x10], eax
        jz L46fec5
        mov edx, dword ptr [esp+0x18]
        add edx, dword ptr [ebp+0x14]
        push edx
        call FUN_00421f00
        mov edx, dword ptr [ebp+0x44]
        xor ecx, ecx
        mov cx, word ptr [ebp+0xa]
        shl ecx, 0x5
        mov byte ptr [ecx+edx*1+0x17], al
L46fec5:
        mov al, byte ptr [esp+0x13]
        test al, al
        jz L46ff01
        mov ecx, dword ptr [ebp+0x44]
        fld dword ptr [esp+0x1c]
        xor eax, eax
        mov ax, word ptr [ebp+0xa]
        xor edx, edx
        shl eax, 0x5
        fadd dword ptr [eax+ecx*1+0x18]
        lea eax, [eax+ecx*1+0x18]
        fstp dword ptr [eax]
        mov dx, word ptr [ebp+0xa]
        mov eax, dword ptr [ebp+0x44]
        fld dword ptr [esp+0x20]
        shl edx, 0x5
        fadd dword ptr [edx+eax*1+0x1c]
        lea eax, [edx+eax*1+0x1c]
        fstp dword ptr [eax]
L46ff01:
        mov ecx, dword ptr [esp+0x2c]
        mov ebx, dword ptr [ebp+0x1c]
        mov edx, dword ptr [g_7d997c]
        mov esi, dword ptr [edx]
        mov eax, ecx
        add ecx, 0x8
        mov dword ptr [esp+0x2c], ecx
        mov ecx, dword ptr [esp+0x28]
        add ecx, ebx
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ecx+0x4]
        mov ebx, dword ptr [esp+0x3c]
        add eax, esi
        inc word ptr [ebp+0xa]
        mov esi, dword ptr [esp+0x24]
        mov dword ptr [eax], edx
        mov dword ptr [eax+0x4], ecx
L46ff37:
        mov edx, dword ptr [esp+0x28]
        mov ecx, dword ptr [esp+0x18]
        inc edi
        add edx, 0x8
        add ecx, 0xc
        cmp edi, esi
        mov dword ptr [esp+0x28], edx
        mov dword ptr [esp+0x18], ecx
        jl L46fe3a
        xor ecx, ecx
L46ff58:
        test dword ptr [ebp+0x68], 0x3fff
        jz L46ff9e
        mov eax, dword ptr [ebp+0x24]
        and eax, 0x3fff
        jg L46ff6f
        xor eax, eax
        jmp L46ff79
L46ff6f:
        mov edx, dword ptr [g_7da848]
        mov eax, dword ptr [edx+eax*4+0x24]
L46ff79:
        mov dl, byte ptr [eax+0x24]
        test dl, dl
        jnz L470006
        mov eax, dword ptr [eax+0x28]
        cmp eax, ecx
        jz L470006
        mov ecx, dword ptr [eax+0xc]
        mov edx, dword ptr [eax+0x1c]
        mov byte ptr [esp+0x13], 0x1
        mov dword ptr [esp+0x1c], ecx
        mov dword ptr [esp+0x20], edx
L46ff9e:
        mov esi, dword ptr [ebp+0x44]
        xor ecx, ecx
        mov cx, word ptr [ebp+0xa]
        shl ecx, 0x5
        lea edi, [esi+ecx*1]
        mov eax, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        mov al, byte ptr [esp+0x13]
        and ecx, 0x3
        test al, al
        rep movsb
        jz L47000d
        xor edx, edx
        mov dx, word ptr [ebp+0xa]
        and edx, 0xffff
        jle L470043
        mov ecx, dword ptr [g_7d997c]
        mov eax, dword ptr [ecx]
        mov esi, dword ptr [ebp+0x44]
        mov ecx, edx
        shl ecx, 0x5
        lea ecx, [ecx+esi*1+0x1c]
        mov esi, edx
L46ffe7:
        fld dword ptr [esp+0x1c]
        add eax, 0x8
        fadd dword ptr [eax-0x8]
        add ecx, 0x20
        dec esi
        fstp dword ptr [ecx-0x24]
        fld dword ptr [esp+0x20]
        fadd dword ptr [eax-0x4]
        fstp dword ptr [ecx-0x20]
        jnz L46ffe7
        /* __emit: MSVC6 miscomputes this forward JMP rel8 (emits EB 98, ref EB 3D) */
        __emit 0xEB
        __emit 0x3D
L470006:
        mov byte ptr [esp+0x13], 0x0
        jmp L46ff9e
L47000d:
        xor edx, edx
        mov dx, word ptr [ebp+0xa]
        and edx, 0xffff
        jle L470043
        mov esi, dword ptr [ebp+0x44]
        mov eax, dword ptr [g_7d997c]
        mov eax, dword ptr [eax]
        mov ecx, edx
        shl ecx, 0x5
        lea ecx, [ecx+esi*1+0x1c]
        mov esi, edx
L470030:
        mov edi, dword ptr [eax]
        mov dword ptr [ecx-0x4], edi
        mov edi, dword ptr [eax+0x4]
        mov dword ptr [ecx], edi
        add eax, 0x8
        add ecx, 0x20
        dec esi
        jnz L470030
L470043:
        mov al, byte ptr [esp+0x48]
        test al, al
        jnz L470165
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [ebx+0x28]
        add edx, edx
        add eax, edx
        mov dword ptr [ebx], eax
        mov eax, dword ptr [ebx+0xc]
        lea eax, [ecx+eax*2]
L470060:
        mov ecx, dword ptr [esp+0x30]
        xor esi, esi
        xor edi, edi
        cmp ecx, esi
        mov dword ptr [esp+0x40], eax
        mov dword ptr [ebp+0x50], eax
        mov word ptr [ebp+0x54], si
        mov dword ptr [esp+0x2c], edi
        mov dword ptr [esp+0x38], esi
        jle L470136
L470083:
        mov edx, dword ptr [g_7da5e8]
        mov ecx, dword ptr [edx]
        mov edx, dword ptr [g_7da5f4]
        mov dword ptr [esp+0x28], ecx
L470095:
        mov ecx, dword ptr [ebp+0x60]
        movzx cx, byte ptr [ecx+edi*1]
        mov ebx, dword ptr [esp+0x28]
        cmp byte ptr [ebx+edi*1], 0x0
        mov dword ptr [esp+0x14], ecx
        jz L470111
        mov ebx, ecx
        and ebx, 0xffff
        dec ebx
        cmp ebx, 0x1
        jle L470111
        mov ecx, dword ptr [ebp+0x48]
        mov edi, dword ptr [esp+0x38]
        add edi, ecx
        dec ebx
        lea eax, [eax+esi*2]
        lea ecx, [edi+0x1]
        mov dword ptr [esp+0x44], ebx
        xor ebx, ebx
L4700cd:
        mov bl, byte ptr [edi]
        add eax, 0x2
        inc esi
        add eax, 0x2
        add eax, 0x2
        mov bx, word ptr [edx+ebx*2]
        mov word ptr [eax-0x6], bx
        xor ebx, ebx
        mov bl, byte ptr [ecx+0x1]
        inc esi
        mov bx, word ptr [edx+ebx*2]
        mov word ptr [eax-0x4], bx
        xor ebx, ebx
        mov bl, byte ptr [ecx]
        inc esi
        inc ecx
        mov bx, word ptr [edx+ebx*2]
        mov word ptr [eax-0x2], bx
        dec dword ptr [esp+0x44]
        /* __emit: MSVC6 miscomputes this backward JNZ rel8 (emits 75 CA, ref 75 C8) */
        __emit 0x75
        __emit 0xC8
        mov ecx, dword ptr [esp+0x14]
        mov eax, dword ptr [esp+0x40]
        mov edi, dword ptr [esp+0x2c]
L470111:
        mov ebx, dword ptr [esp+0x38]
        and ecx, 0xffff
        add ebx, ecx
        mov ecx, dword ptr [esp+0x30]
        inc edi
        cmp edi, ecx
        mov dword ptr [esp+0x38], ebx
        mov dword ptr [esp+0x2c], edi
        jl L470095
        mov ebx, dword ptr [esp+0x3c]
L470136:
        mov al, byte ptr [esp+0x48]
        test al, al
        mov word ptr [ebp+0x54], si
        pop edi
        jnz L470151
        mov eax, dword ptr [ebx+0xc]
        and esi, 0xffff
        add eax, esi
        mov dword ptr [ebx+0xc], eax
L470151:
        cmp word ptr [ebp+0xa], 0x0
        pop esi
        setnz dl
        mov byte ptr [ebp+0x10], dl
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x14
L470165:
        mov eax, dword ptr [ebx+0x48]
        jmp L470060
    }
}
