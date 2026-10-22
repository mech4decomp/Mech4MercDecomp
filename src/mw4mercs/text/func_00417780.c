/* FUN_00417780 - __thiscall
 * If this+0x10 is non-null, call its vtable[1] with arg 1.
 */
__declspec(naked) void FUN_00417780(void)
{
    __asm {
        mov ecx, dword ptr [ecx+10h]
        test ecx, ecx
        jz L_8e
        mov eax, dword ptr [ecx]
        push 1
        call dword ptr [eax+4]
    L_8e:
        ret
    }
}
