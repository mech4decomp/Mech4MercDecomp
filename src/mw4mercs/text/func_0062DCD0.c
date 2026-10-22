/*
 * FUN_0062DCD0 (237 B) — 3 stack params (__stdcall). XOR-obfuscated
 * dispatch: computes a pointer via DAT_007dab44 ^ DAT_007dab40, builds a
 * checksum over 15 dwords, and calls FUN_0041ec50 twice.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;   /* DAT_007dab44 */
extern int g_7dab40;   /* DAT_007dab40 */
extern int g_7f2ce0;   /* DAT_007f2ce0 */
extern int g_7b55f8;   /* PTR_LAB_007b55f8 */

extern void __cdecl FUN_0070e390(void);
extern void __cdecl FUN_0070e3c0(void);
extern void __cdecl FUN_0070e460(void);
extern void __cdecl FUN_0041ec50(void);

__declspec(naked) void __stdcall FUN_0062DCD0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     eax, dword ptr [eax]
        sub     esp, 0x6C
        push    esi
        xor     eax, dword ptr [g_7dab40]
        mov     edx, dword ptr [eax + 0xC]
        mov     ecx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x16]
        xor     ecx, 0x85739531
        test    al, al
        jz      L_DD12
        mov     eax, dword ptr [esp + 0x7C]
        mov     ecx, dword ptr [ecx + 0x92C]
        lea     edx, [eax + eax*2]
        lea     eax, [eax + edx*4]
        lea     esi, [ecx + eax*4 + 0x37D4]
        jmp     L_DD1B
L_DD12:
        mov     esi, dword ptr [ecx + 0x930]
        add     esi, 0x18
L_DD1B:
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_0070e390
        mov     eax, dword ptr [esi + 0x28]
        mov     dword ptr [esp + 0x4], eax
        xor     esi, esi
L_DD2E:
        mov     ecx, dword ptr [esi + g_7f2ce0]
        mov     edx, dword ptr [esi + g_7b55f8]
        push    ecx
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_0070e3c0
        push    0x4
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_0070e3c0
        add     esi, 0x4
        cmp     esi, 0x3C
        jc      L_DD2E
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0xC]
        push    ecx
        call    FUN_0070e460
        mov     esi, dword ptr [esp + 0x78]
        push    0x10
        lea     edx, [esp + 0x8]
        push    edx
        mov     ecx, esi
        call    FUN_0041ec50
        mov     dword ptr [esp + 0x7C], 0x0
        mov     cx, word ptr [esp + 0x7C]
        lea     eax, [esp + 0x8]
        mov     edx, 0x8
L_DD96:
        xor     cx, word ptr [eax]
        add     eax, 0x2
        dec     edx
        jnz     L_DD96
        push    0x10
        lea     eax, [esp + 0x80]
        mov     word ptr [esp + 0x80], cx
        push    eax
        mov     ecx, esi
        call    FUN_0041ec50
        pop     esi
        add     esp, 0x6C
        ret
    }
}
