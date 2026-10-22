/*
 * FUN_005C56DF (147 B) — __thiscall (1 stack arg, RET 4). Builds a small
 * structure on the stack, calls FUN_00547BA0 and FUN_005634E0, invokes a
 * virtual method at [vtable+0x134], then calls the callback arg (edi).
 * Frees a buffer via FUN_004084E0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2460;
extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_005D4D10(void);
extern void __cdecl FUN_00547BA0(void);
extern void __cdecl FUN_005634E0(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_006F49A0(void);

__declspec(naked) void FUN_005C56DF(void)
{
    __asm {
        nop
        sub     esp, 0x10
        mov     eax, dword ptr [g_7f2460]
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_006F4950
        mov     edi, dword ptr [esp + 0x1c]
        push    edi
        mov     ecx, esi
        call    FUN_005D4D10
        lea     ecx, [esp + 8]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x10], 0
        call    FUN_00547BA0
        push    8
        lea     ecx, [esp + 0x10]
        call    FUN_005634E0
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi]
        mov     byte ptr [eax], 0
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x134]
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        call    edi
        mov     eax, dword ptr [esp + 0x10]
        add     esp, 4
        test    eax, eax
        pop     edi
        pop     esi
        je      loc_5c5767
        push    eax
        call    FUN_004084E0
        add     esp, 4
loc_5c5767:
        call    FUN_006F49A0
        add     esp, 0x10
        ret     4
    }
}
