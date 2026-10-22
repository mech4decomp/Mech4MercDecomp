/*
 * FUN_005a72a0 (55 B) — __thiscall constructor with 4 stack params.
 *
 * Calls FUN_005ecef0 with 4 parameters, sets vtable pointer
 * at [this] to 0x784c00, calls FUN_00707e70(0), stores the
 * resulting double at [this+0xec], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005ecef0(int, int, int, int);
extern double __cdecl FUN_00707e70(int);

__declspec(naked) void __stdcall FUN_005a72a0(int a1, int a2, int a3, int a4)
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
        call    FUN_005ecef0
        push    0
        mov     dword ptr [esi], 0x784c00
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov     eax, esi
        pop     esi
        ret     0x10
    }


}
