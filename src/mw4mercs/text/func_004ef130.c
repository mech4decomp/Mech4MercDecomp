/*
 * FUN_004ef130 (116 B) — MLR/Adept application core, cdecl with one stack
 * arg. Performs two virtual calls (vtable[0x20]) to fetch a sub-object,
 * calls FUN_00492560 / FUN_006f4950, allocates a 0x148-byte object
 * (operator new FUN_004084d0) and constructs it via __thiscall FUN_004b9b20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00492560(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b9b20(void);
extern void __cdecl FUN_006f49a0(void);
extern int g_007da884;
extern int g_007daa3c;

__declspec(naked) void FUN_004ef130(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx]
        push    esi
        push    0x4
        lea     edx, [esp + 0x8]
        push    edx
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [g_007da884]
        push    edx
        push    eax
        call    FUN_00492560
        mov     ecx, dword ptr [g_007daa3c]
        push    ecx
        mov     esi, eax
        call    FUN_006f4950
        push    0x148
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L198
        push    esi
        mov     ecx, eax
        call    FUN_004b9b20
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        pop     ecx
        ret
L198:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        pop     ecx
        ret
    }
}
