/*
 * FUN_004f07a0 (104 B) - Adept/MLR helper. Reads two args, makes virtual
 * calls (vtable+0x20) on an object, builds a string/stream via
 * FUN_004d1f80 / FUN_004af200 / FUN_004c6920, tears down via
 * FUN_004d21c0, returns the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004af200(void);
extern void __cdecl FUN_004c6920(void);
extern void __cdecl FUN_004d21c0(void);
extern int g_7dc828;    /* 0x007dc828 */
extern char g_7daaea;   /* 0x007daaea */

__declspec(naked) void *func_004f07a0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx]
        sub     esp, 0x44
        push    esi
        push    0x1
        push    edx
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        push    offset g_7dc828
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        push    0x1
        push    offset g_7dc828
        lea     ecx, [esp + 0xc]
        mov     byte ptr [g_7daaea], 0x0
        call    FUN_004d1f80
        lea     eax, [esp + 0x4]
        push    0x0
        push    eax
        call    FUN_004af200
        add     esp, 0x4
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        call    FUN_004c6920
        add     esp, 0xc
        lea     ecx, [esp + 0x4]
        mov     esi, eax
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret
    }
}
