/* FUN_0046fbc0 - MLR mesh object ctor (45 B, __thiscall RET 0x4) */

extern void __cdecl FUN_0047a680(void);
extern void __cdecl FUN_004911e0(void);
extern void __cdecl FUN_00491280(void);

__declspec(naked) void func_0046fbc0(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        push esi
        mov esi, ecx
        push eax
        call FUN_0047a680
        lea ecx, [esi+0x68]
        call FUN_004911e0
        lea ecx, [esi+0x70]
        call FUN_00491280
        mov dword ptr [esi], 0x76f1f8
        mov byte ptr [esi+0x11], 0x2
        mov eax, esi
        pop esi
        ret 0x4
    }
}
