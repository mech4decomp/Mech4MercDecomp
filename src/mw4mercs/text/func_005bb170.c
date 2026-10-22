/*
 * FUN_005bb170 (86 B) — __thiscall constructor, RET 0x10.
 *
 * Calls FUN_005ecef0 with 4 params, initializes two sub-objects at
 * +0x258 and +0x26c via FUN_0041fc80, sets their vtables, sets this
 * vtable to 0x00787018, returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005ecef0(void);
extern void FUN_0041fc80(void);

__declspec(naked) void FUN_005bb170(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005ecef0
        lea     edi, [esi + 0x258]
        push    0x0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi + 0x26c]
        push    0x0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ceac
        pop     edi
        mov     dword ptr [esi], 0x787018
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
