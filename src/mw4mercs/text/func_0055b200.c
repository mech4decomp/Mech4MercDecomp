/*
 * FUN_0x0055b200 (120 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0055b200(void)
{
    

extern int DAT_0077b9a4;
extern void __cdecl FUN_00707e5d(void);
extern void __cdecl FUN_00707e4b(void);
extern int DAT_007dd268;
extern void __cdecl FUN_1004ebc93(void);
extern void __cdecl FUN_1004ebe27(void);
__asm {
sub     esp, 8
        fld dword ptr [DAT_0077b9a4]
        push    esi
        mov     esi, ecx
        fadd    qword ptr [esi + 0x700]
        push    0
        fstp    qword ptr [esp + 8]
        call FUN_00707e5d
        fcomp   qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        jne     L_done
        push    0
        call FUN_00707e4b
        fstp    qword ptr [esi + 0x700]
        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, [eax + 0x40EE8]
        mov     eax, [ecx + 0x48]
        test    eax, eax
        je      L_done
        push    0x3F4CCCCD
        push    0x3F000000
        push    0x3F800000
        push    0x3F800000
        push    0x0077DD40
        push    2
        call FUN_1004ebc93
        add     esp, 0x18
        push    0
        mov     ecx, eax
        call FUN_1004ebe27
L_done:
        pop     esi
        add     esp, 8
        ret
    }


}
