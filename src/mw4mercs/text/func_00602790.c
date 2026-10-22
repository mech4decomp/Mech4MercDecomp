/*
 * FUN_00602790 (167 B) — Allocate and initialize a node object.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 * Same shape as FUN_00602650 but final vtable is 0x78B3DC.
 * Allocates 0x30 bytes via FUN_004084d0; if non-NULL, initializes it
 * (vtable 0x78B3D4 -> 0x78B3DC), copies fields from param_1, computes
 * a double from FUN_00707e70(0) + param_3, conditionally sets a flag
 * based on param_3 vs 0x0076C5B0, and links it via FUN_004179b0.
 * Returns via FUN_004179b0(0) if allocation failed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int  g_007b8c10;
extern float         g_0076c5b0;
extern void __cdecl  FUN_004084d0(void);
extern void __cdecl  FUN_00415180(void);
extern void __cdecl  FUN_00707e70(void);
extern void __cdecl  FUN_004179b0(void);

__declspec(naked) void __fastcall FUN_00602790(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0x30
        mov     edi, ecx
        call    FUN_004084d0
        mov     esi, eax
        xor     ebx, ebx
        add     esp, 4
        cmp     esi, ebx
        jz      l_null
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [esi], 0x78b3d4
        mov     dword ptr [esi + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 8], ebx
        push    ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x14], edx
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x1c], ecx
        call    FUN_00707e70
        fadd    dword ptr [esp + 0x18]
        mov     byte ptr [esi + 0x29], bl
        mov     byte ptr [esi + 0x28], bl
        fstp    qword ptr [esi + 0x20]
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_skip
        mov     byte ptr [esi + 0x28], 1
    l_skip:
        mov     edx, dword ptr [esp + 0x1c]
        push    esi
        lea     ecx, [edi + 0x280]
        mov     dword ptr [esi], 0x78b3dc
        mov     dword ptr [esi + 0x2c], edx
        call    FUN_004179b0
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
    l_null:
        xor     esi, esi
        push    esi
        lea     ecx, [edi + 0x280]
        call    FUN_004179b0
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
