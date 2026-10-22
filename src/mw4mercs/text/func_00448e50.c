/* MLR mesh FUN_00448e50 (78 bytes, __thiscall RET 0xc) */

__declspec(naked) void func_00448e50(void)
{
    __asm {
        mov edx, dword ptr [esp + 0x4]
        xor eax, eax
        mov al, byte ptr [ecx + 0x18a]
        push esi
        mov esi, dword ptr [ecx + 0x14]
        lea edx, [edx + edx*0x2]
        lea edx, [esi + edx*0x4]
        lea esi, [eax + 0xd]
        shl esi, 0x4
        fld dword ptr [esi + ecx*0x1]
        mov esi, dword ptr [esp + 0xc]
        fsub dword ptr [edx]
        fmul dword ptr [ecx + eax*0x4 + 0x148]
        fstp dword ptr [esi]
        mov esi, eax
        shl esi, 0x4
        fld dword ptr [esi + ecx*0x1 + 0xd4]
        pop esi
        fsub dword ptr [edx + 0x8]
        fmul dword ptr [ecx + eax*0x4 + 0x168]
        mov eax, dword ptr [esp + 0xc]
        fstp dword ptr [eax]
        ret 0xc
    }
}
