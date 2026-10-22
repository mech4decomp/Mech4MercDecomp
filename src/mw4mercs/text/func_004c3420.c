/*
 * FUN_004C3420 (24 B) — __thiscall this-adjusting wrapper.
 * Adds 0x274 to ECX (this), calls FUN_0041FD80, then calls virtual
 * function at vtable[0] with arg 1 if result is non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0041fd80(void);

__declspec(naked) void __stdcall FUN_004c3420(void)
{
    __asm {
        ADD ECX, 0x274
        CALL FUN_0041fd80
        TEST EAX, EAX
        JZ l_skip
        MOV EDX, dword ptr [EAX]
        PUSH 0x1
        MOV ECX, EAX
        CALL dword ptr [EDX]
    l_skip:
        RET
    }
}
