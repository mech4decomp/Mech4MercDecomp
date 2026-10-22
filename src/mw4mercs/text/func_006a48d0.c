/*
 * FUN_006a48d0 (228 B) — __thiscall. Invokes two virtual-style
 * methods (via [this+0xc] and [this+0x1c] fn ptrs), then performs
 * a series of float comparisons against globals, calling helper
 * functions and returning a float global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a26f0(void *p);
extern void __cdecl FUN_006a4b70(void *p, float f);
extern void __cdecl FUN_00663900(void *p, float f, int i);
extern void __cdecl FUN_006a49e0(void *p);
extern void __cdecl FUN_00664680(void *p, int i);

extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_799d40;   /* 0x00799d40 */
extern float g_76d064;   /* 0x0076d064 */

__declspec(naked) void __stdcall FUN_006a48d0(void *param)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [edi + 0xc]
        push    esi
        call    dword ptr [eax]
        fstp    st(0)
        mov     edx, dword ptr [edi + 0x1c]
        lea     ecx, [edi + 0x1c]
        push    esi
        call    dword ptr [edx]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_a9
        push    esi
        mov     ecx, edi
        call    FUN_006a26f0
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_a9
        push    0x43e10000
        push    esi
        call    FUN_006a4b70
        fcomp   dword ptr [g_799d40]
        add     esp, 8
        fnstsw  ax
        test    ah, 0x1
        jz      L_4c
        push    0
        push    0x43960000
        push    esi
        call    FUN_00663900
        fld     dword ptr [g_76d064]
        add     esp, 0xc
        pop     edi
        pop     esi
        ret     4
L_4c:
        push    esi
        mov     edi, 2
        call    FUN_006a49e0
        fcomp   dword ptr [g_799d40]
        add     esp, 4
        fnstsw  ax
        test    ah, 0x41
        jz      L_9d
        push    0x43960000
        push    esi
        call    FUN_006a4b70
        fcomp   dword ptr [g_799d40]
        add     esp, 8
        fnstsw  ax
        test    ah, 0x1
        jnz     L_9d
        push    0x42c80000
        push    esi
        call    FUN_006a4b70
        fcomp   dword ptr [g_799d40]
        add     esp, 8
        fnstsw  ax
        test    ah, 0x41
        jnz     L_9f
L_9d:
        xor     edi, edi
L_9f:
        push    edi
        push    esi
        call    FUN_00664680
        add     esp, 8
L_a9:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret     4
    }
}
