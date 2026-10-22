/*
 * FUN_006cf1c0 (185 B) — __cdecl graphics-options registration.
 *
 * Registers four "Terrain Texture Level" options via FUN_0070f090,
 * creates a "Compositing" setting via FUN_006f4710, and conditionally
 * reads a value into DAT_007b2238. Ends with a tail jump to FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_849304;   /* DAT_00849304 */
extern int g_840008;   /* DAT_00840008 */
extern int g_7b2238;   /* DAT_007b2238 */

extern void __cdecl FUN_0070f090(void);
extern int __cdecl FUN_006f4710(void);
extern void __cdecl FUN_006f4950(void);
extern int __cdecl FUN_0040ecc0(void);
extern char __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __cdecl FUN_006cf1c0(void)
{
    __asm {
        push    0x0
        push    0x0
        push    0x6cf2c0
        push    0x6cf280
        push    0x79e928
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    0x6cf2d0
        push    0x6cf290
        push    0x79e8f4
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    0x6cf2e0
        push    0x6cf2a0
        push    0x79e8c0
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    0x6cf2f0
        push    0x6cf2b0
        push    0x79e88c
        call    FUN_0070f090
        mov     eax, dword ptr [g_849304]
        push    eax
        push    0x0
        push    0x79e880
        call    FUN_006f4710
        push    eax
        mov     dword ptr [g_840008], eax
        call    FUN_006f4950
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      done
        push    0x76d9ec
        call    FUN_0040ecc0
        test    eax, eax
        jz      done
        push    0x0
        lea     ecx, [esp + 0x8]
        push    ecx
        push    0x79e880
        mov     ecx, eax
        call    FUN_00411cb0
        test    al, al
        jz      done
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [g_7b2238], edx
done:
        jmp     FUN_006f49a0
    }
}
