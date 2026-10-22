/*
 * FUN_005fd530 (242 B) — __cdecl init. Allocates a 0xa4-byte object
 * (FUN_004084d0), constructs it via FUN_00501a20 with a large arg list,
 * stores it in g_007f26b0, then allocates/constructs two 0x20-byte
 * objects (FUN_005013f0) and links them into the first object's +0x44
 * list (FUN_005016b0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc8cc;
extern int g_007dc8a4;
extern int g_007f26b0;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_005016b0(void);

__declspec(naked) void FUN_005fd530(void)
{
    __asm {
        push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_58b
        mov     ecx, dword ptr [g_007dc8cc]
        mov     edx, dword ptr [g_007dc8a4]
        push    0x694000
        push    0x5028b0
        push    0x509550
        push    0
        push    0x693a30
        push    ecx
        push    0x693660
        push    0x5fd870
        push    0
        push    0
        push    edx
        push    0x78aecc
        push    0x420
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [g_007f26b0], eax
        jmp     L_595
L_58b:
        mov     dword ptr [g_007f26b0], 0
L_595:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_5c3
        push    0x4ed4
        push    1
        push    0x78aeb8
        push    0
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x773234
        jmp     L_5c5
L_5c3:
        xor     esi, esi
L_5c5:
        mov     eax, dword ptr [g_007f26b0]
        push    esi
        lea     ecx, [eax+0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_60f
        push    0x4ed8
        push    1
        push    0x78aea4
        push    1
        mov     ecx, esi
        call    FUN_005013f0
        mov     ecx, dword ptr [g_007f26b0]
        push    esi
        add     ecx, 0x44
        mov     dword ptr [esi], 0x773234
        call    FUN_005016b0
        pop     esi
        ret
L_60f:
        mov     ecx, dword ptr [g_007f26b0]
        xor     esi, esi
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0
        pop     esi
        ret
    }
}
