/*
 * FUN_006ace60 (206 B) — Logging/stat helper. Depending on a field at
 * param+0x3dc and its +0x17c subfield, calls FUN_0067f7b0 then either
 * FUN_0041ed90 or FUN_0041ec50, then updates two counters in a global
 * table derived from DAT_007dab44 ^ DAT_007dab40.
 *
 * __cdecl (3 params), RET (cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;   /* DAT_007dab44 */
extern int g_7dab40;   /* DAT_007dab40 */

extern void __cdecl FUN_0067f7b0(void);
extern void __cdecl FUN_0041ed90(void);
extern void __cdecl FUN_0041ec50(void);

__declspec(naked) void __cdecl FUN_006ace60(int param_1, int param_2, int param_3)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [eax + 0x3dc]
        test    esi, esi
        mov     dword ptr [esp + 0x4], 0x0
        jz      L_6aceb4
        mov     eax, dword ptr [esi + 0x17c]
        test    eax, eax
        jz      L_6aceb4
        cmp     eax, -0x1
        jz      L_6aceb4
        push    0x1
        push    0x0
        push    0xd
        mov     dword ptr [esp + 0x10], eax
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esi + 0x17c]
        add     esp, 0xc
        push    eax
        inc     ecx
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_0041ed90
        jmp     L_6aced9
L_6aceb4:
        push    0x1
        push    0x0
        push    0xd
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        push    eax
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_0041ec50
L_6aced9:
        mov     ecx, dword ptr [g_7dab44]
        mov     esi, dword ptr [ecx]
        mov     edx, dword ptr [g_7dab40]
        push    0x1
        push    0x0
        push    0xd
        xor     esi, edx
        call    FUN_0067f7b0
        mov     edx, dword ptr [esi + 0x14]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x1814]
        mov     edx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [ecx + edx*0x4 + 0x848c]
        add     ecx, 0x8484
        add     esi, eax
        mov     dword ptr [ecx + edx*0x4 + 0x8], esi
        mov     edx, dword ptr [ecx + 0xc00]
        add     esp, 0xc
        add     edx, eax
        mov     dword ptr [ecx + 0xc00], edx
        pop     esi
        pop     ecx
        ret
    }
}
