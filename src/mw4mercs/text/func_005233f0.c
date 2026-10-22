/*
 * FUN_005233F0 (222 B) — Switch dispatch on param[1] field, setting values
 * on a struct at this+0x40EE8.
 *
 * __thiscall (ECX=this, stack param), returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005233f0(void)
{
    

extern int DAT_0077a1a0;
extern int DAT_0077a19c;
extern int DAT_0077a198;
extern void __cdecl FUN_00709cf3(void);
extern int DAT_00770120;
extern void __cdecl FUN_0075dad8(void);
extern void __cdecl FUN_00709c28(void);
extern int DAT_0077a194;
extern void __cdecl FUN_0075daad(void);
extern void __cdecl FUN_00709c4d(void);
__asm {
mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [edx + 8]
        mov     edx, dword ptr [edx + 4]
        push    esi
        lea     esi, [edx - 9]
        cmp     esi, 0x13
        ja      l_default
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x5234e8]
        jmp     dword ptr [edx * 4 + 0x5234d0]

    l_case9:
        cmp     dword ptr [eax], 1
        jge     l_case9_skip
        mov     dword ptr [eax], 1
    l_case9_skip:
        fild    dword ptr [eax]
        mov     eax, dword ptr [ecx + 0x40ee8]
        push    ecx
        fmul dword ptr [DAT_0077a1a0]
        fst     dword ptr [eax + 0x3c]
        fmul dword ptr [DAT_0077a19c]
        fadd dword ptr [DAT_0077a198]
        fstp    dword ptr [esp]
        call FUN_00709cf3
        mov     eax, 1
        pop     esi
        ret     8

    l_case10:
        fild    dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x40ee8]
        fmul dword ptr [DAT_0077a1a0]
        fst     dword ptr [ecx + 0x38]
        fmul dword ptr [DAT_00770120]
        call FUN_0075dad8
        push    eax
        call FUN_00709c28
        mov     eax, 1
        pop     esi
        ret     8

    l_case11:
        fild    dword ptr [eax]
        mov     edx, dword ptr [ecx + 0x40ee8]
        fmul dword ptr [DAT_0077a1a0]
        fst     dword ptr [edx + 0x34]
        fmul dword ptr [DAT_0077a194]
        call FUN_0075daad
        push    eax
        call FUN_00709c4d
        mov     eax, 1
        pop     esi
        ret     8

    l_case27:
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     dword ptr [ecx + 0x40], edx
        mov     eax, 1
        pop     esi
        ret     8

    l_case28:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + 0x44], edx

    l_default:
        mov     eax, 1
        pop     esi
        ret     8
    }


}
