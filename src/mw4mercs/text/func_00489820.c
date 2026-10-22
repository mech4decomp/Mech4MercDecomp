/*
 * FUN_00489820 (327 B, __thiscall) — Builds a 0x60-entry table of 0x20-byte
 * records on the stack (each initialized via FUN_00491b20), then processes a
 * list of objects (ebx+0xc) for edi iterations, copying each 0x20-byte record
 * into the table at stride 0x20 and accumulating a float (from ebx+0x18,
 * clamped to 2.4f or scaled by g_76fd98) into the record's +0x30 field.
 * Every 3rd entry (ecx==0x60) or when edi==1, calls FUN_00713aa0 on the
 * accumulated table. Returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;   /* 0x0076c5b0 float constant (2.4f) */
extern float g_76fd98;   /* 0x0076fd98 float scale constant */
extern void __cdecl FUN_00491b20(void);
extern void __cdecl FUN_00713aa0(void);

__declspec(naked) int FUN_00489820(void)
{
    __asm {
        sub     esp, 0xc04
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        lea     esi, [esp + 0x10]
        mov     edi, 0x60
L_834:
        mov     ecx, esi
        call    FUN_00491b20
        add     esi, 0x20
        dec     edi
        jne     L_834
        fild    dword ptr [ebx + 0x18]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        test    ah, 0x40
        je      L_85d
        fstp    st(0)
        mov     dword ptr [esp + 0xc], 0x4019999a
        jmp     L_867
L_85d:
        fmul    dword ptr [g_76fd98]
        fstp    dword ptr [esp + 0xc]
L_867:
        mov     edi, dword ptr [ebx + 0x10]
        xor     ecx, ecx
        test    edi, edi
        je      L_95d
L_874:
        mov     esi, dword ptr [ebx + 0xc]
        mov     edx, dword ptr [esi]
        fld     dword ptr [esp + 0xc]
        mov     eax, ecx
        shl     eax, 5
        mov     dword ptr [esp + eax + 0x10], edx
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [esp + eax + 0x14], edx
        mov     edx, dword ptr [esi + 8]
        mov     dword ptr [esp + eax + 0x18], edx
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + eax + 0x1c], edx
        mov     edx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + eax + 0x20], edx
        mov     edx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + eax + 0x24], edx
        mov     edx, dword ptr [esi + 0x18]
        mov     dword ptr [esp + eax + 0x28], edx
        mov     edx, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + eax + 0x2c], edx
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + eax + 0x30], edx
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [esp + eax + 0x34], edx
        mov     edx, dword ptr [esi + 8]
        mov     dword ptr [esp + eax + 0x38], edx
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + eax + 0x3c], edx
        mov     edx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + eax + 0x40], edx
        mov     edx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + eax + 0x44], edx
        mov     edx, dword ptr [esi + 0x18]
        mov     dword ptr [esp + eax + 0x48], edx
        mov     edx, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + eax + 0x4c], edx
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + eax + 0x50], edx
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [esp + eax + 0x54], edx
        mov     edx, dword ptr [esi + 8]
        mov     dword ptr [esp + eax + 0x58], edx
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + eax + 0x5c], edx
        mov     edx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + eax + 0x60], edx
        mov     edx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + eax + 0x64], edx
        mov     edx, dword ptr [esi + 0x18]
        mov     dword ptr [esp + eax + 0x68], edx
        mov     edx, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + eax + 0x6c], edx
        fadd    dword ptr [esp + eax + 0x30]
        add     ecx, 3
        add     esi, 0x20
        cmp     ecx, 0x60
        fstp    dword ptr [esp + eax + 0x30]
        fld     dword ptr [esp + 0xc]
        lea     eax, [esp + eax + 0x54]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        je      L_949
        cmp     edi, 1
        jne     L_956
L_949:
        push    ecx
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_00713aa0
        xor     ecx, ecx
L_956:
        dec     edi
        __emit 0x0F   /* jne L_874: MSVC6 miscomputes backward rel32 (off-by-3) when a call-reloc sits between branch and target */
        __emit 0x85
        __emit 0x1A
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
L_95d:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc04
        ret
    }
}
