/* FUN_00682770 - HUD element virtual dispatch helper (__thiscall) */
extern void __cdecl FUN_005c1ae0(void);

__declspec(naked) void FUN_00682770(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0xe8]
        test al, al
        jz short done
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi + 0x4]
        call FUN_005c1ae0
done:
        pop esi
        ret 0x4
    }
}
