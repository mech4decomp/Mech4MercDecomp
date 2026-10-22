/* FUN_0064dda0 - ABL object lookup/validate (54 B, __stdcall RET 4) */

extern int *g_007dab44;
extern int g_007dab40;
extern int __cdecl FUN_004fcb30(int);

__declspec(naked) void FUN_0064dda0(void)
{
    __asm {
        mov eax, dword ptr [g_007dab44]
        mov ecx, dword ptr [g_007dab40]
        mov eax, dword ptr [eax]
        xor eax, ecx
        mov ecx, dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [eax + 10h]
        xor ecx, 85739531h
        call FUN_004fcb30
        test eax, eax
        jz loc_64ddd1
        mov edx, dword ptr [eax + 10h]
        shr edx, 13h
        test dl, 1
        jz loc_64ddd3
loc_64ddd1:
        xor eax, eax
loc_64ddd3:
        ret 4
    }
}
