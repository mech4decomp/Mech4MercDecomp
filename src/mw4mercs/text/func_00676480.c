/*
 * FUN_00676480 (157 B) — HUD map/hud4 family helper. Computes two ftol()'d
 * float products, walks a hash/array chain at [0x0080da98] looking for a
 * node matching (p1+ftol1, p2+ftol2, p3); unlinks and frees it via the
 * __thiscall FUN_00416130 (this=[0x0080daa8]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_00416130(void);

extern float g_0080da60;   /* 0x0080da60 */
extern float g_0080da5c;   /* 0x0080da5c */
extern float g_007880fc;   /* 0x007880fc */
extern int   g_0080da98;   /* 0x0080da98 (array base) */
extern int   g_0080daa8;   /* 0x0080daa8 (this for FUN_00416130) */

__declspec(naked) void FUN_00676480(void)
{
    __asm {
        fld     dword ptr [g_0080da60]
        fmul    dword ptr [g_007880fc]
        push    esi
        push    edi
        call    FUN_0075db4a
        fld     dword ptr [g_0080da5c]
        fmul    dword ptr [g_007880fc]
        mov     esi, dword ptr [esp + 0xc]
        add     esi, eax
        call    FUN_0075db4a
        mov     edx, dword ptr [esp + 0x10]
        add     edx, eax
        mov     eax, dword ptr [g_0080da98]
        mov     ecx, dword ptr [eax + edx*4]
        test    ecx, ecx
        jz      L651A
        cmp     dword ptr [ecx], esi
        mov     edi, dword ptr [esp + 0x14]
        jnz     L64E3
        cmp     dword ptr [ecx + 0x4], edx
        jnz     L64E3
        cmp     dword ptr [ecx + 0xc], edi
        jnz     L64E3
        mov     esi, dword ptr [ecx + 0x10]
        push    ecx
        mov     ecx, dword ptr [g_0080daa8]
        mov     dword ptr [eax + edx*4], esi
        call    FUN_00416130
        pop     edi
        pop     esi
        ret
L64E3:
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L651A
L64EA:
        cmp     dword ptr [eax], esi
        jnz     L64F8
        cmp     dword ptr [eax + 0x4], edx
        jnz     L64F8
        cmp     dword ptr [eax + 0xc], edi
        jz      L6504
L64F8:
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jnz     L64EA
        pop     edi
        pop     esi
        ret
L6504:
        test    eax, eax
        mov     edx, dword ptr [eax + 0x10]
        mov     dword ptr [ecx + 0x10], edx
        jz      L651A
        mov     ecx, dword ptr [g_0080daa8]
        push    eax
        call    FUN_00416130
L651A:
        pop     edi
        pop     esi
        ret
    }
}
