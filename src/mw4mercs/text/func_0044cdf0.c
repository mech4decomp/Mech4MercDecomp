/* MLR array resize FUN_0044cdf0 (167 bytes, __thiscall RET 0x4, 8-byte elems) */

extern void *__cdecl FUN_004084d0(unsigned int);
extern void  __cdecl FUN_004084e0(void *);

__declspec(naked) void func_0044cdf0(void)
{
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 0x4]
        cmp ebp, ebx
        mov dword ptr [esp + 0xc], edi
        jz L_44ce90
        test ebp, ebp
        jbe L_44ce7c
        lea eax, [ebp*0x8 + 0x0]
        push esi
        push eax
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L_44ce2d
        lea ecx, [ebp + -0x1]
        mov dword ptr [esp + 0x18], ecx
        mov esi, eax
        jmp L_44ce2f
L_44ce2d:
        xor esi, esi
L_44ce2f:
        mov edi, dword ptr [edi]
        test edi, edi
        jz L_44ce69
        cmp ebp, ebx
        mov edx, ebp
        jc L_44ce3d
        mov edx, ebx
L_44ce3d:
        mov eax, edx
        dec edx
        test eax, eax
        jz L_44ce60
        mov ecx, edi
        lea eax, [esi + edx*0x8]
        sub ecx, esi
        inc edx
L_44ce4c:
        mov ebx, dword ptr [ecx + eax*0x1]
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [ecx + eax*0x1 + 0x4]
        mov dword ptr [eax + 0x4], ebx
        dec edx
        sub eax, 0x8
        test edx, edx
        ja L_44ce4c
L_44ce60:
        push edi
        call FUN_004084e0
        add esp, 0x4
L_44ce69:
        mov ecx, dword ptr [esp + 0x10]
        mov edi, ecx
        mov dword ptr [ecx], esi
        pop esi
        mov dword ptr [edi + 0x4], ebp
        pop edi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L_44ce7c:
        mov edx, dword ptr [edi]
        push edx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [edi], 0x0
        mov dword ptr [edi + 0x4], ebp
L_44ce90:
        pop edi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}
