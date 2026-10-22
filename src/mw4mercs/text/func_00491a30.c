/*
 * FUN_00491a30 (235 B) — MLR render-state setup: builds a 32-float
 * parameter block on the stack (zeroed then partially filled from
 * global color/lighting constants), then pushes a series of
 * (key,value) pairs into FUN_00713cc0 and passes the block to
 * FUN_00713ae0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_007b220c;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da870;
extern float g_007da878;

extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00713ae0(void);

__declspec(naked) void FUN_00491a30(void)
{
    __asm {
        sub     esp, 0x80
        fld     dword ptr [g_0076d064]
        mov     edx, dword ptr [g_007b220c]
        fsub    dword ptr [g_007b220c]
        push    edi
        xor     eax, eax
        mov     ecx, 0x20
        lea     edi, [esp+0x4]
        rep     stosd
        fst     dword ptr [esp+0xc]
        fld     dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        mov     ecx, dword ptr [g_007da870]
        mov     eax, dword ptr [g_007da874]
        fst     dword ptr [esp+0x24]
        fld     st(1)
        mov     dword ptr [esp+0x8], ecx
        fstp    dword ptr [esp+0x2c]
        mov     dword ptr [esp+0x28], ecx
        mov     ecx, edx
        fstp    dword ptr [esp+0x44]
        mov     dword ptr [esp+0x4], eax
        fld     dword ptr [g_007da878]
        mov     eax, 0xffffff
        fadd    dword ptr [g_007da870]
        mov     dword ptr [esp+0x10], edx
        mov     dword ptr [esp+0x30], edx
        mov     edx, dword ptr [g_007da874]
        fst     dword ptr [esp+0x48]
        push    0x0
        fld     st(1)
        push    0x1
        fstp    dword ptr [esp+0x54]
        mov     dword ptr [esp+0x1c], eax
        mov     dword ptr [esp+0x3c], eax
        fstp    dword ptr [esp+0x70]
        mov     dword ptr [esp+0x58], ecx
        mov     dword ptr [esp+0x5c], eax
        fstp    dword ptr [esp+0x74]
        mov     dword ptr [esp+0x6c], edx
        mov     dword ptr [esp+0x78], ecx
        mov     dword ptr [esp+0x7c], eax
        call    FUN_00713cc0
        push    0x3
        push    0xd
        call    FUN_00713cc0
        push    0x0
        push    0xb
        call    FUN_00713cc0
        push    0x1
        push    0x6
        call    FUN_00713cc0
        push    0x0
        push    0x5
        call    FUN_00713cc0
        push    0x4
        lea     edx, [esp+0x8]
        push    edx
        call    FUN_00713ae0
        pop     edi
        add     esp, 0x80
        ret
    }
}
