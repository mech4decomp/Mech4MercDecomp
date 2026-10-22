/*
 * FUN_004b5ff0 (128 B) — MLR LightElement constructor (__thiscall).
 * Calls base ctor FUN_004c66b0, initializes several float fields to
 * -1.0f (0xbf800000), sets vtable 0x770804 and sub-vtable 0x4b6440,
 * builds a light via FUN_0048ff20, and stores a handle from a virtual
 * call through DAT_007daa08.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007daa14;
extern int g_007b9584;
extern int g_007daa08;
extern void __cdecl FUN_004c66b0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_0048ff20(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004b5ff0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_007daa14]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004c66b0
        mov     edx, dword ptr [g_007b9584]
        mov     eax, 0xbf800000
        mov     dword ptr [esi + 0x144], eax
        push    edx
        mov     dword ptr [esi + 0x14c], eax
        mov     dword ptr [esi + 0x148], eax
        mov     dword ptr [esi], 0x770804
        mov     dword ptr [esi + 0x13c], 0x4b6440
        call    FUN_006f4950
        push    edi
        call    FUN_00421e60
        push    eax
        push    edi
        call    FUN_0048ff20
        add     esp, 0xc
        mov     edi, eax
        call    FUN_006f49a0
        mov     eax, dword ptr [g_007daa08]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0xc]
        mov     dword ptr [esi + 0x190], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
