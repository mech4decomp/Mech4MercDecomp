/*
 * FUN_007336d0 (39 B) — Pointer-clearing destructor wrapper.
 *
 * Takes a pointer-to-pointer; if *p is non-null, calls the object's
 * destructor FUN_00734110 (thiscall, ECX = *p) then operator delete
 * FUN_004084e0 (cdecl, 1 arg), and finally nulls *p.
 *
 * __stdcall (RET 4, one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00734110(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_007336d0(void *param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        mov     esi, dword ptr [edi]
        test    esi, esi
        jz      skip
        mov     ecx, esi
        call    FUN_00734110
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip:
        mov     dword ptr [edi], 0
        pop     edi
        pop     esi
        ret     4
    }
}
