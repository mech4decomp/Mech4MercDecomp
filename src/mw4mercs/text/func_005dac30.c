/*
 * FUN_005dac30 (151 B) — AI subsystem shutdown/cleanup.
 *
 * Destroys the Adept::AI object, command entry blocks, calls FUN_00675f70,
 * invokes a virtual method on the object at 0x007f24fc, and releases the
 * named AI systems.
 *
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __stdcall FUN_00415e30(void);
extern void __stdcall FUN_00675f70(void);
extern void __stdcall FUN_006f4850(void);

extern int DAT_007f24d8;
extern int DAT_007f24cc;
extern int DAT_007f24fc;
extern int DAT_007f2460;
extern int DAT_007f244c;
extern int DAT_007f2450;
extern int DAT_007f2464;

__declspec(naked) void FUN_005dac30(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007f24d8]
        test    esi, esi
        jz      L_ac4b
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_ac4b:
        mov     esi, dword ptr [DAT_007f24cc]
        test    esi, esi
        mov     dword ptr [DAT_007f24d8], 0
        jz      L_ac6f
        mov     ecx, esi
        call    FUN_00415e30
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_ac6f:
        mov     dword ptr [DAT_007f24cc], 0
        call    FUN_00675f70
        mov     ecx, dword ptr [DAT_007f24fc]
        test    ecx, ecx
        pop     esi
        jz      L_ac8f
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_ac8f:
        mov     ecx, dword ptr [DAT_007f2460]
        push    0x1
        push    ecx
        call    FUN_006f4850
        mov     edx, dword ptr [DAT_007f244c]
        push    0x1
        push    edx
        call    FUN_006f4850
        mov     eax, dword ptr [DAT_007f2450]
        push    0x1
        push    eax
        call    FUN_006f4850
        mov     ecx, dword ptr [DAT_007f2464]
        push    0x1
        push    ecx
        call    FUN_006f4850
        ret
    }
}
