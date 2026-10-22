/*
 * FUN_005e1200 (49 B) — __stdcall (RET 0x8), 2 args
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall func_005e1200(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        _emit 0x8B              /* mov edx,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x15
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        push 0x1
        push eax
        mov eax, dword ptr [edx]
        push ecx
        _emit 0x33              /* xor eax,[imm32] encoded as immediate xor by MSVC6 */
        _emit 0x05
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov ecx, dword ptr [eax + 0x20]
        xor ecx, 0x85739531
        mov ecx, dword ptr [ecx + 0x225c]
        _emit 0xE8              /* call rel32 -> absolute target 0x00621fd0 */
        _emit 0xA2
        _emit 0x0D
        _emit 0x04
        _emit 0x00
        ret 0x8
    }
}
