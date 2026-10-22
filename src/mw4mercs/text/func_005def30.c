/*
 * FUN_005DEF30 (42 B) — __cdecl, 1 arg. If arg == -1, calls FUN_00637b40(0xff)
 * then FUN_00637a20 (result in ST0); else loads arg as int. Multiplies the
 * ST0 value by the float constant at 0x0076d5ec and returns it in ST0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_00637b40(int);
extern double __cdecl FUN_00637a20(int);

__declspec(naked) double __cdecl FUN_005def30(void)
{
    

extern int DAT_0076d5ec;
__asm {
cmp     dword ptr [esp + 0x4], -0x1
        jnz     L4F
        push    0xff
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fmul dword ptr [DAT_0076d5ec]
        ret
L4F:
        fild    dword ptr [esp + 0x4]
        fmul dword ptr [DAT_0076d5ec]
        ret
    }


}
