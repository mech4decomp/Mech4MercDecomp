/* func_0070fa90: gosScript final-region 3D-math helper (__stdcall, 4 args).
   Vector dot/cross products + integer log2-ish loop returning a scale index. */

extern double g_76d588;
extern void __cdecl sub_75db4a(void);

__declspec(naked) void func_0070fa90(void)
{
    __asm {
        mov eax, dword ptr [esp+4]
        sub esp, 0xc
        cmp eax, -1
        push ebp
        push esi
        jz L_ret0
        mov esi, dword ptr [esp+0x20]
        push ebx
        mov ebx, dword ptr [esp+0x20]
        fld dword ptr [ebx]
        push edi
        fmul dword ptr [esi+4]
        mov edi, dword ptr [esp+0x2c]
        fld dword ptr [ebx+4]
        mov dword ptr [esp+0x10], 0
        fmul dword ptr [edi]
        faddp st(1), st(0)
        fld dword ptr [edi+4]
        fmul dword ptr [esi]
        faddp st(1), st(0)
        fld dword ptr [ebx+4]
        fmul dword ptr [esi]
        fsubp st(1), st(0)
        fld dword ptr [edi+4]
        fmul dword ptr [ebx]
        fsubp st(1), st(0)
        fld dword ptr [esi+4]
        fmul dword ptr [edi]
        fsubp st(1), st(0)
        fabs
        fmul qword ptr [g_76d588]
        call sub_75db4a
        fld dword ptr [ebx+0x18]
        fmul dword ptr [esi+0x1c]
        mov ebp, eax
        fld dword ptr [ebx+0x1c]
        mov eax, dword ptr [esp+0x20]
        fmul dword ptr [edi+0x18]
        xor ecx, ecx
        mov cx, word ptr [eax+2]
        xor edx, edx
        mov dx, word ptr [eax]
        faddp st(1), st(0)
        fld dword ptr [esi+0x18]
        mov dword ptr [esp+0x18], 0
        fmul dword ptr [edi+0x1c]
        faddp st(1), st(0)
        fld dword ptr [ebx+0x1c]
        fmul dword ptr [esi+0x18]
        imul ecx, edx
        fsubp st(1), st(0)
        fld dword ptr [ebx+0x18]
        fmul dword ptr [edi+0x1c]
        fsubp st(1), st(0)
        mov dword ptr [esp+0x14], ecx
        fld dword ptr [esi+0x1c]
        fmul dword ptr [edi+0x18]
        fsubp st(1), st(0)
        fabs
        fild qword ptr [esp+0x14]
        fmulp st(1), st(0)
        fmul qword ptr [g_76d588]
        call sub_75db4a
        test eax, eax
        pop edi
        pop ebx
        jz L_ret0
        test ebp, ebp
        jz L_ret0
        cmp ebp, eax
        jbe L_inc
L_dec:
        mov esi, dword ptr [esp+8]
        dec esi
        shr ebp, 2
        cmp ebp, eax
        mov dword ptr [esp+8], esi
        ja L_dec
        mov eax, esi
        pop esi
        pop ebp
        add esp, 0xc
        ret 0x10
L_inc:
        shl ebp, 2
        cmp ebp, eax
        ja L_ret_local
        mov ecx, dword ptr [esp+8]
        inc ecx
        cmp ecx, 9
        mov dword ptr [esp+8], ecx
        jl L_inc
L_ret_local:
        mov eax, dword ptr [esp+8]
        pop esi
        pop ebp
        add esp, 0xc
        ret 0x10
L_ret0:
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0xc
        ret 0x10
    }
}
