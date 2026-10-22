/* FUN_005faf20 - __thiscall accessor: returns (this->field_3d8 != 0) as bool */
__declspec(naked) unsigned char func_005faf20(void)
{
    __asm {
        mov eax, dword ptr [ecx + 0x3d8]
        test eax, eax
        setnz al
        ret
    }
}
