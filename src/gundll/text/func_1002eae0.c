/*
 * FUN_1002eae0 (79 B) - __thiscall. Switch dispatch via a byte index table
 * (0x1002eb3c) and a dword jump table (0x1002eb30).
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_1002eb3c[];   /* byte jump-index table at 0x1002eb3c */
extern int g_1002eb30[];             /* dword jump table at 0x1002eb30 */
extern void __cdecl FUN_1002e750(void);   /* rel32 call */
extern void __cdecl FUN_1002eb50(void);   /* rel32 call */
extern void __cdecl FUN_1002e3a0(void);   /* rel32 call */

__declspec(naked) void FUN_1002eae0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     eax, 9
        push    esi
        mov     esi, ecx
        ja      L_eb1f
        movzx   ecx, byte ptr [g_1002eb3c + eax]
        jmp     dword ptr [g_1002eb30 + ecx*4]
L_eafa:
        mov     ecx, esi
        call    FUN_1002e750
        cmp     eax, 1
        mov     dword ptr [esi + 0x24], eax
        jz      L_eb13
        cmp     eax, 3
        jz      L_eb13
        cmp     eax, 9
        jnz     L_eb1f
L_eb13:
        push    eax
        mov     ecx, esi
        call    FUN_1002eb50
        pop     esi
        ret     4
L_eb1f:
        mov     ecx, esi
        push    0xc1121c00
        call    FUN_1002e3a0
        pop     esi
        ret     4
    }
}
