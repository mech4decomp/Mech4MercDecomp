/*
 * FUN_005fd010 (314 B) — __thiscall weapon/mech render helper. If the
 * incoming short* tag does not match the cached DAT_007db0ac/DAT_007db0ae
 * pair, rebuilds a render state (FUN_0053be60/FUN_00428850/FUN_00523e60),
 * pushes two string-table entries, then dispatches through a vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern short g_007db0ac;
extern short g_007db0ae;
extern int   g_007db098;
extern int   g_007dab40;
extern int   g_007dab44;

extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_0053be60(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_00767400(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_0041e710(void);

__declspec(naked) void FUN_005fd010(void)
{
    __asm {
        sub     esp, 0xb4
        push    esi
        mov     esi, dword ptr [esp+0xbc]
        mov     ax, word ptr [esi]
        cmp     ax, word ptr [g_007db0ac]
        push    edi
        mov     edi, ecx
        jnz     L_3e
        mov     cx, word ptr [esi+2]
        cmp     cx, word ptr [g_007db0ae]
        jz      L_13f
L_3e:
        push    esi
        call    FUN_004da920
        add     esp, 4
        push    2
        push    eax
        push    0
        push    2
        push    0x90
        lea     ecx, [esp+0x40]
        call    FUN_0053be60
        mov     edx, dword ptr [edi+0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp+0x4c]
        call    FUN_00428850
        push    esi
        lea     ecx, [esp+0x84]
        mov     dword ptr [esp+0x7c], 2
        mov     dword ptr [esp+0x80], 0
        call    FUN_00523e60
        push    0x8bd5e8
        lea     ecx, [esp+0x90]
        mov     dword ptr [esp+0x88], 0
        mov     dword ptr [esp+0x8c], 0xffffffff
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp+0xa8]
        call    FUN_00767400
        mov     eax, dword ptr [esp+0x2c]
        push    0
        push    eax
        lea     ecx, [esp+0x34]
        push    ecx
        lea     ecx, [esp+0x18]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp+0x8], dl
        mov     ax, word ptr [eax+2]
        push    0
        lea     ecx, [esp+0xc]
        push    ecx
        lea     edx, [esp+0x14]
        push    edx
        mov     word ptr [esp+0x16], ax
        call    FUN_004d9910
        mov     edx, dword ptr [g_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx+0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx+0x28]
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax+0x48]
        lea     ecx, [esp+0xc]
        call    FUN_0041e710
L_13f:
        pop     edi
        pop     esi
        add     esp, 0xb4
        ret     4
    }
}
