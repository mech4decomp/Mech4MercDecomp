/*
 * FUN_006A2800 (34 B) — __thiscall constructor.
 *
 * Calls FUN_006a22a0 on this, stores param1/param2 at this+0x08/+0x0C,
 * sets vtable pointer 0x799D78 at this+0x00, returns this. RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006a22a0(void);

__declspec(naked) void *__stdcall FUN_006a2800(void *param1, void *param2)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a22a0
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [esi], 0x799d78
        mov     eax, esi
        pop     esi
        ret     8
    }
}
