/*
 * FUN_00681eb0 (136 B) — __fastcall (ECX = this), RET 8 (2 stack params).
 * Collision/trigger check: calls FUN_005ef7e0 for a float, compares against
 * a global threshold, and conditionally calls FUN_00415230 and updates
 * this+0x8. Returns AL = 1 on hit, 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ef7e0(void);
extern void __cdecl FUN_00415230(void);

extern float g_0076c5b0;
extern char  g_0080db04;
extern int   g_007f2070;
extern float g_0077431c;

__declspec(naked) void __fastcall FUN_00681eb0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        push    edi
        mov     ecx, ebx
        call    FUN_005ef7e0
        fstp    dword ptr [esp + 0x10]
        mov     edi, dword ptr [esi + 0x4]
        mov     al, byte ptr [edi + 0x3d]
        test    al, al
        jnz     l_ee7
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_ee7
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret     0x8
l_ee7:
        mov     al, byte ptr [g_0080db04]
        test    al, al
        jz      l_f30
        mov     eax, dword ptr [g_007f2070]
        mov     ecx, dword ptr [ebx + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jz      l_f30
        fld     dword ptr [edi + 0x2c]
        fadd    dword ptr [esi + 0x8]
        fadd    dword ptr [esp + 0x10]
        fld     dword ptr [edi + 0x30]
        fmul    dword ptr [g_0077431c]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      l_f26
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret     0x8
l_f26:
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x8]
        fstp    dword ptr [esi + 0x8]
l_f30:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret     0x8
    }
}
