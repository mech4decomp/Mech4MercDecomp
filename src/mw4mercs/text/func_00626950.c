/*
 * FUN_00626950 (29 B) — __thiscall: stores arg1 into *(this+0x4c)+0x10,
 * then calls FUN_0063d4e0(arg2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0063d4e0(void);

__declspec(naked) void FUN_00626950(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4c]
        mov     edx, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [ecx + 0x130]
        mov     dword ptr [eax + 0x10], edx
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    FUN_0063d4e0
        ret     0x8
    }
}
