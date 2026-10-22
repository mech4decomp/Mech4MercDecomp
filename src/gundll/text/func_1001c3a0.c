/*
 * FUN_1001c3a0 (39 B) — __thiscall ultimate base ctor #2, RET 0x8, 2 args.
 * Sets vtable 0x1004a8a8, [this+8]=param_1, [this+0xc]=param_2, zeroes
 * +4(byte)/+0x10/+0x14/+0x18. Called by FUN_1001c9e0 with 2 args.
 */

__declspec(naked) void func_1001c3a0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [eax], 0x1004a8a8
        mov     byte ptr [eax + 0x4], cl
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x14], ecx
        ret     0x8
    }
}
