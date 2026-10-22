/*
 * FUN_004e53e0 (176 B) — MLR/Adept state-engine subsystem init (__cdecl).
 * Allocates an object (FUN_004084d0 + ctor FUN_004e5550), stores it via
 * g_007dc740, registers 3 vtable/function-pointer pairs with FUN_0070f090,
 * and conditionally stores a global from param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007dc6e4;
extern int   g_007dc740;
extern int   g_007b4354;
extern void  FUN_006f4950(void);
extern void  FUN_004084d0(void);
extern void  FUN_004e5550(void);
extern void  FUN_006f49a0(void);
extern void  FUN_0070f090(void);
extern void  FUN_0040ecc0(void);
extern void  FUN_00411cb0(void);

__declspec(naked) void FUN_004e53e0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dc6e4]
        push    eax
        call    FUN_006f4950
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4e5402
        mov     ecx, eax
        call    FUN_004e5550
        jmp     L_4e5404
    L_4e5402:
        xor     eax, eax
    L_4e5404:
        mov     ecx, dword ptr [g_007dc740]
        mov     dword ptr [ecx], eax
        call    FUN_006f49a0
        push    0x0
        push    0x0
        push    0x4e54a0
        push    0x4e5490
        push    0x774048
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    0x4e54c0
        push    0x4e54b0
        push    0x77401c
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    0x4e54e0
        push    0x4e54d0
        push    0x773fec
        call    FUN_0070f090
        mov     ecx, dword ptr [esp+0x4]
        test    ecx, ecx
        jz      L_4e548f
        push    0x76d9ec
        call    FUN_0040ecc0
        test    eax, eax
        jz      L_4e548f
        push    0x0
        lea     edx, [esp+0x8]
        push    edx
        push    0x773fe0
        mov     ecx, eax
        call    FUN_00411cb0
        test    al, al
        jz      L_4e548f
        mov     eax, dword ptr [esp+0x4]
        mov     dword ptr [g_007b4354], eax
    L_4e548f:
        ret
    }
}
