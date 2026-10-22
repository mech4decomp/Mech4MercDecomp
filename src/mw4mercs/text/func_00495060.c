/*
 * FUN_00495060 (278 B) — MLR particle system constructor/setup.
 * __thiscall, RET 0x8.
 *
 * Allocates a particle buffer, computes buffer offsets, and initializes
 * a set of curve/offset floats via FPU.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da958;
extern int g_007b9598;

extern void __cdecl FUN_004ac110(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0042a210(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0042a270(void);

__declspec(naked) void FUN_00495060(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_007da958]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004ac110
        mov     edx, dword ptr [g_007b9598]
        push    edx
        mov     dword ptr [esi], 0x770170
        call    FUN_006f4950
        push    0xac
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L50B3
        mov     ecx, dword ptr [edi + 0x268]
        push    ecx
        mov     ecx, eax
        call    FUN_0042a210
        mov     ebp, eax
        jmp     L50B5
L50B3:
        xor     ebp, ebp
L50B5:
        mov     dword ptr [esi + 0xb0], ebp
        call    FUN_006f49a0
        mov     eax, dword ptr [edi + 0x268]
        mov     edx, dword ptr [esi + 0xa8]
        lea     ecx, [eax + eax*2]
        shl     ecx, 0x4
        lea     ebx, [edx + ecx]
        mov     dword ptr [esi + 0xb4], ebx
        lea     ebx, [eax + eax*2]
        shl     eax, 0x4
        lea     ecx, [ecx + ebx*4]
        lea     ebx, [edx + ecx]
        add     eax, edx
        mov     edx, dword ptr [esi + 0xb4]
        add     eax, ecx
        lea     ecx, [esi + 0xc0]
        push    ecx
        push    eax
        push    ebx
        mov     dword ptr [esi + 0xbc], eax
        push    edx
        lea     eax, [esi + 0xa0]
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esi + 0xb8], ebx
        call    FUN_0042a270
        fld     dword ptr [edi + 0x298]
        fld     dword ptr [edi + 0x2a0]
        mov     eax, esi
        fst     dword ptr [esp + 0x18]
        fld     dword ptr [edi + 0x2a8]
        mov     ecx, dword ptr [esp + 0x18]
        fadd    st(0), st(2)
        fld     dword ptr [edi + 0x2b0]
        pop     edi
        fadd    st(0), st(2)
        fld     st(3)
        mov     dword ptr [esi + 0xdc], ecx
        fstp    dword ptr [esi + 0xc0]
        fst     dword ptr [esi + 0xc4]
        fld     st(1)
        fstp    dword ptr [esi + 0xc8]
        fstp    dword ptr [esi + 0xcc]
        fstp    dword ptr [esi + 0xd0]
        fstp    dword ptr [esi + 0xd4]
        fstp    dword ptr [esi + 0xd8]
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
