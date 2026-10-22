/* func_00621930 - ABL interpreter region
 * __thiscall void (this, int index) RET 0x4
 * Removes/erases an element at `index` from a vector-of-vectors structure.
 */
extern void __cdecl FUN_00624520(void);
extern void __cdecl FUN_00548170(void);
extern void __cdecl FUN_00624f00(void);
extern void __cdecl FUN_00623640(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_00621930(void) {
    __asm {
        sub esp, 8
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [esp+0x10]
        test ecx, ecx
        jl L_621a8f
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [ebp+4]
        sub edx, eax
        sar edx, 2
        cmp ecx, edx
        jnc L_621a8f
        mov edx, dword ptr [eax+ecx*4]
        test edx, edx
        jz L_621a8f
        mov eax, dword ptr [ebp+0x10]
        push ebx
        push esi
        mov esi, dword ptr [ebp+0xc]
        cmp esi, eax
        mov ecx, edx
        push edi
        mov edi, dword ptr [ecx+4]
        mov dword ptr [esp+0x10], ecx
        jz L_6219b2
    L_621976:
        cmp dword ptr [esi], ecx
        jz L_621983
        add esi, 4
        cmp esi, eax
        jnz L_621976
        jmp L_6219b2
    L_621983:
        mov ecx, dword ptr [esi]
        push 0
        call FUN_00624520
        mov ebx, dword ptr [ebp+0x10]
        lea eax, [esi+4]
        cmp eax, ebx
        jz L_6219a8
        mov ecx, dword ptr [esp+0x1c]
        push 0
        push ecx
        push esi
        push ebx
        push eax
        call FUN_00548170
        add esp, 0x14
    L_6219a8:
        mov ecx, dword ptr [esp+0x10]
        add ebx, -4
        mov dword ptr [ebp+0x10], ebx
    L_6219b2:
        lea edx, [edi+edi*2+6]
        mov esi, dword ptr [ebp+edx*4]
        lea ebx, [ebp+edx*4]
        lea eax, [edi+edi*2]
        mov eax, dword ptr [ebp+eax*4+0x1c]
        cmp esi, eax
        jz L_621a05
    L_6219c9:
        cmp dword ptr [esi], ecx
        jz L_6219d6
        add esi, 4
        cmp esi, eax
        jnz L_6219c9
        jmp L_621a05
    L_6219d6:
        mov ecx, dword ptr [esi]
        push 0
        call FUN_00624520
        mov edi, dword ptr [ebx+4]
        lea eax, [esi+4]
        cmp eax, edi
        jz L_6219fb
        mov ecx, dword ptr [esp+0x1c]
        push 0
        push ecx
        push esi
        push edi
        push eax
        call FUN_00548170
        add esp, 0x14
    L_6219fb:
        mov ecx, dword ptr [esp+0x10]
        add edi, -4
        mov dword ptr [ebx+4], edi
    L_621a05:
        add ecx, 0x18
        push ecx
        lea edx, [esp+0x18]
        lea esi, [ebp+0x2a0]
        push edx
        mov ecx, esi
        call FUN_00624f00
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [esi]
        jz L_621a66
        mov ecx, dword ptr [eax+0x14]
        mov edx, dword ptr [eax+0x18]
        cmp ecx, edx
        jz L_621a66
    L_621a2b:
        mov ebx, dword ptr [esp+0x10]
        cmp dword ptr [ecx], ebx
        jz L_621a3c
        add ecx, 4
        cmp ecx, edx
        jnz L_621a2b
        jmp L_621a6a
    L_621a3c:
        mov edi, dword ptr [eax+0x18]
        lea esi, [ecx+4]
        cmp esi, edi
        jz L_621a5e
        mov edx, ecx
        mov ecx, edi
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle L_621a5e
    L_621a53:
        mov esi, dword ptr [edx+4]
        mov dword ptr [edx], esi
        add edx, 4
        dec ecx
        jnz L_621a53
    L_621a5e:
        add edi, -4
        mov dword ptr [eax+0x18], edi
        jmp L_621a6a
    L_621a66:
        mov ebx, dword ptr [esp+0x10]
    L_621a6a:
        test ebx, ebx
        jz L_621a7e
        mov ecx, ebx
        call FUN_00623640
        push ebx
        call FUN_004084e0
        add esp, 4
    L_621a7e:
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [esp+0x1c]
        pop edi
        pop esi
        mov dword ptr [eax+ecx*4], 0
        pop ebx
    L_621a8f:
        pop ebp
        add esp, 8
        ret 4
    }
}
