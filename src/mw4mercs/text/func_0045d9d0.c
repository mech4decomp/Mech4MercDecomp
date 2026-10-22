/*
 * FUN_0045d9d0 (150 B) — MLR static init: registers "MLR_I_L_DeT_PMesh"
 * with the log/registry, allocates a PMesh object (vtable 0x45dbf0) and
 * an 8-byte buffer with a 0x400-byte payload.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b958c;
extern char g_76ed34[];
extern char g_76ed10[];
extern int g_007d9918;
extern int g_007d9928;
extern int g_007d9910;
extern int g_007d9914;
extern void __cdecl FUN_006f4710(void);
extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004151c0(void);
extern void FUN_0045dbf0(void);

__declspec(naked) void FUN_0045d9d0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0x0
        push    offset g_76ed34
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007d9918], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L1
        mov     ecx, dword ptr [g_007d9928]
        push    ecx
        push    offset g_76ed10
        push    0x62
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], offset FUN_0045dbf0
        mov     dword ptr [g_007d9910], esi
        jmp     L2
L1:
        mov     dword ptr [g_007d9910], 0x0
L2:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L3
        push    0x400
        mov     dword ptr [esi], 0x0
        mov     dword ptr [esi+0x4], 0x100
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007d9914], esi
        pop     esi
        ret
L3:
        mov     dword ptr [g_007d9914], 0x0
        pop     esi
        ret
    }
}
