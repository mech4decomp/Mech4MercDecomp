/* func_00622aa0 - ABL interpreter region
 * __thiscall void (this, arg1, arg2) RET 0x8
 * Searches a vector for a matching entry, allocates/inserts a new entry
 * into a sorted vector, and re-links the container.
 */
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006235a0(void);
extern void __cdecl FUN_006217c0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_00622aa0(void) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [ebx+4]
        cmp eax, edx
        push ebp
        push esi
        mov esi, dword ptr [esp+0x18]
        push edi
        jz L_622ae2
        mov edi, dword ptr [ebx+0x2b8]
        mov ecx, esi
        shl ecx, 4
        mov edi, dword ptr [edi+ecx*1]
    L_622ac4:
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx+4], edi
        jnz L_622adb
        or ebp, 0xffffffff
        sub ebp, dword ptr [esp+0x20]
        cmp dword ptr [ecx+8], ebp
        jz L_622c22
    L_622adb:
        add eax, 4
        cmp eax, edx
        jnz L_622ac4
    L_622ae2:
        push 0x28
        call FUN_004084d0
        add esp, 4
        test eax, eax
        jz L_622b1c
        mov edx, dword ptr [ebx+0x2b8]
        mov edi, dword ptr [esp+0x20]
        shl esi, 4
        mov ecx, dword ptr [edx+esi*1+4]
        add edx, esi
        mov edx, dword ptr [edx]
        push ecx
        or ecx, 0xffffffff
        sub ecx, edi
        push ecx
        push edx
        mov ecx, eax
        call FUN_006235a0
        mov edi, eax
        mov dword ptr [esp+0x1c], edi
        jmp L_622b28
    L_622b1c:
        mov dword ptr [esp+0x1c], 0
        mov edi, dword ptr [esp+0x1c]
    L_622b28:
        mov esi, dword ptr [ebx+0x2b0]
        cmp esi, dword ptr [ebx+0x2b4]
        mov ecx, 0x1
        mov byte ptr [edi+0x1c], cl
        jz L_622b5f
        test esi, esi
        jz L_622b44
        mov dword ptr [esi], edi
    L_622b44:
        add esi, 4
        push edi
        mov ecx, ebx
        mov dword ptr [ebx+0x2b0], esi
        call FUN_006217c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
    L_622b5f:
        mov ebp, dword ptr [ebx+0x2ac]
        mov eax, esi
        sub eax, ebp
        sar eax, 2
        mov dword ptr [esp+0x20], ecx
        cmp eax, ecx
        mov dword ptr [esp+0x10], eax
        lea ecx, [esp+0x20]
        jc L_622b80
        lea ecx, [esp+0x10]
    L_622b80:
        mov ecx, dword ptr [ecx]
        add ecx, eax
        mov dword ptr [esp+0x10], ecx
        jz L_622ba0
        lea eax, [ecx*4]
        push eax
        call FUN_004084d0
        add esp, 4
        mov dword ptr [esp+0x20], eax
        jmp L_622ba8
    L_622ba0:
        mov dword ptr [esp+0x20], 0
    L_622ba8:
        cmp ebp, esi
        mov eax, dword ptr [esp+0x20]
        jz L_622bc4
        mov ecx, ebp
    L_622bb2:
        test eax, eax
        jz L_622bba
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
    L_622bba:
        add ecx, 4
        add eax, 4
        cmp ecx, esi
        jnz L_622bb2
    L_622bc4:
        test eax, eax
        jz L_622bca
        mov dword ptr [eax], edi
    L_622bca:
        cmp esi, esi
        lea edi, [eax+4]
        jz L_622be8
        mov eax, esi
        sub eax, edi
    L_622bd5:
        test edi, edi
        jz L_622bde
        mov ecx, dword ptr [eax+edi*1]
        mov dword ptr [edi], ecx
    L_622bde:
        add edi, 4
        lea edx, [eax+edi*1]
        cmp edx, esi
        jnz L_622bd5
    L_622be8:
        test ebp, ebp
        mov dword ptr [esp+0x14], ebp
        jz L_622bf9
        push ebp
        call FUN_004084e0
        add esp, 4
    L_622bf9:
        mov eax, dword ptr [esp+0x20]
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ebx+0x2b0], edi
        mov edi, dword ptr [esp+0x1c]
        lea edx, [eax+ecx*4]
        push edi
        mov ecx, ebx
        mov dword ptr [ebx+0x2ac], eax
        mov dword ptr [ebx+0x2b4], edx
        call FUN_006217c0
    L_622c22:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
    }
}
