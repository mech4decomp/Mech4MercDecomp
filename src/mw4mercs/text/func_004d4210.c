/*
 * FUN_004d4210 (119 B) — MLR network/server subsystem. __thiscall (ECX=this).
 * Copies a 0xc-dword template from 0x7b9460 into this+0x1c, then dispatches
 * through a couple of vtable slots, conditionally runs a log/error sequence,
 * and calls a server helper before a final vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007b9460;
extern int g_00840048;
extern int g_00840008;
extern int g_007dc574;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006d13c0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004d8fb0(void);

__declspec(naked) void FUN_004d4210(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        push    ebx
        mov     ebx, ecx
        push    esi
        push    edi
        lea     edi, [ebx + 0x1c]
        mov     ecx, 0xc
        mov     esi, offset g_007b9460
        rep movsd
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x40]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [g_00840048]
        test    eax, eax
        jz      L_4d426a
        mov     ecx, dword ptr [g_00840008]
        push    ecx
        call    FUN_006f4950
        mov     ecx, dword ptr [g_00840048]
        call    FUN_006d13c0
        call    FUN_006f49a0
L_4d426a:
        mov     ecx, dword ptr [g_007dc574]
        call    FUN_004d8fb0
        mov     ecx, dword ptr [ebx + 0x4c]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x2
        call    dword ptr [edx + 0x4]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
