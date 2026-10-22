/*
 * FUN_005a47d0 (59 B) — Constructor with 4 params.
 *
 * Calls FUN_005f35f0(this, param1, param2, param3, param4),
 * sets vtable, calls FUN_005f5670 and FUN_005a4870.
 * Returns this in EAX.
 *
 * __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f35f0(void *this, int a, int b, int c, int d);
extern void __stdcall FUN_005f5670(void *this);
extern void __stdcall FUN_005a4870(void *this, int param);

__declspec(naked) void *__stdcall FUN_005a47d0(void *this, int param1, int param2, int param3, int param4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x04]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_005f35f0
        mov     ecx, esi
        mov     dword ptr [esi], 0x00784340
        call    FUN_005f5670
        push    edi
        mov     ecx, esi
        call    FUN_005a4870
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
