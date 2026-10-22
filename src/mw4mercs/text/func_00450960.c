/*
 * FUN_00450960 (88 B) — MLR class factory/init (sibling of FUN_0044cea0).
 * Allocates a 0x18-byte object, sets its vtable to 0x450b50, and stores it
 * in global 0x7b98cc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b958c;
extern int g_007b98d0;
extern int g_007d98f8;
extern int g_007b98cc;

extern void __cdecl FUN_006f4710(void);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00450960(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0x0
        push    0x76ea50
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007b98d0], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_509ac
        mov     ecx, dword ptr [g_007d98f8]
        push    ecx
        push    0x76ea30
        push    0x65
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x450b50
        mov     dword ptr [g_007b98cc], esi
        pop     esi
        ret
L_509ac:
        mov     dword ptr [g_007b98cc], 0x0
        pop     esi
        ret
    }
}
