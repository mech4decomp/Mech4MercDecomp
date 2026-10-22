// 0x00560B10: set string size for HUD element
// __fastcall, this in ecx, 1 stack param (int sizeIndex)
// Sets this->field_114 based on sizeIndex (0, 1, 2+)

extern int __cdecl FUN_006fab90(const char *str);

__declspec(naked) void __fastcall func_00560b10(void *this, int dummy, int sizeIndex)
{
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        cmp eax, 4
        ja  assert_bad
        jmp dword ptr [eax*4 + 0x560B64]
case_0:
        mov dword ptr [ecx + 0x114], 0xfffffff8
        pop ebp
        ret 4
case_1:
        mov dword ptr [ecx + 0x114], 0xfffffff6
        pop ebp
        ret 4
case_2:
        mov dword ptr [ecx + 0x114], 0xfffffff4
        pop ebp
        ret 4
assert_bad:
        push 0x77DEEC
        call FUN_006fab90
        add esp, 4
        test eax, eax
        je  skip_int3
        int 3
skip_int3:
        pop ebp
        ret 4
    }
}
