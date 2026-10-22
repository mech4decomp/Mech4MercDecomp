/*
 * FUN_005c1cd0 (383 B) — __thiscall (ECX = this), RET 8.
 *
 * Calls FUN_006f4950(). Stores (float)param at this+0x5e4. If bit 0x13 of
 * (*(this+0x170))->field_10 is set, returns. Otherwise zeroes four globals,
 * computes time deltas via FUN_00707e70, calls FUN_005db360(1); if it
 * returns 1, runs a chain of update calls and computes a squared-distance
 * into this+0x518. Then calls FUN_005c2030/FUN_005c20d0, updates a 64-bit
 * global counter, and calls FUN_006f49a0().
 *
 * CFLAGS: /O1
 */

extern void FUN_006f4950(void);
extern void FUN_006f49a0(void);
extern void FUN_00707e70(void);
extern void FUN_005db360(void);
extern void FUN_005c1f80(void);
extern void FUN_005c63d0(void);
extern void FUN_005c5f20(void);
extern void FUN_005c5d90(void);
extern void FUN_0065e3f0(void);
extern void FUN_005c8350(void);
extern void FUN_005c1c40(void);
extern void FUN_005c1f10(void);
extern void FUN_005caeb0(void);
extern void FUN_0041fd80(void);
extern void FUN_005c2030(void);
extern void FUN_005c20d0(void);
extern int DAT_007f2460;
extern int DAT_007f22e8;
extern int DAT_007f22ec;
extern int DAT_007f22d8;
extern int DAT_007f22dc;
extern int DAT_007f23a8;
extern int DAT_007f23ac;

__declspec(naked) void __fastcall FUN_005c1cd0(int param_1, double param_2)
{
    __asm {
        mov     eax, dword ptr [DAT_007f2460]
        sub     esp, 0x18
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        fld     qword ptr [esp + 0x20]
        mov     ecx, dword ptr [esi + 0x170]
        fstp    dword ptr [esi + 0x5e4]
        mov     edx, dword ptr [ecx + 0x10]
        shr     edx, 0x13
        and     dl, 0x1
        cmp     dl, 0x1
        jnz     l_d0b
        call    FUN_006f49a0
        pop     esi
        add     esp, 0x18
        ret     0x8
    l_d0b:
        push    ebx
        xor     ebx, ebx
        push    edi
        push    ebx
        mov     dword ptr [DAT_007f22e8], ebx
        mov     dword ptr [DAT_007f22ec], ebx
        mov     dword ptr [DAT_007f22d8], ebx
        mov     dword ptr [DAT_007f22dc], ebx
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x550]
        push    ebx
        fstp    qword ptr [esi + 0x558]
        call    FUN_00707e70
        push    0x1
        fstp    qword ptr [esi + 0x550]
        mov     ecx, esi
        call    FUN_005db360
        cmp     al, 0x1
        jnz     l_e0e
        mov     ecx, esi
        call    FUN_005c1f80
        mov     ecx, esi
        call    FUN_005c63d0
        mov     ecx, esi
        call    FUN_005c5f20
        mov     ecx, esi
        call    FUN_005c5d90
        lea     ecx, [esi + 0x5b0]
        call    FUN_0065e3f0
        mov     ecx, esi
        call    FUN_005c8350
        mov     ecx, esi
        call    FUN_005c1c40
        mov     ecx, esi
        call    FUN_005c1f10
        mov     ecx, esi
        call    FUN_005caeb0
        lea     edi, [esi + 0x1c8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jnz     l_db2
        mov     dword ptr [esi + 0x518], ebx
        jmp     l_e0e
    l_db2:
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [esi + 0x170]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [ecx + 0xd8]
        fsubr   dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     dword ptr [esp + 0x14], edx
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x20]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x518]
        fstp    st(0)
        fstp    st(0)
    l_e0e:
        mov     ecx, esi
        call    FUN_005c2030
        mov     ecx, esi
        call    FUN_005c20d0
        mov     eax, dword ptr [DAT_007f22e8]
        mov     ecx, dword ptr [DAT_007f23a8]
        sub     ecx, eax
        mov     eax, dword ptr [DAT_007f23ac]
        mov     dword ptr [DAT_007f23a8], ecx
        mov     ecx, dword ptr [DAT_007f22ec]
        sbb     eax, ecx
        mov     dword ptr [DAT_007f23ac], eax
        call    FUN_006f49a0
        pop     edi
        pop     ebx
        pop     esi
        add     esp, 0x18
        ret     0x8
    }
}
