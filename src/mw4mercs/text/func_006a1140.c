/*
 * FUN_006A1140 (245 B) — __fastcall, 1 stack param (ECX = this).
 * Animation/state update. Dispatches through vtables (this+0x104, +0x20),
 * checks global 0x007f268c, and conditionally calls several helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_7f268c;   /* 0x007f268c */
extern float g_76c5b0;           /* 0x0076c5b0 */

extern int __stdcall FUN_0041fd80(void);
extern char __stdcall FUN_00415230(void *a);
extern float __stdcall FUN_005fb8e0(void);
extern int __cdecl FUN_00637b40(void);
extern int __stdcall FUN_006a2060(void);
extern int __stdcall FUN_0065ad40(void *a, int b, int c);
extern void __stdcall FUN_005c1720(int a);
extern void __stdcall FUN_005dd750(int a);
extern void __stdcall FUN_005c1770(int a);

__declspec(naked) void __stdcall FUN_006A1140(void *param_1)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        mov     ebx, ecx
        push    esi
        mov     esi, dword ptr [ebx + 0x4]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x104]
        cmp     al, 0x1
        jnz     L_A1B2
        lea     edi, [esi + 0x1c8]
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_7f268c]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_A1B2
        mov     ecx, edi
        call    FUN_0041fd80
        mov     edi, eax
        mov     ecx, edi
        call    FUN_005fb8e0
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6   /* test ah,imm8 — MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_A22E
        mov     eax, dword ptr [edi + 0x3f8]
        test    eax, eax
        jnz     L_A22E
        mov     eax, dword ptr [edi + 0x2fc]
        test    eax, eax
        jnz     L_A22E
L_A1B2:
        call    FUN_00637b40
        test    eax, eax
        jz      L_A22E
        fld     dword ptr [esi + 0x584]
        mov     ecx, dword ptr [ebx + 0x8]
        fstp    dword ptr [esp + 0x10]
        call    FUN_006a2060
        xor     ecx, ecx
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jl      L_A1DB
        lea     ecx, [esp + 0xc]
L_A1DB:
        mov     edx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [ebx + 0x14]
        push    edx
        push    0x3e9
        and     edi, 0xfffffffc
        push    ecx
        mov     ecx, edi
        call    FUN_0065ad40
        mov     ebx, eax
        test    ebx, ebx
        jz      L_A22E
        lea     ecx, [esi + 0x1c8]
        call    FUN_0041fd80
        cmp     ebx, eax
        jz      L_A22E
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     ecx, esi
        push    eax
        call    FUN_005c1720
        push    ebx
        mov     ecx, esi
        call    FUN_005dd750
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     ecx, esi
        push    eax
        call    FUN_005c1770
L_A22E:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret
    }
}
