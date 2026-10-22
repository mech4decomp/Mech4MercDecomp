/*
 * FUN_5e02b484 (56 B) - initializes the float conversion function table
 * at 0x5e039018..0x5e03902c with pointers to CRT float helpers.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e03901c;   /* PTR_LAB_5e03901c */
extern int g_5e039018;   /* PTR_LAB_5e039018 */
extern int g_5e039020;   /* PTR_LAB_5e039020 */
extern int g_5e039024;   /* PTR_LAB_5e039024 */
extern int g_5e039028;   /* PTR_LAB_5e039028 */
extern int g_5e03902c;   /* PTR_LAB_5e03902c */

__declspec(naked) void FUN_5e02b484(void)
{
    __asm {
        mov     eax, 0x5e02bb99
        mov     dword ptr [g_5e03901c], 0x5e02b843
        mov     dword ptr [g_5e039018], eax
        mov     dword ptr [g_5e039020], 0x5e02b8a9
        mov     dword ptr [g_5e039024], 0x5e02b7e9
        mov     dword ptr [g_5e039028], 0x5e02b891
        mov     dword ptr [g_5e03902c], eax
        ret
    }
}
