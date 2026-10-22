/*
 * FUN_006a3f10 (160 B) — __thiscall. Queries a virtual method at +0xd4;
 * if it returns 1, calls FUN_00662ee0(param,0). Then calls
 * FUN_00665670(param,1,1,1,0) and FUN_006a22f0(param). If non-zero,
 * calls FUN_006a26f0(param) and compares against 0x76c5b0; if greater,
 * calls a virtual at +0xc and compares again; if greater, calls virtual
 * at +0x34 and FUN_00663d50(param, (*(eax+0x30)&7)*0x7748c8 + 0x799dec).
 * Returns float 0x76d064.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_7748c8;
extern float g_799dec;
extern float g_76d064;
extern void __cdecl FUN_00662ee0(void);
extern void __cdecl FUN_00665670(void);
extern char __cdecl FUN_006a22f0(void);
extern float __cdecl FUN_006a26f0(void);
extern void __cdecl FUN_00663d50(void);

__declspec(naked) float __fastcall FUN_006a3f10(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xd4]
        cmp     al, 0x1
        jnz     L_31
        push    0x0
        push    esi
        call    FUN_00662ee0
        add     esp, 0x8
L_31:
        push    0x0
        push    0x1
        push    0x1
        push    0x1
        push    esi
        call    FUN_00665670
        push    esi
        call    FUN_006a22f0
        add     esp, 0x18
        test    al, al
        jz      L_a5
        push    esi
        mov     ecx, edi
        call    FUN_006a26f0
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_a5
        mov     edx, dword ptr [edi + 0xc]
        lea     ecx, [edi + 0xc]
        push    esi
        call    dword ptr [edx]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_a5
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x30]
        and     ecx, 0x7
        mov     dword ptr [esp + 0xc], ecx
        fild    dword ptr [esp + 0xc]
        push    ecx
        fmul    dword ptr [g_7748c8]
        fadd    dword ptr [g_799dec]
        fstp    dword ptr [esp]
        push    esi
        call    FUN_00663d50
        add     esp, 0x8
L_a5:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret     0x4
    }
}
