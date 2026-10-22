/*
 * FUN_00591CA0 — __thiscall (ECX = this), no stack params, plain RET.
 * Constructor: sets vtable, initializes sub-object at offset 0x520,
 * then calls another init method.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

/* FUN_00417980 — __thiscall, no stack params. */
extern void __fastcall func_00417980(void *this);

/* FUN_005F36E0 — __thiscall, no stack params. */
extern void __fastcall func_005f36e0(void *this);

__declspec(naked) void __fastcall func_00591ca0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x520]
        mov     dword ptr [esi], 0x782590
        call    func_00417980
        mov     ecx, esi
        call    func_005f36e0
        pop     esi
        ret
    }
}
