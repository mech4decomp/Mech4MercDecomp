/*
 * FUN_005a5bc0 (59 B) — Constructor-like function.
 *
 * Saves this (ECX) in ESI, calls FUN_005f35f0 with 4 params,
 * sets vtable at [this] = 0x784800, calls FUN_005f5670(this),
 * then calls FUN_005a5c20(this, param_2).
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f35f0(void *p1, void *p2, void *p3, void *p4);
extern void __stdcall FUN_005f5670(void *this);
extern void __stdcall FUN_005a5c20(void *this, void *param);

__declspec(naked) void * __stdcall FUN_005a5bc0(void *param1, void *param2, void *param3, void *param4)
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
        mov     dword ptr [esi], 0x784800
        call    FUN_005f5670
        push    edi
        mov     ecx, esi
        call    FUN_005a5c20
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
