/*
 * FUN_00594a20 (44 B) — Method that converts an int field at [arg+0x1C]
 * to double and calls FUN_00416A90.
 *
 * __thiscall (ECX = this), 1 arg, callee cleans 4 bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00707E70(int);
extern void __fastcall FUN_00416A90(void *, void *, double);

__declspec(naked) void __fastcall FUN_00594a20(void)
{
    __asm {
        sub     esp, 8
        push    esi
        push    0
        mov     esi, ecx
        call    FUN_00707E70
        mov     eax, [esp + 0x10]   /* arg */
        fiadd   dword ptr [eax + 0x1C]  /* ST0 += (int)[arg+0x1C] */
        lea     ecx, [esp + 4]      /* address for double result */
        push    ecx
        push    eax                 /* arg */
        mov     ecx, esi            /* this */
        fstp    qword ptr [esp + 0x0C]  /* store double to stack */
        call    FUN_00416A90
        pop     esi
        add     esp, 8
        ret     4
    }
}
