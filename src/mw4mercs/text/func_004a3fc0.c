/* FUN_004a3fc0 - MLR (MidLevelRenderer) constructor, __fastcall, RET */
extern void __cdecl FUN_004a9380(void);

__declspec(naked) void func_004a3fc0(void)
{
    __asm {
        push esi
        mov esi, ecx
        push 0x528
        call FUN_004a9380
        mov eax, 0x74
        mov dword ptr [esi + 0x26c], eax
        mov dword ptr [esi + 0x270], eax
        mov dword ptr [esi], 0x770318
        mov eax, esi
        pop esi
        ret
    }
}
