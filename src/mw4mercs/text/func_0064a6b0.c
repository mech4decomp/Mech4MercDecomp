/*
 * FUN_0064a6b0 (208 B) — Sets a global current-object pointer
 * (DAT_008058e0), calls FUN_0064a5d0, and conditionally runs a
 * cleanup/stat path based on DAT_00805958 and a field at param+0x18.
 * Updates several global counters (DAT_00805918, DAT_00805908,
 * DAT_0080d969, DAT_0080d96a).
 *
 * __cdecl (one param), RET (cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_8058e0;   /* DAT_008058e0 */
extern char  g_805958;   /* DAT_00805958 */
extern int   g_80d984;   /* DAT_0080d984 */
extern int   g_80d970;   /* DAT_0080d970 */
extern int   g_805918;   /* DAT_00805918 */
extern int   g_805908;   /* DAT_00805908 */
extern char  g_80d969;   /* DAT_0080d969 */
extern char  g_80d96a;   /* DAT_0080d96a */

extern void __cdecl FUN_0064a5d0(void);
extern void __cdecl FUN_0064ff50(void);
extern void __cdecl FUN_0064edf0(void);
extern void __cdecl FUN_0064a620(void);
extern void __cdecl FUN_0064ea80(void);

__declspec(naked) void __cdecl FUN_0064a6b0(int param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [g_8058e0]
        push    esi
        mov     dword ptr [g_8058e0], esi
        call    FUN_0064a5d0
        mov     al, byte ptr [g_805958]
        add     esp, 0x4
        test    al, al
        jz      L_64a719
        mov     eax, dword ptr [g_80d984]
        mov     eax, dword ptr [eax + 0x20]
        mov     edx, dword ptr [g_80d970]
        lea     ecx, [eax + eax*0x4]
        mov     eax, dword ptr [edx + ecx*0x8 + 0x4]
        mov     ecx, dword ptr [eax + 0x30]
        push    ecx
        push    0x792a70
        mov     byte ptr [g_805958], 0x0
        call    FUN_0064ff50
        add     esp, 0x8
        test    eax, eax
        jz      L_64a719
        push    eax
        call    FUN_0064edf0
        mov     eax, dword ptr [g_805918]
        add     esp, 0x4
        dec     eax
        mov     dword ptr [g_805918], eax
L_64a719:
        cmp     dword ptr [esi + 0x18], 0xa
        jnz     L_64a747
        mov     edx, dword ptr [esi + 0x28]
        push    edx
        call    FUN_0064edf0
        mov     edx, dword ptr [g_805918]
        dec     edx
        push    esi
        mov     dword ptr [g_805918], edx
        call    FUN_0064a620
        add     esp, 0x8
        mov     dword ptr [g_8058e0], edi
        pop     edi
        pop     esi
        ret
L_64a747:
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064ea80
        push    esi
        mov     byte ptr [g_80d969], 0x0
        mov     byte ptr [g_80d96a], 0x0
        call    FUN_0064a620
        add     esp, 0x4
        mov     dword ptr [g_8058e0], edi
        pop     edi
        pop     esi
        ret
    }
}
