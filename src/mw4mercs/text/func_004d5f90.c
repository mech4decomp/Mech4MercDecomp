/*
 * FUN_004D5F90 (37 B) — thiscall constructor.
 *
 * __thiscall (ECX = this), RET 0 (void return).
 * Sets vtable to 0x00772C80, initializes sub-object at this+0x10
 * via FUN_004179F0 and FUN_00417980, then calls FUN_00415380(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179F0(int);
extern void __cdecl FUN_00417980(int);
extern void __cdecl FUN_00415380(int);

__declspec(naked) void __fastcall FUN_004d5f90(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        PUSH EDI
        LEA EDI, DWORD PTR [ESI + 0x10]
        MOV ECX, EDI
        MOV DWORD PTR [ESI], 0x00772C80
        CALL FUN_004179F0
        MOV ECX, EDI
        CALL FUN_00417980
        MOV ECX, ESI
        CALL FUN_00415380
        POP EDI
        POP ESI
        RET
    }
}
