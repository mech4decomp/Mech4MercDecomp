/*
 * FUN_00739c30 (15 B) — __stdcall(1 arg): calls free() via IAT at 0x0076b2d0.
 *
 *   MOV EAX,dword ptr [ESP+0x4]
 *   PUSH EAX
 *   CALL dword ptr [0x0076b2d0]   (IAT)
 *   POP ECX
 *   RET 0x4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2d0;

__declspec(naked) void __stdcall FUN_00739c30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    dword ptr [g_0076b2d0]
        pop     ecx
        ret     4
    }
}
