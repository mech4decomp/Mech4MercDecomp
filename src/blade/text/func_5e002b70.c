/*
 * FUN_5e002b70 (315 B) — __stdcall, RET 0xc (3 stack params). Texture/surface
 * setup: validates params, converts sizes to floats, computes strides, and
 * calls FUN_5e01e7b0.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_5e00e190(void);
extern void __cdecl FUN_5e00e120(void);
extern void __cdecl FUN_5e01e6e0(void);
extern void __cdecl FUN_5e01e7b0(void);
extern void __cdecl FUN_5e00e160(void);

extern int g_5e013200;   /* function pointer stored at +0x4068 */
extern int g_5e03842c;   /* debug string arg */
extern int *g_5e035010;  /* IAT: OutputDebugStringA */

__declspec(naked) void __stdcall FUN_5e002b70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0x8
        test    eax, eax
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     dword ptr [esi + 0x4068], OFFSET g_5e013200
        jz      L_ba0
        mov     eax, dword ptr [esp + 0x1c]
        pop     edi
        neg     eax
        sbb     eax, eax
        pop     esi
        and     eax, 0x80004005
        add     esp, 0x8
        ret     0xc
L_ba0:
        mov     eax, dword ptr [esp + 0x1c]
        lea     edi, [esi + 0x4300]
        push    eax
        mov     ecx, edi
        call    FUN_5e00e190
        mov     eax, dword ptr [esi + 0x437c]
        test    eax, eax
        jz      L_ca1
        mov     eax, dword ptr [esi + 0x4368]
        test    ah, 0x8
        jnz     L_bf4
        push    OFFSET g_5e03842c
        call    dword ptr [g_5e035010]
        mov     ecx, dword ptr [esi - 0x4]
        lea     eax, [esi - 0x4]
        push    0x0
        push    0x0
        push    eax
        call    dword ptr [ecx + 0x98]
        pop     edi
        mov     eax, 0x80004005
        pop     esi
        add     esp, 0x8
        ret     0xc
L_bf4:
        mov     ecx, edi
        call    FUN_5e00e120
        test    eax, eax
        jl      L_ca3
        mov     edx, dword ptr [esi + 0x430c]
        mov     dword ptr [esp + 0xc], 0x0
        mov     dword ptr [esp + 0x8], edx
        fild    qword ptr [esp + 0x8]
        mov     dword ptr [esp + 0xc], 0x0
        fstp    dword ptr [esi + 0x4078]
        mov     eax, dword ptr [esi + 0x4308]
        mov     dword ptr [esp + 0x8], eax
        fild    qword ptr [esp + 0x8]
        fstp    dword ptr [esi + 0x407c]
        mov     ecx, dword ptr [esi + 0x430c]
        push    ecx
        call    FUN_5e01e6e0
        mov     dword ptr [esi + 0x4070], eax
        mov     edx, dword ptr [esi + 0x4308]
        push    edx
        call    FUN_5e01e6e0
        mov     dword ptr [esi + 0x4074], eax
        mov     ecx, dword ptr [esi + 0x4384]
        cmp     ecx, 0x8
        jnz     L_c6f
        lea     eax, [esi + 0x8]
        jmp     L_c71
L_c6f:
        xor     eax, eax
L_c71:
        mov     edx, dword ptr [esi + 0x430c]
        push    eax
        mov     eax, dword ptr [esi + 0x4308]
        push    eax
        mov     eax, dword ptr [esi + 0x4310]
        push    edx
        mov     edx, dword ptr [esi + 0x4324]
        push    eax
        push    edx
        push    ecx
        lea     ecx, [esi + 0x4008]
        call    FUN_5e01e7b0
        mov     ecx, edi
        call    FUN_5e00e160
L_ca1:
        xor     eax, eax
L_ca3:
        pop     edi
        pop     esi
        add     esp, 0x8
        ret     0xc
    }
}
