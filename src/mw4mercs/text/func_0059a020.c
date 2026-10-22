/*
 * FUN_0059A020 — __thiscall (ECX = this), __stdcall ret 0x10 (4 params).
 * Constructor: calls base constructor FUN_005E3390 with 4 args,
 * sets vtable to 0x783534, sets byte at [this+0x234] to 1.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void *__fastcall func_0059A020(void *this)
{
    

extern void __cdecl FUN_005e337c(void);
__asm {
mov     eax, dword ptr [esp + 0x10]  /* arg4 */
        mov     edx, dword ptr [esp + 8]     /* arg2 */
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0x0C]  /* arg3 */
        mov     esi, ecx                     /* this */
        mov     ecx, dword ptr [esp + 0x14]  /* arg1 (on stack after pushes) */
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call FUN_005e337c
        mov     dword ptr [esi], 0x783534    /* vtable */
        mov     byte ptr [esi + 0x234], 1
        mov     eax, esi                     /* return this */
        pop     esi
        ret     0x10
    }


}
