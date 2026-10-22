/*
 * func_005c6060 - FUN_005c6060
 * __thiscall. Compares a float field against a constant and a random
 * value; conditionally resets the field and calls FUN_005c5f90.
 */
__declspec(naked) void func_005c6060()
{
    

extern int DAT_0076c5b0;
extern void __cdecl FUN_00707e50(void);
extern void __cdecl FUN_005c60c4(void);
extern void __cdecl FUN_005c6089(void);
extern void __cdecl FUN_1005c5f3a(void);
__asm {
sub     esp, 8
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x540]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L60c0
        fld     dword ptr [esi + 0x540]
        push    0
        fstp    qword ptr [esp + 8]
        call FUN_00707e50
        fcomp   qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L60c0
        mov     ecx, esi
        mov     dword ptr [esi + 0x540], 0
        call FUN_005c60c4
        fstp    dword ptr [esp + 4]
        mov     ecx, esi
        call FUN_005c6089
        fdivr   dword ptr [esp + 4]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        call FUN_1005c5f3a
    L60c0:
        pop     esi
        add     esp, 8
        ret
    }


}
