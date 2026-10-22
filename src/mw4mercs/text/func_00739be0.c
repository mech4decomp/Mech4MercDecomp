/*
 * FUN_00739be0 (17 B) — __stdcall(1 arg): calls malloc() via IAT at 0x0076b294.
 *
 *   MOV EAX,dword ptr [ESP+0x4]
 *   PUSH EAX
 *   CALL dword ptr [0x0076b294]   (IAT)
 *   ADD ESP,0x4
 *   RET 0x4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b294;

__declspec(naked) void __stdcall FUN_00739be0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    dword ptr [g_0076b294]
        add     esp, 0x4
        ret     4
    }
}
