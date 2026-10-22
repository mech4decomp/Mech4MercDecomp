/*
 * func_00513D90 - 96 bytes
 * Sets fields in an object to -1 (0xFFFFFFFF)
 */
__declspec(naked) void func_00513D90()
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, [ecx + 0x0C]
        or      ecx, -1
        xor     edx, 0x85739531
        mov     eax, [edx + 0x50]
        mov     [eax + 0xBC], ecx
        mov     [eax + 0xC4], ecx
        mov     [eax + 0xCC], ecx
        mov     [eax + 0xD4], ecx
        mov     [eax + 0xDC], ecx
        mov     [eax + 0xC0], ecx
        mov     [eax + 0xC8], ecx
        mov     [eax + 0xD0], ecx
        mov     [eax + 0xD8], ecx
        mov     [eax + 0xE0], ecx
        mov     eax, 1
        ret     0x0C
    }


}
