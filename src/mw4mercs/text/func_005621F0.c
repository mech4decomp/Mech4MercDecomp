/* FUN_005621F0 - 17 bytes - conditional copy: if dst non-NULL, copy first dword from src */
__declspec(naked) void FUN_005621F0(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        je skip
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
skip:
        ret
    }
}
