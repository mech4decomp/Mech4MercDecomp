/*
 * FUN_004f0620 (118 B) - Adept/MLR state-engine init. Allocates a
 * ShapeComponent (0x20 bytes) via FUN_004084d0, constructs it via
 * FUN_004d5c10 (storing result in g_7dc82c), then allocates a 0x14-byte
 * object, calls FUN_00416280, sets its vtable to 0x774d2c and stores it
 * in g_7dc830.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern int __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_00416280(void);
extern int g_7dc83c;   /* 0x007dc83c */
extern int g_7dc82c;   /* 0x007dc82c */
extern int g_7dc830;   /* 0x007dc830 */
extern char g_774d54[]; /* 0x00774d54 string */
extern void *g_774d2c;  /* 0x00774d2c vtable */

__declspec(naked) void func_004f0620(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4f0651
        mov     ecx, dword ptr [g_7dc83c]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_774d54
        push    0x21e
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_7dc82c], eax
        jmp     L_4f065b
    L_4f0651:
        mov     dword ptr [g_7dc82c], 0x0
    L_4f065b:
        push    esi
        push    0x14
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_4f068a
        push    0x1
        push    0x0
        push    0x1003
        mov     ecx, esi
        call    FUN_00416280
        mov     dword ptr [esi], offset g_774d2c
        mov     dword ptr [g_7dc830], esi
        pop     esi
        ret
    L_4f068a:
        mov     dword ptr [g_7dc830], 0x0
        pop     esi
        ret
    }
}
