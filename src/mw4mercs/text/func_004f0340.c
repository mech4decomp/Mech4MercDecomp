/*
 * FUN_004f0340 (58 B) — Adept::CameraComponent destructor (__thiscall).
 * Sets vtable 0x774d14, conditionally calls FUN_004c3420, detaches from
 * g_007dc6e0 if it is the current camera, then calls FUN_004f0e30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c3420(void);
extern void __cdecl FUN_004f0e30(void);

extern int g_007dc6e0;   /* DAT_007dc6e0 */
extern int g_774d14;     /* vtable @ 0x774d14 */

__declspec(naked) void FUN_004f0340(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x28]
        test    al, al
        mov     dword ptr [esi], offset g_774d14
        jz      L35f
        mov     al, byte ptr [esi + 0x29]
        test    al, al
        jz      L35f
        mov     ecx, dword ptr [esi + 0x24]
        call    FUN_004c3420
L35f:
        mov     ecx, dword ptr [g_007dc6e0]
        cmp     dword ptr [ecx + 0x4c], esi
        jnz     L371
        mov     eax, dword ptr [ecx]
        push    0x0
        call    dword ptr [eax + 0x20]
L371:
        mov     ecx, esi
        call    FUN_004f0e30
        pop     esi
        ret
    }
}
