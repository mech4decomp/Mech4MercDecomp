/* FUN_004a4430 - MLR (MidLevelRenderer) release slot, __thiscall, RET 0x4 */
extern void __cdecl FUN_004ac970(void);

__declspec(naked) void func_004a4430(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x10]
        mov esi, dword ptr [eax + 0x270]
        mov ecx, dword ptr [edi + 0xa8]
        imul esi, ebx
        add esi, ecx
        mov ecx, dword ptr [esi + 0x70]
        test ecx, ecx
        jz L_a4461
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx]
        mov dword ptr [esi + 0x70], 0x0
L_a4461:
        push ebx
        mov ecx, edi
        call FUN_004ac970
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}
