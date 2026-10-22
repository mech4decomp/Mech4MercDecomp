/*
 * FUN_006caf90 (82 B) — Log/format dispatcher. If the string param is
 * non-empty, formats it via vsprintf into a static buffer, then routes
 * to one of two handlers depending on a global mode value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006cb240(void *buf);
extern void __cdecl FUN_006cbf20(void *buf);

extern void *g_iat_76b3ec;      /* IAT: vsprintf */

extern int g_82f384;            /* DAT_0082f384 */
extern void *g_82f388;          /* DAT_0082f388 */

__declspec(naked) void FUN_006caf90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_6cafe1
        cmp     byte ptr [eax], 0x0
        jz      L_6cafe1
        lea     ecx, [esp + 0x8]
        push    ecx
        push    eax
        push    0x83C2DC
        call    dword ptr [g_iat_76b3ec]
        mov     eax, dword ptr [g_82f384]
        add     esp, 0xC
        cmp     eax, 0x2
        jz      L_6cafd1
        cmp     eax, 0x4
        jz      L_6cafd1
        mov     ecx, dword ptr [g_82f388]
        push    0x83C2DC
        call    FUN_006cb240
        ret
L_6cafd1:
        mov     ecx, dword ptr [g_82f388]
        push    0x83C2DC
        call    FUN_006cbf20
L_6cafe1:
        ret
    }
}
