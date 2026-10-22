/*
 * FUN_005e1140 (29 B) — returns *(uint*)((*(uint*)((*DAT_007dab44 ^ DAT_007dab40) + 0x20) ^ 0x85739531) + 0x294)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005e1140(void)
{
    __asm {
        _emit 0xA1              /* mov eax,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov ecx, dword ptr [eax]
        _emit 0x33              /* xor ecx,[imm32] encoded as immediate xor by MSVC6 */
        _emit 0x0D
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov edx, dword ptr [ecx + 0x20]
        xor edx, 0x85739531
        mov eax, dword ptr [edx + 0x294]
        ret
    }
}
