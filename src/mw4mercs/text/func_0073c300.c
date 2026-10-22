/*
 * FUN_0073c300 (23 B) — returns 1 if DAT_00858974 is non-NULL and its first
 * byte is non-zero, else 0.
 *
 *   MOV EAX,[0x00858974]      (A1 moffs32 form)
 *   TEST EAX,EAX
 *   JZ  L_ret0
 *   CMP byte ptr [EAX],0x0
 *   JZ  L_ret0
 *   MOV EAX,0x1
 *   RET
 * L_ret0:
 *   XOR EAX,EAX
 *   RET
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_00858974;

__declspec(naked) int FUN_0073c300(void)
{
    __asm {
        mov     eax, dword ptr [g_00858974]
        test    eax, eax
        jz      L_ret0
        cmp     byte ptr [eax], 0x0
        jz      L_ret0
        mov     eax, 0x1
        ret
L_ret0:
        xor     eax, eax
        ret
    }
}
