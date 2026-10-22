/*
 * func_0050D860 - 103 bytes
 * Array/vector element removal with shifting
 */
__declspec(naked) void func_0050D860()
{
    

extern void __cdecl FUN_10050d670(void);
extern void __cdecl FUN_0050d932(void);
extern void __cdecl FUN_10050d656(void);
extern void __cdecl FUN_0050d8c8(void);
__asm {
push    esi
        mov     esi, [esp + 8]
        mov     eax, [esi]
        test    eax, eax
        jz      return_minus1
        mov     ecx, [esp + 0x18]
        mov     edx, [esi + 8]
        test    ecx, ecx
        mov     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, [esp + 0x18]
        push    edx
        jz      case_zero
        sub     eax, ecx
        push    eax
        push    ecx
        push    esi
        call FUN_10050d670
        add     esp, 8
        push    eax
        mov     eax, [esp + 0x1C]
        push    eax
        call FUN_0050d932
        jmp     after_shift
case_zero:
        sub     eax, ecx
        push    eax
        push    ecx
        push    esi
        call FUN_10050d656
        add     esp, 8
        push    eax
        mov     eax, [esp + 0x1C]
        push    eax
        call FUN_0050d8c8
after_shift:
        add     esp, 0x14
        test    eax, eax
        jz      return_minus1
        sub     eax, [esi + 0x14]
        cdq
        idiv    dword ptr [esi + 8]
        pop     esi
        ret
return_minus1:
        or      eax, -1
        pop     esi
        ret
    }


}
