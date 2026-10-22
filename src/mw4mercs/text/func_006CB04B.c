/*
 * func_006CB04B - setter (stdcall, ret 8)
 * Sets byte at [eax+0x39]=1 and dword at [eax+0x30]=ecx
 * (leading NOPs are alignment padding within the block)
 */

__declspec(naked) void func_006CB04B()
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        mov     byte ptr [eax + 0x39], 1
        mov     dword ptr [eax + 0x30], ecx
        ret     8
    }
}
