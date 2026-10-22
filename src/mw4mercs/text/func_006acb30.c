/*
 * FUN_006acb30 (128 B) — __thiscall. Reads a value, dispatches on it, then
 * increments counters in a global table indexed by an argument.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_005fbd40(void);
extern void __cdecl FUN_005fbd00(void);
extern void __cdecl FUN_005fbd30(void);

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;

__declspec(naked) void FUN_006acb30(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        push    0x1
        lea     eax, [esp + 0x8]
        push    eax
        mov     dword ptr [esp + 0xc], 0x0
        call    FUN_0041eb40
        mov     esi, dword ptr [esp + 0xc]
        mov     ecx, esi
        call    FUN_005fbd40
        mov     ecx, dword ptr [esp + 0x4]
        and     eax, 0xff
        cmp     ecx, eax
        jz      L_skip
        test    ecx, ecx
        mov     ecx, esi
        jz      L_zero
        call    FUN_005fbd00
        jmp     L_skip
    L_zero:
        call    FUN_005fbd30
    L_skip:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [g_007dab40]
        mov     ecx, dword ptr [esp + 0x20]
        xor     edx, esi
        mov     eax, dword ptr [edx + 0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        mov     edx, dword ptr [eax + ecx*4 + 0x848c]
        add     eax, 0x8484
        inc     edx
        mov     dword ptr [eax + ecx*4 + 0x8], edx
        inc     dword ptr [eax + 0xc00]
        pop     esi
        pop     ecx
        ret
    }
}
