/*
 * FUN_004EAB20 (237 B) - MLR/Adept init/registration (RET 0, one stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_0070f090(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_00411d60(void);

extern void __cdecl FUN_004eac10(void);
extern void __cdecl FUN_004eac30(void);
extern void __cdecl FUN_004eac50(void);
extern void __cdecl FUN_004eac70(void);
extern void __cdecl FUN_004eac80(void);
extern void __cdecl FUN_004eacb0(void);
extern void __cdecl FUN_004eace0(void);
extern void __cdecl FUN_004ead10(void);

extern int   g_7dc860;   /* DAT_007dc860 */
extern int   g_7dc7b8;   /* DAT_007dc7b8 */
extern int   g_7dc7b4;   /* DAT_007dc7b4 */
extern char  g_7dc7b0;   /* DAT_007dc7b0 */
extern char  g_7745e8[]; /* DAT_007745e8 */
extern char  g_7745c8[]; /* DAT_007745c8 */
extern char  g_7745a8[]; /* DAT_007745a8 */
extern char  g_774588[]; /* DAT_00774588 */
extern char  g_774564[]; /* DAT_00774564 */
extern char  g_774554[]; /* DAT_00774554 */
extern char  g_774548[]; /* DAT_00774548 */
extern char  g_774540[]; /* DAT_00774540 */

__declspec(naked) void __fastcall FUN_004eab20(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      LAB51
        mov     ecx, dword ptr [g_7dc860]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_7745e8
        push    0x22f
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_7dc7b8], eax
        jmp     LAB5B
    LAB51:
        mov     dword ptr [g_7dc7b8], 0x0
    LAB5B:
        push    esi
        push    0x0
        push    0x0
        push    offset FUN_004eac80
        push    offset FUN_004eac10
        push    offset g_7745c8
        mov     dword ptr [g_7dc7b4], 0x3f800000
        mov     byte ptr [g_7dc7b0], 0x0
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_004eacb0
        push    offset FUN_004eac30
        push    offset g_7745a8
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_004eace0
        push    offset FUN_004eac50
        push    offset g_774588
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_004ead10
        push    offset FUN_004eac70
        push    offset g_774564
        call    FUN_0070f090
        mov     ecx, dword ptr [esp + 0x8]
        test    ecx, ecx
        jz      LAC0B
        push    offset g_774554
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      LAC0B
        push    0x0
        push    offset g_7dc7b0
        push    offset g_774548
        mov     ecx, esi
        call    FUN_00411ec0
        push    0x0
        push    offset g_7dc7b4
        push    offset g_774540
        mov     ecx, esi
        call    FUN_00411d60
    LAC0B:
        pop     esi
        ret
    }
}
