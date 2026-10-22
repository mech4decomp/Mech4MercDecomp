/*
 * func_005c5f90 - FUN_005c5f90
 * __thiscall. Allocates an object, fills it from a double on the stack,
 * and registers it via FUN_005dcd00.
 */
__declspec(naked) void func_005c5f90()
{
    

extern int DAT_007f2460;
extern void __cdecl FUN_006f4949(void);
extern void __cdecl FUN_00707e54(void);
extern int DAT_007f24cc;
extern void __cdecl FUN_1004160e5(void);
extern void __cdecl FUN_005dcca6(void);
extern void __cdecl FUN_006f4941(void);
__asm {
        mov eax, dword ptr [DAT_007f2460]
        sub     esp, 8
        push    esi
        push    eax
        mov     esi, ecx
        call FUN_006f4949
        mov     edx, [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x1d4]
        test    al, al
        jz      L5ff4
        push    0
        call FUN_00707e54
        fstp    qword ptr [esp + 4]
        mov ecx, dword ptr [DAT_007f24cc]
        call FUN_1004160e5
        test    eax, eax
        jz      L5fd5
        mov     dword ptr [eax + 4], 8
        mov     byte ptr [eax], 0
        jmp     L5fd7
    L5fd5:
        xor     eax, eax
    L5fd7:
        mov     ecx, [esp + 4]
        mov     edx, [esp + 8]
        mov     [eax + 8], ecx
        mov     ecx, [esp + 0x10]
        mov     [eax + 0x14], ecx
        push    eax
        mov     ecx, esi
        mov     [eax + 0xc], edx
        call FUN_005dcca6
    L5ff4:
        call FUN_006f4941
        pop     esi
        add     esp, 8
        ret     4
    }


}
