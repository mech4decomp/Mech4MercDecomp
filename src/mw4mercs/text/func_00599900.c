/*
 * FUN_00599900 — __thiscall (ECX = this), __stdcall ret 0x10 (4 params).
 * Constructor: calls base constructor FUN_005F35F0 with 4 args,
 * sets vtable to 0x783220, then calls FUN_005FBE80(this, 0).
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void *__fastcall func_00599900(void *this)
{
    

extern void __cdecl FUN_005f35dc(void);
extern void __cdecl FUN_005fbe5d(void);
__asm {
mov     eax, dword ptr [esp + 0x10]  /* arg4 */
        mov     edx, dword ptr [esp + 8]     /* arg2 */
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0x0C]  /* arg3 */
        mov     esi, ecx                     /* this */
        mov     ecx, dword ptr [esp + 0x14]  /* arg1 */
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call FUN_005f35dc
        push    0
        mov     ecx, esi
        mov     dword ptr [esi], 0x783220    /* vtable */
        call FUN_005fbe5d
        mov     eax, esi                     /* return this */
        pop     esi
        ret     0x10
    }


}
