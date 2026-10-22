/*
 * FUN_006763e0 (145 B) — HUD map/hud4 family helper. Validates a pair via
 * FUN_00676350, then (on success) computes two ftol()'d float products,
 * calls a __thiscall allocator (FUN_00416110, this=[0x0080daa8]) and links
 * the result into a hash/array at [0x0080da98] indexed by param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00676350(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_0075db4a(void);   /* _ftol */

extern float g_0080da60;   /* 0x0080da60 */
extern float g_0080da5c;   /* 0x0080da5c */
extern float g_007880fc;   /* 0x007880fc */
extern int   g_0080daa8;   /* 0x0080daa8 (this for FUN_00416110) */
extern int   g_0080da98;   /* 0x0080da98 (array base) */

__declspec(naked) int FUN_006763e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    esi
        push    edi
        call    FUN_00676350
        add     esp, 0x8
        test    eax, eax
        jz      L63FD
        pop     edi
        xor     al, al
        pop     esi
        ret
L63FD:
        fld     dword ptr [g_0080da60]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        fld     dword ptr [g_0080da5c]
        fmul    dword ptr [g_007880fc]
        add     edi, eax
        call    FUN_0075db4a
        mov     ecx, dword ptr [g_0080daa8]
        add     esi, eax
        call    FUN_00416110
        xor     ecx, ecx
        cmp     eax, ecx
        jz      L645B
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x10], ecx
        mov     word ptr [eax + 0x8], cx
        mov     ecx, dword ptr [g_0080da98]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [ecx + esi*4]
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [ecx + esi*4], eax
        pop     edi
        mov     dword ptr [eax + 0x10], edx
        mov     al, 0x1
        pop     esi
        ret
L645B:
        mov     ecx, dword ptr [g_0080da98]
        mov     edx, dword ptr [ecx + esi*4]
        xor     eax, eax
        mov     dword ptr [ecx + esi*4], eax
        pop     edi
        mov     dword ptr [eax + 0x10], edx
        mov     al, 0x1
        pop     esi
        ret
    }
}
