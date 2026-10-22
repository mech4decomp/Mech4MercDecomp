/*
 * func_005c6000 - FUN_005c6000
 * __thiscall. Compares a value against a threshold and conditionally
 * updates a field + calls FUN_005c5f90.
 */
__declspec(naked) void func_005c6000()
{
    

extern void __cdecl FUN_005dbe51(void);
extern void __cdecl FUN_00637b26(void);
extern void __cdecl FUN_006379ff(void);
extern void __cdecl FUN_00707e3d(void);
extern void __cdecl FUN_1005c5f47(void);
__asm {
push    ecx
        push    esi
        mov     esi, ecx
        call FUN_005dbe51
        mov     [esp + 4], eax
        fild    dword ptr [esp + 4]
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        fstp    dword ptr [esp + 4]
        jnz     L6036
        push    0x52
        call FUN_00637b26
        mov     ecx, eax
        call FUN_006379ff
        fcomp   dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        jz      L6053
    L6036:
        push    0
        call FUN_00707e3d
        fadd    dword ptr [esp + 0xc]
        push    0x3f800000
        mov     ecx, esi
        fstp    dword ptr [esi + 0x540]
        call FUN_1005c5f47
    L6053:
        pop     esi
        pop     ecx
        ret     8
    }


}
