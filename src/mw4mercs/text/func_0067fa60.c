/*
 * FUN_0067fa60 (145 B) — HUD object constructor. Sets vtable (0x79884c),
 * zeroes a 0xa-dword block, asserts size >= 0x40, and initializes an 8-entry
 * FPU table. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void FUN_00415180(void *);
extern int FUN_006fab90(int);
extern void FUN_00707e70(int);
extern double g_0077d038;

__declspec(naked) void FUN_0067fa60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_007b8c10]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [ebp+0x8]
        xor     ebx, ebx
        mov     dword ptr [esi+0x18], ecx
        xor     eax, eax
        mov     dword ptr [esi+0x10], ebx
        mov     dword ptr [esi+0x48], ebx
        lea     edi, [esi+0x20]
        mov     ecx, 0xa
        mov     dword ptr [esi+0x8], ebx
        mov     dword ptr [esi+0xc], ebx
        mov     dword ptr [esi+0x14], ebx
        mov     dword ptr [esi], 0x79884c
        mov     dword ptr [esi+0x1c], ebx
        mov     dword ptr [esi+0x58], ebx
        mov     dword ptr [esi+0x4c], 0xc0000000
        mov     dword ptr [esi+0x54], ebx
        mov     byte ptr [esi+0x50], bl
        rep stosd
        cmp     dword ptr [esi+0x18], 0x40
        jl      loc_fac7
        push    0x79881c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      loc_fac7
        int     3
loc_fac7:
        push    ebx
        call    FUN_00707e70
        lea     eax, [esi+0x64]
        mov     ecx, 0x8
loc_fad5:
        fst     qword ptr [eax]
        add     eax, 0x8
        dec     ecx
        fadd    qword ptr [g_0077d038]
        jnz     loc_fad5
        pop     edi
        fstp    st(0)
        mov     dword ptr [esi+0x60], ebx
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    }
}
