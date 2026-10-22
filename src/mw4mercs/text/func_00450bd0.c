/* FUN_00450bd0 - MLR material ctor (__thiscall, RET 0x4) */

extern void __cdecl FUN_00458660(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void* func_00450bd0(void)
{
    __asm {
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov ebx, ecx
        push esi
        mov dword ptr [esp + 0x14], ebx
        call FUN_00458660
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        jz L_0x450cbd
        mov ecx, dword ptr [eax + 0x24]
        test ecx, ecx
        jbe L_0x450cbd
        mov eax, dword ptr [esi]
        push edi
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        mov ecx, esi
        call dword ptr [eax + 0xa8]
        mov esi, dword ptr [ebx + 0xc]
        mov ecx, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esi + 0x24]
        cmp ecx, edi
        mov dword ptr [esp + 0x10], ecx
        jz L_0x450c97
        test ecx, ecx
        jbe L_0x450c79
        lea eax, [ecx*4 + 0x0]
        push ebp
        push eax
        call FUN_004084d0
        mov ebp, dword ptr [esi + 0x20]
        add esp, 0x4
        test ebp, ebp
        mov ebx, eax
        jz L_0x450c6f
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, edi
        jc L_0x450c4a
        mov ecx, edi
    L_0x450c4a:
        mov edx, ecx
        dec ecx
        test edx, edx
        jz L_0x450c66
        mov edx, ebp
        lea eax, [ebx + ecx*4]
        sub edx, ebx
        inc ecx
    L_0x450c59:
        mov edi, dword ptr [edx + eax*1]
        mov dword ptr [eax], edi
        dec ecx
        sub eax, 0x4
        test ecx, ecx
        ja L_0x450c59
    L_0x450c66:
        push ebp
        call FUN_004084e0
        add esp, 0x4
    L_0x450c6f:
        mov dword ptr [esi + 0x20], ebx
        mov ebx, dword ptr [esp + 0x18]
        pop ebp
        jmp L_0x450c8c
    L_0x450c79:
        mov eax, dword ptr [esi + 0x20]
        push eax
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [esi + 0x20], 0x0
    L_0x450c8c:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x24], ecx
        mov ecx, dword ptr [esp + 0x1c]
    L_0x450c97:
        mov eax, dword ptr [esi + 0x20]
        mov esi, dword ptr [esp + 0xc]
        mov edx, dword ptr [ebx]
        mov edi, eax
        rep movsd
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        push eax
        mov ecx, ebx
        call dword ptr [edx + 0xa4]
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        add esp, 0xc
        ret 0x4
    L_0x450cbd:
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call dword ptr [edx + 0xa8]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [ebx]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr [edx + 0xa4]
        pop esi
        mov al, 0x1
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}
