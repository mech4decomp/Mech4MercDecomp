/*
 * FUN_00571420 (143 B, true extent 0x571420-0x5714AE) - in-.text data block
 * transcription (wave U). Reads a byte from a global string cursor, calls
 * FUN_0064DB40, decodes a value, calls FUN_004FCB30, conditionally calls
 * FUN_005B7D90/FUN_006FABF0, then FUN_005B7DA0 and advances the cursor.
 *
 * NOTE: the 354-byte block 0x571420-0x571581 contains a SECOND function at
 * 0x005714B0 (adjacent, not in assigned list) - reported separately.
 *
 * Match: target 100%
 */

#pragma warning(disable : 4035 4793)

extern int  g_00805918;
extern int  g_00805908;
extern int  g_0080592c;
extern int  g_007dab44;
extern int  g_007dab40;
extern char g_007dde2c;
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005b7d90(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_005b7da0(void);

__declspec(naked) void FUN_00571420(void)
{
    __asm {
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        push    esi
        mov     dword ptr [g_00805908], ecx
        mov     dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [g_0080592c]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab44]
        sub     eax, 4
        mov     dword ptr [g_0080592c], eax
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        je      L571490
        mov     ecx, esi
        call    FUN_005b7d90
        test    al, al
        je      L571490
        push    0x7806f0
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        je      L571490
        int     3
    L571490:
        mov     ecx, esi
        call    FUN_005b7da0
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_00805918], eax
        mov     dword ptr [g_00805908], ecx
        xor     eax, eax
        pop     esi
        ret
    }
}
