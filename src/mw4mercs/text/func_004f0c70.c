/*
 * FUN_004f0c70 (59 B) - Adept/MLR factory. Allocates a 0x20-byte object
 * via FUN_004084d0, constructs it via FUN_004d5c10 (storing result in
 * g_7dc83c), or zeroes g_7dc83c on allocation failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern int __cdecl FUN_004d5c10(void);
extern int g_7dc860;   /* 0x007dc860 */
extern int g_7dc83c;   /* 0x007dc83c */
extern char g_774db0[]; /* 0x00774db0 string */

__declspec(naked) void func_004f0c70(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4f0ca0
        mov     ecx, dword ptr [g_7dc860]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_774db0
        push    0x219
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_7dc83c], eax
        ret
    L_4f0ca0:
        mov     dword ptr [g_7dc83c], 0x0
        ret
    }
}
