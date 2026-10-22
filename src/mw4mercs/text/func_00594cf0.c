/*
 * FUN_00594cf0 (62 B) — Cleanup/deinitialization function.
 *
 * Frees a global object, calls a pool function, and clears globals.
 * __cdecl calling convention.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_ptr_7F1FB4;  /* global object pointer */
extern int g_val_7F1FC8;    /* global value */

extern void __fastcall FUN_004D5D20(void *obj);
extern void __cdecl FUN_004084E0(void *ptr);
extern int __cdecl FUN_006F4850(int arg1, int arg2);

__declspec(naked) void __cdecl FUN_00594cf0(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, DWORD PTR [g_ptr_7F1FB4]
        TEST ESI, ESI
        JE   L_skip_free

        MOV  ECX, ESI
        CALL FUN_004D5D20
        PUSH ESI
        CALL FUN_004084E0
        ADD  ESP, 4

    L_skip_free:
        MOV  EAX, DWORD PTR [g_val_7F1FC8]
        PUSH 1
        PUSH EAX
        MOV  DWORD PTR [g_ptr_7F1FB4], 0
        CALL FUN_006F4850
        MOV  DWORD PTR [g_val_7F1FC8], 0
        POP  ESI
        RET
    }
}
