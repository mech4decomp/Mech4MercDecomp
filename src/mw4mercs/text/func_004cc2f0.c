/*
 * FUN_004cc2f0 (141 B) — MLR/network subsystem init. Allocates two
 * objects (0x20 and 0x2048 bytes), constructs them via FUN_004d5c10 /
 * FUN_004ce9d0, stores the results in globals, and zeroes a 0xff-dword
 * table at 0x7dac7c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007db084;
extern int  g_007db088;
extern int  g_007db098;
extern void * __cdecl FUN_004084d0(int);
extern int  __cdecl FUN_004d5c10(int, const char *, int, int, int);
extern int  __cdecl FUN_004ce9d0(int, int, const char *);

__declspec(naked) void FUN_004cc2f0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L321
        mov     ecx, dword ptr [g_007db084]
        push    0x0
        push    0x0
        push    ecx
        push    0x7719e8
        push    0x1d7
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007db088], eax
        jmp     L32b
    L321:
        mov     dword ptr [g_007db088], 0
    L32b:
        push    0x2048
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L362
        push    0x7719e0
        push    -0x1
        push    0x0
        mov     ecx, eax
        call    FUN_004ce9d0
        push    edi
        mov     dword ptr [g_007db098], eax
        mov     ecx, 0xff
        xor     eax, eax
        mov     edi, 0x7dac7c
        rep stosd
        pop     edi
        ret
    L362:
        push    edi
        mov     ecx, 0xff
        xor     eax, eax
        mov     edi, 0x7dac7c
        rep stosd
        mov     dword ptr [g_007db098], 0
        pop     edi
        ret
    }
}
