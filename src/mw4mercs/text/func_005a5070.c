/*
 * FUN_005a5070 (59 B) — Constructor for a class with vtable at 0x784650.
 *
 * __thiscall (ECX = this), returns this in EAX.
 * 4 stack params: param_1, param_2, param_3, param_4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f35f0(void);
extern void __cdecl FUN_005f5670(void);
extern void __cdecl FUN_005a5110(void);

__declspec(naked) void FUN_005a5070(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
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
        mov     dword ptr [esi], 0x784650
        call    FUN_005f5670
        push    edi
        mov     ecx, esi
        call    FUN_005a5110
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
