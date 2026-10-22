/*
 * FUN_0064b7d0 (61 B) — __thiscall ABL current-state resolver. Looks up the
 * state name (this+0x20's module's state table entry +0x30) via
 * FUN_0064ff50, stores the result at this+0x38, and reports an error if not
 * found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_0080d970;
extern char g_792c3c[];

extern int  __cdecl FUN_0064ff50(const char *, int);
extern void __cdecl FUN_00562f10(int, const char *);

__declspec(naked) void FUN_0064b7d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+20h]
        mov     ecx, dword ptr [g_0080d970]
        lea     eax, [eax+eax*4]
        mov     eax, dword ptr [ecx+eax*8+4]
        mov     edx, dword ptr [eax+30h]
        mov     eax, dword ptr [esp+8]
        push    edx
        push    eax
        call    FUN_0064ff50
        add     esp, 8
        test    eax, eax
        mov     dword ptr [esi+38h], eax
        pop     esi
        jnz     L1
        push    offset g_792c3c
        push    eax
        call    FUN_00562f10
        add     esp, 8
L1:
        ret     4
    }
}
