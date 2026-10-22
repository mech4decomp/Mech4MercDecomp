// 0x005670B0: check if a game object is valid/active
// __cdecl, 1 param (int objectId)
// Returns bool (al = 0 or 1)

extern void *__cdecl FUN_005668b0(int id);
extern void *__cdecl FUN_005669d0(int id);

__declspec(naked) int __cdecl func_005670b0(int objectId)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        push edi
        jge try_lookup
        pop edi
        xor al, al
        pop esi
        ret
try_lookup:
        push esi
        call FUN_005668b0
        mov edi, eax
        add esp, 4
        test edi, edi
        je  return_true
        push esi
        call FUN_005669d0
        add esp, 4
        test eax, eax
        je  check_flag
        cmp byte ptr [eax + 0x2f9], 1
        je  return_true
check_flag:
        mov eax, dword ptr [edi + 0x10]
        shr eax, 0x13
        pop edi
        and eax, 1
        pop esi
        ret
return_true:
        pop edi
        mov al, 1
        pop esi
        ret
    }
}
