/*
 * FUN_004c6270 (322 B) - MLR ElementRenderer static-init / singleton
 * setup. Allocates an ElementRenderer object (0x18 bytes), initializes it,
 * sets up a render-state block, and allocates/registers a second object
 * (0x20 bytes). No EBP frame; uses ESP-relative locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_0045d440(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_0047ec20(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00487ce0(void);

extern int g_007b8c10;   /* DAT_007b8c10 */
extern int g_007dab18;   /* DAT_007dab18 */
extern int g_007dab20;   /* DAT_007dab20 */
extern int g_007dab24;   /* DAT_007dab24 */
extern int g_007b9590;   /* DAT_007b9590 */
extern int g_007da724;   /* DAT_007da724 */

__declspec(naked) void FUN_004c6270(void)
{
    __asm {
        sub     esp, 0x30
        push    esi
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L62AA
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        push    0x771734
        push    0x80
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x0
        mov     dword ptr [g_007dab18], esi
        jmp     L62B4
L62AA:
        mov     dword ptr [g_007dab18], 0x0
L62B4:
        lea     ecx, [esp + 0x4]
        call    FUN_00491280
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x4]
        or      eax, 0x1c000
        mov     dword ptr [esp + 0xc], eax
        mov     eax, dword ptr [esp + 0x8]
        and     ecx, 0xffff3fff
        or      ecx, 0x10000
        and     eax, 0xffffffef
        mov     dword ptr [esp + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x14]
        and     eax, 0xfffffff0
        or      eax, 0x8
        lea     edx, [esp + 0x4]
        or      ecx, 0x10
        mov     dword ptr [esp + 0x8], eax
        push    edx
        lea     eax, [esp + 0x20]
        or      ecx, 0xf
        push    eax
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x28], 0x1
        mov     byte ptr [esp + 0x2c], 0x1
        mov     dword ptr [esp + 0x30], 0x3f800000
        mov     dword ptr [esp + 0x34], 0x3f800000
        mov     byte ptr [esp + 0x38], 0x1
        call    FUN_0045d440
        mov     ecx, dword ptr [g_007b9590]
        add     esp, 0x8
        push    ecx
        mov     dword ptr [g_007dab20], eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L6367
        mov     edx, dword ptr [g_007da724]
        push    edx
        push    0x1
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [g_007dab24], eax
        jmp     L6371
L6367:
        mov     dword ptr [g_007dab24], 0x0
L6371:
        lea     eax, [esp + 0x4]
        push    eax
        push    0x3f800000
        call    FUN_0047ec20
        add     esp, 0x8
        mov     esi, eax
        call    FUN_006f49a0
        mov     ecx, dword ptr [g_007dab24]
        push    esi
        call    FUN_00487ce0
        dec     word ptr [esi + 0x8]
        cmp     word ptr [esi + 0x8], 0x0
        jnz     L63AD
        test    esi, esi
        jz      L63AD
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L63AD:
        pop     esi
        add     esp, 0x30
        ret
    }
}
