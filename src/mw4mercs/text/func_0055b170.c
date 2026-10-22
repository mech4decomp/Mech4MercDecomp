/*
 * FUN_0x0055b170 (93 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0055b170(void)
{
    

extern void __cdecl FUN_1004ebcd7(void);
extern void __cdecl FUN_1004ebe6b(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004c3cff(void);
__asm {
push    esi
        push    0x3F4CCCCD
        push    0x3F000000
        push    0x3F800000
        push    0x3F800000
        push    0x0077DCF8
        push    3
        mov     esi, ecx
        call FUN_1004ebcd7
        add     esp, 0x18
        push    0
        mov     ecx, eax
        call FUN_1004ebe6b
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     edx, [ecx + 0x40]
        mov     ecx, [esi + 0x6B0]
        xor     edx, 0x85739531
        push    0
        mov     byte ptr [edx + 0x168], 1
        call FUN_1004c3cff
        pop     esi
        ret
    }


}
