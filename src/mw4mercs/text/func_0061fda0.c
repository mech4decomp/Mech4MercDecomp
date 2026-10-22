/*
 * FUN_0061fda0 (79 B) — __thiscall (this in ECX).
 *
 * Dispatches on DAT_008058ac: if 0xe prints a watch list via
 * FUN_0061fc80/FUN_0061fa80; if 2 and DAT_008050a0==0 calls
 * FUN_0061f990(DAT_008050a4). Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0061fc80(void);
extern void __cdecl FUN_0061fa80(void);
extern void __cdecl FUN_0061f990(void);
extern int g_8058ac;   /* 0x008058ac */
extern int g_8050a0;   /* 0x008050a0 */
extern int g_8050a4;   /* 0x008050a4 */

__declspec(naked) void FUN_0061fda0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        sub     eax, 0x2
        jz      L_fcf
        sub     eax, 0xc
        jnz     L_feb
        push    0x78c998
        mov     ecx, esi
        call    FUN_0061fc80
        mov     ecx, dword ptr [esi + 0x8]
        call    FUN_0061fa80
        xor     eax, eax
        pop     esi
        ret
    L_fcf:
        mov     eax, dword ptr [g_8050a0]
        test    eax, eax
        jnz     L_fe6
        mov     eax, dword ptr [g_8050a4]
        mov     ecx, dword ptr [esi + 0x8]
        push    eax
        call    FUN_0061f990
    L_fe6:
        call    FUN_00649150
    L_feb:
        xor     eax, eax
        pop     esi
        ret
    }
}
