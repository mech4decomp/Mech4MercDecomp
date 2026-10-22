/*
 * FUN_0074b0f0 (93 B) — Cleanup: drains a linked list at 0x008b7a20
 * (calling FUN_006f4230 on each node), then frees two objects at
 * 0x0085a23c / 0x0085a240 via FUN_00740db0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_8b7a20;   /* 0x008b7a20 linked-list head */
extern unsigned int g_85a23c;   /* 0x0085a23c object ptr */
extern unsigned int g_85a240;   /* 0x0085a240 object ptr */

extern void __cdecl FUN_006f4230(void *node);
extern void __cdecl FUN_00740db0(void *obj);

__declspec(naked) void FUN_0074b0f0(void)
{
    __asm {
        mov     eax, dword ptr [g_8b7a20]
        test    eax, eax
        jz      L110
L0F9:
        mov     ecx, dword ptr [eax]
        push    eax
        mov     dword ptr [g_8b7a20], ecx
        call    FUN_006f4230
        mov     eax, dword ptr [g_8b7a20]
        test    eax, eax
        jnz     L0F9
L110:
        mov     eax, dword ptr [g_85a23c]
        test    eax, eax
        mov     dword ptr [g_8b7a20], 0
        jz      L133
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a23c], 0
L133:
        mov     eax, dword ptr [g_85a240]
        test    eax, eax
        jz      L14C
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a240], 0
L14C:
        ret
    }
}
