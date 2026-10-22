/*
 * FUN_00727660 (389 B) — string formatting / log helper.
 *
 * Uses a stack probe (mov eax,0x200c; call FUN_0075dc00), _vsnprintf via
 * IAT, FPU float math, and an assert helper (FUN_006fab90).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075dc00(void);          /* stack probe */
extern void __cdecl FUN_006fab90(void);          /* assert */
extern void __stdcall FUN_00729560(void);
extern void __cdecl FUN_00732a20(void);
extern void __stdcall FUN_007284a0(void);
extern void (__cdecl *g_76b394)(void);           /* _vsnprintf IAT */
extern int g_8816cc;
extern float g_8816d8;
extern char g_8816dc;
extern char g_8816e6;
extern int g_8816ec;
extern float g_7b7118;
extern float g_76d3c8;
extern float g_76dd60;
extern char g_79cbf4[];
extern char g_7a5644[];

__declspec(naked) void __stdcall FUN_00727660(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, 0x200c
        call    FUN_0075dc00
        mov     ecx, dword ptr [g_8816cc]
        mov     edx, dword ptr [g_8816d8]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        lea     eax, [ebp + 0xffffdff4]
        push    esi
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [edi], 0x0
        jz      L_277de
        cmp     byte ptr [eax], 0x0
        jz      L_277de
        lea     ecx, [ebp + 0x14]
        push    ecx
        push    eax
        lea     edx, [ebp + 0xffffdff4]
        push    0x2000
        push    edx
        mov     byte ptr [ebp - 0xd], 0x4
        call    dword ptr [g_76b394]
        mov     al, byte ptr [ebp - 0xd]
        add     esp, 0x10
        cmp     al, 0x4
        jz      L_276e8
        push    offset g_79cbf4
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_276e8
        int     3
L_276e8:
        mov     esi, dword ptr [ebp - 0x4]
        cmp     byte ptr [esi], 0x2f
        jnz     L_276fc
        lea     eax, [ebp - 0x4]
        push    eax
        call    FUN_00729560
        mov     esi, dword ptr [ebp - 0x4]
L_276fc:
        mov     al, byte ptr [g_8816dc]
        test    al, al
        mov     eax, dword ptr [g_8816cc]
        jz      L_2771c
        fild    dword ptr [eax + 0x128]
        fdivr   dword ptr [g_8816d8]
        fstp    dword ptr [g_7b7118]
L_2771c:
        mov     ecx, dword ptr [eax + 0x75c]
        test    ecx, ecx
        jz      L_27735
        push    ebx
        push    edi
        push    esi
        call    FUN_00732a20
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_27735:
        mov     dword ptr [ebx], 0x0
        xor     edi, edi
L_2773d:
        lea     ecx, [ebp + 0xc]
        push    ecx
        push    esi
        call    FUN_007284a0
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [g_8816ec]
        add     ecx, edx
        cmp     eax, edi
        mov     dword ptr [ebx], ecx
        jbe     L_27759
        mov     edi, eax
L_27759:
        mov     eax, dword ptr [ebp + 0xc]
        cmp     esi, eax
        jz      L_27767
        cmp     byte ptr [eax], 0x0
        mov     esi, eax
        jnz     L_2773d
L_27767:
        test    edi, edi
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [ecx], edi
        jz      L_277b0
        mov     al, byte ptr [g_8816e6]
        test    al, al
        jz      L_277b0
        mov     eax, dword ptr [g_8816cc]
        fild    dword ptr [eax + 0x128]
        fdivr   dword ptr [g_8816d8]
        fimul   dword ptr [eax + 0x124]
        fmul    dword ptr [g_76d3c8]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        and     eax, 0x7fffff
        lea     edx, [eax + edi*1 + 0xffc00000]
        mov     dword ptr [ecx], edx
L_277b0:
        sub     esi, dword ptr [ebp - 0x4]
        cmp     esi, 0x2000
        jc      L_277cd
        push    offset g_7a5644
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_277cd
        int     3
L_277cd:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [g_8816cc], eax
        mov     dword ptr [g_8816d8], ecx
L_277de:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
