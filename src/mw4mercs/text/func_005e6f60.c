/*
 * FUN_005e6f60 (267 B) — __thiscall method (RET 8, two stack params).
 *
 * ProjectileWeapon::ExecutionStateEngine update logic. Dispatches on the
 * state at [this+0xe0]+0x14 (6 or 7), performs FPU comparisons against
 * global constants, and calls several helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005ef7f0(void);
extern void FUN_0041fd80(void);
extern void FUN_005bf9a0(void);
extern double __cdecl FUN_00707e70(int arg);
extern void FUN_005ef380(void);
extern void FUN_005efd10(void);
extern void FUN_005ef840(void);

__declspec(naked) void func_005e6f60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov     edi, eax
        mov     al, byte ptr [esi + 0x1cc]
        test    al, al
        jz      loc_5E7066
        mov     ecx, esi
        call    FUN_005ef7f0
        test    al, al
        jnz     loc_5E6FC4
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [edx + 4]
        lea     edi, [esi + 0x1a4]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_5E6FB6
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_005bf9a0

loc_5E6FB6:
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 0xffffffbf
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        ret     8

loc_5E6FC4:
        fld     qword ptr [esp + 0xc]
        fsub    qword ptr [esi + 0xec]
        fcomp   dword ptr [edi + 0x74]
        fnstsw  ax
        test    ah, 0x41
        jz      loc_5E6FE6
        mov     eax, dword ptr [esi + 0x1d0]
        test    eax, eax
        jnz     loc_5E7066

loc_5E6FE6:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0xc4]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xb4]
        mov     ecx, esi
        call    FUN_005ef380
        mov     ecx, esi
        call    FUN_005efd10
        mov     edx, dword ptr [esi + 0x1d0]
        mov     ecx, dword ptr [edi + 0x48]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x1d0], edx
        mov     dword ptr [esi + 0x1c8], 1
        jl      loc_5E7066
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    7
        mov     byte ptr [esi + 0x1cc], 0
        mov     dword ptr [esi + 0x1d0], 0
        call    dword ptr [edx + 4]
        mov     ecx, esi
        call    FUN_005ef840

loc_5E7066:
        pop     edi
        pop     esi
        ret     8
    }
}
