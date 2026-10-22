// FUN_00595b60 - __thiscall: search linked list for matching field_38
// this->field_10 = head of linked list of nodes
// Each node: [node+0] = ptr to obj, [node+4] = next node
// Returns obj if obj->field_38 == arg, else NULL

__declspec(naked) void __stdcall FUN_00595b60(void)
{
    __asm {
        mov     ecx, [ecx + 0x10]
        mov     edx, [esp + 4]
    L1:
        test    ecx, ecx
        je      L2
        mov     eax, [ecx]
        test    eax, eax
        mov     ecx, [ecx + 4]
        je      L3
        cmp     [eax + 0x38], edx
        je      L3
        jmp     L1
    L2:
        xor     eax, eax
    L3:
        ret     4
    }
}
