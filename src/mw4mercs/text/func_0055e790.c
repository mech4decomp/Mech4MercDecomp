/*
 * FUN_0055e790 (57 B) — Multiplies 4 float pointers by constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0055e790(void)
{
    

extern int DAT_007ddd84;
extern int DAT_007ddd80;
__asm {
mov     eax, [esp + 4]
        fld dword ptr [DAT_007ddd84]
        fmul    dword ptr [eax]
        fstp    dword ptr [eax]
        mov     eax, [esp + 8]
        fld dword ptr [DAT_007ddd80]
        fmul    dword ptr [eax]
        fstp    dword ptr [eax]
        mov     eax, [esp + 0x0C]
        fld dword ptr [DAT_007ddd84]
        fmul    dword ptr [eax]
        fstp    dword ptr [eax]
        mov     eax, [esp + 0x10]
        fld dword ptr [DAT_007ddd80]
        fmul    dword ptr [eax]
        fstp    dword ptr [eax]
        ret
    }


}
