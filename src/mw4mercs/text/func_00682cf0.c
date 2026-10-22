/* FUN_00682cf0 - HUD element linked-list walker (__thiscall) */
extern void __cdecl FUN_005ef8e0(void);

__declspec(naked) void FUN_00682cf0(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x3f8]
walk:
        test esi, esi
        jz short done
        mov ecx, dword ptr [esi]
        test ecx, ecx
        mov esi, dword ptr [esi + 0x4]
        jz short done
        call FUN_005ef8e0
        jmp walk
done:
        pop esi
        ret
    }
}
