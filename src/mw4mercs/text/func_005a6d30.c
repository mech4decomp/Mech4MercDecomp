/*
 * FUN_005a6d30 (42 B) — __thiscall constructor with 4 stack params.
 *
 * Calls FUN_005e6cf0 with 4 parameters, sets vtable pointer
 * at [this] to 0x784b14, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005e6cf0(int, int, int, int);

__declspec(naked) void __stdcall FUN_005a6d30(int a1, int a2, int a3, int a4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xC]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005e6cf0
        mov     dword ptr [esi], 0x784b14
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
