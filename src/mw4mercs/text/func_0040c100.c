/*
 * FUN_0040c100 (476 B) — engine/loader numeric routine. Iterates a
 * counter (10..0x32 step 10), fills a float array via FUN_00415020
 * scaled by globals, and accumulates double-precision sums/ratios
 * (FUN_004194e0 / FUN_00417b90 histogram buckets). FPU-heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d03c;
extern float g_0076d040;
extern float g_0076d044;
extern float g_0076d048;
extern float g_0076d04c;

extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_004194e0(void);
extern void __cdecl FUN_00417b90(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040c100(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xb8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, 0xa
    L_0040c115:
        xor     eax, eax
        push    ebp
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x18], eax
        mov     dword ptr [esp+0x1c], eax
        call    FUN_0040c2e0
        xor     eax, eax
        mov     ecx, 6
        lea     edi, [esp+0x70]
        rep stosd
        mov     dword ptr [esp+0x54], eax
        mov     dword ptr [esp+0x58], eax
        mov     dword ptr [esp+0x5c], eax
        mov     dword ptr [esp+0x38], eax
        mov     dword ptr [esp+0x3c], eax
        mov     dword ptr [esp+0x40], eax
        mov     dword ptr [esp+0x44], eax
        mov     dword ptr [esp+0x30], eax
        mov     dword ptr [esp+0x34], eax
        mov     dword ptr [esp+0x20], eax
        mov     dword ptr [esp+0x24], eax
        mov     dword ptr [esp+0x48], eax
        mov     dword ptr [esp+0x4c], 0x412e8480
        mov     dword ptr [esp+0x28], eax
        mov     dword ptr [esp+0x2c], eax
        mov     dword ptr [esp+0x1c], 0x1388
    L_0040c17e:
        test    ebp, ebp
        jle     L_0040c1dc
        xor     esi, esi
        mov     ebx, ebp
    L_0040c186:
        mov     ecx, dword ptr [esp+0x14]
        lea     edi, [esi+ecx]
        call    FUN_00415020
        fmul    dword ptr [g_0076d04c]
        fsub    dword ptr [g_0076d048]
        fstp    dword ptr [edi]
        mov     edx, dword ptr [esp+0x14]
        lea     edi, [esi+edx]
        call    FUN_00415020
        fmul    dword ptr [g_0076d04c]
        fsub    dword ptr [g_0076d048]
        fstp    dword ptr [edi+4]
        mov     eax, dword ptr [esp+0x14]
        lea     edi, [esi+eax]
        call    FUN_00415020
        fmul    dword ptr [g_0076d04c]
        add     esi, 0xc
        dec     ebx
        fsub    dword ptr [g_0076d048]
        fstp    dword ptr [edi+8]
        jnz     L_0040c186
    L_0040c1dc:
        lea     ecx, [esp+0x14]
        push    ecx
        lea     ecx, [esp+0x64]
        call    FUN_004194e0
        fld     dword ptr [g_0076d03c]
        mov     edi, dword ptr [esp+eax*4+0x70]
        lea     eax, [esp+eax*4+0x70]
        inc     edi
        mov     dword ptr [eax], edi
        fmul    dword ptr [esp+0x6c]
        lea     edx, [esp+0x14]
        push    edx
        fmul    dword ptr [esp+0x70]
        lea     ecx, [esp+0x8c]
        fmul    dword ptr [esp+0x70]
        fmul    dword ptr [g_0076d044]
        fstp    dword ptr [esp+0x14]
        call    FUN_00417b90
        mov     ecx, dword ptr [esp+eax*4+0x54]
        lea     eax, [esp+eax*4+0x54]
        inc     ecx
        mov     dword ptr [eax], ecx
        fld     dword ptr [esp+0xb8]
        fmul    dword ptr [esp+0xbc]
        fmul    dword ptr [esp+0xc0]
        fmul    dword ptr [g_0076d040]
        fld     dword ptr [esp+0x10]
        fcomp
        fnstsw  ax
        fld     st(0)
        test    ah, 0x41
        jnz     L_0040c280
        fadd    qword ptr [esp+0x40]
        fstp    qword ptr [esp+0x40]
        fld     dword ptr [esp+0x10]
        fadd    qword ptr [esp+0x30]
        fstp    qword ptr [esp+0x30]
        fdiv    dword ptr [esp+0x10]
        fcom    qword ptr [esp+0x48]
        fnstsw  ax
        test    ah, 1
        jz      L_0040c2a9
        fstp    qword ptr [esp+0x48]
        jmp     L_0040c2ab
    L_0040c280:
        fadd    qword ptr [esp+0x20]
        fstp    qword ptr [esp+0x20]
        fld     dword ptr [esp+0x10]
        fadd    qword ptr [esp+0x38]
        fstp    qword ptr [esp+0x38]
        fdiv    dword ptr [esp+0x10]
        fcom    qword ptr [esp+0x28]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0040c2a9
        fstp    qword ptr [esp+0x28]
        jmp     L_0040c2ab
    L_0040c2a9:
        fstp    st(0)
    L_0040c2ab:
        dec     dword ptr [esp+0x1c]
        jnz     L_0040c17e
        mov     eax, dword ptr [esp+0x14]
        test    eax, eax
        jz      L_0040c2c6
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_0040c2c6:
        add     ebp, 0xa
        cmp     ebp, 0x32
        jle     L_0040c115
        pop     edi
        mov     al, 1
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
