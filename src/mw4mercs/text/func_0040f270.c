/* FUN_0040f270 - loader/parser subsystem helper (ctor) */

extern void __cdecl FUN_004084d0(void *);

__declspec(naked) void func_0040f270(void)
{
    __asm {
        mov eax, dword ptr [esp+4]
        push esi
        mov esi, ecx
        mov cl, byte ptr [eax]
        mov byte ptr [esi], cl
        push 0x18
        mov dword ptr [esi], 0
        call FUN_004084d0
        mov dword ptr [esi], eax
        add esp, 4
        mov eax, esi
        pop esi
        ret 4
    }
}
