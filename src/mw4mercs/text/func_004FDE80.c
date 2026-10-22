/*
 * FUN_004FDE80 (76 B) — __cdecl, no args.
 * Toggles a global boolean flag (g_007dc954) and swaps a saved pointer
 * (g_007dc950) with the active pointer (g_007dab1c), resetting the active
 * pointer to a fixed object at 0x7b4364.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007dc954;
extern char g_007dc955;
extern int  g_007dab1c;
extern int  g_007dc950;

__declspec(naked) void FUN_004FDE80(void)
{
    __asm {
        mov     al, byte ptr [g_007dc954]
        xor     ecx, ecx
        cmp     al, cl
        sete    al
        cmp     al, cl
        mov     byte ptr [g_007dc954], al
        je      L_4fdeb9
        cmp     byte ptr [g_007dc955], cl
        je      L_4fdea4
        mov     byte ptr [g_007dc955], cl
        ret
L_4fdea4:
        mov     eax, dword ptr [g_007dab1c]
        mov     dword ptr [g_007dc950], eax
        mov     dword ptr [g_007dab1c], 0x7b4364
        ret
L_4fdeb9:
        mov     edx, dword ptr [g_007dc950]
        mov     dword ptr [g_007dab1c], edx
        mov     dword ptr [g_007dc950], ecx
        ret
    }
}
