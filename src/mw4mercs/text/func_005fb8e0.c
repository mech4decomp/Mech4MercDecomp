/* FUN_005fb8e0 - __thiscall accessor: returns this->field_3d0 as float (ST0) */
__declspec(naked) float func_005fb8e0(void)
{
    __asm {
        fld dword ptr [ecx + 0x3d0]
        ret
    }
}
