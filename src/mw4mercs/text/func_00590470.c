/*
 * FUN_00590470 (329 B, __stdcall ret 4) — Computes a transformed position for
 * an object. Validates a list (esi+0x40c/0x410) and a target (esi+0x400),
 * then copies a 0x30-byte transform from a referenced object (via
 * FUN_0041fd80) into the output buffer, adds an offset, scales three
 * components by g_76d070, and stores the result. On validation failure,
 * falls back to FUN_005fb9f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d070;   /* 0x0076d070 float scale constant */
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005fb9f0(void);

__declspec(naked) int FUN_00590470(void)
{
    __asm {
        sub     esp, 0x18
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ebp, [esi + 0x400]
        push    edi
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        je      L_a4
        mov     eax, dword ptr [esi + 0x410]
        mov     edx, dword ptr [esi + 0x40c]
        sub     eax, edx
        sar     eax, 2
        je      L_a4
        mov     eax, edx
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        je      L_a4
        mov     ecx, dword ptr [esi + 0x410]
        mov     edi, edx
        sub     ecx, edi
        sar     ecx, 2
        je      L_c3
        mov     ecx, dword ptr [eax]
        jmp     L_c5
L_c3:
        xor     ecx, ecx
L_c5:
        mov     edx, dword ptr [ecx + 0x17c]
        test    edx, edx
        je      L_a4
        mov     edx, dword ptr [esi + 0x410]
        sub     edx, dword ptr [esi + 0x40c]
        sar     edx, 2
        je      L_e8
        mov     eax, dword ptr [eax]
        jmp     L_ea
L_e8:
        xor     eax, eax
L_ea:
        mov     eax, dword ptr [eax + 0x17c]
        mov     esi, dword ptr [eax + 0xd8]
        push    ebx
        mov     ebx, dword ptr [esp + 0x2c]
        add     esi, 0x80
        mov     ecx, 0xc
        mov     edi, ebx
        rep     movsd
        mov     ecx, dword ptr [ebx + 0xc]
        mov     edx, dword ptr [ebx + 0x1c]
        mov     eax, dword ptr [ebx + 0x2c]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x18], eax
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        fadd    dword ptr [esp + 0x10]
        add     eax, 0x80
        fld     dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x20], ecx
        fadd    dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x24], edx
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fmul    dword ptr [g_76d070]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_76d070]
        fstp    dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [g_76d070]
        fstp    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x18]
        fstp    dword ptr [ebx + 0xc]
        mov     dword ptr [ebx + 0x1c], eax
        mov     dword ptr [ebx + 0x2c], ecx
        pop     ebx
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x18
        ret     4
L_a4:
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        mov     ecx, esi
        call    FUN_005fb9f0
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x18
        ret     4
    }
}
