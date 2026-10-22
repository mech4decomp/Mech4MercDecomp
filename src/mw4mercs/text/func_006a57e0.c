/*
 * FUN_006a57e0 (203 B) — Returns a float constant selected by a 2D
 * lookup. If the global DAT_007f2440 is non-null and the input vector
 * (param[0], param[2]) falls within a bounding box, indexes a 2D table
 * via two _ftol() conversions and returns one of several float
 * constants; otherwise returns a default float.
 *
 * __cdecl (one float* param), RET (cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7f2440;   /* DAT_007f2440 */
extern float g_80da60;   /* DAT_0080da60 */
extern float g_80da58;   /* DAT_0080da58 */
extern float g_80da5c;   /* DAT_0080da5c */
extern float g_80da54;   /* DAT_0080da54 */
extern float g_786dd8;   /* DAT_00786dd8 */
extern float g_7880fc;   /* DAT_007880fc */
extern float g_76d070;   /* DAT_0076d070 */
extern float g_77a198;   /* DAT_0077a198 */
extern float g_76c5b0;   /* DAT_0076c5b0 */
extern float g_76d064;   /* DAT_0076d064 */

extern void __cdecl FUN_0075db4a(void);   /* _ftol */

__declspec(naked) float __cdecl FUN_006a57e0(float *param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [g_7f2440]
        test    edi, edi
        jz      L_6a58a2
        mov     esi, dword ptr [esp + 0xc]
        fld     dword ptr [esi]
        fcomp   dword ptr [g_80da60]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_6a5887
        fld     dword ptr [esi]
        fcomp   dword ptr [g_80da58]
        fnstsw  ax
        test    ah, 0x1
        jz      L_6a5887
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_80da5c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_6a5887
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_80da54]
        fnstsw  ax
        test    ah, 0x1
        jz      L_6a5887
        fld     dword ptr [esi + 0x8]
        push    ebx
        fadd    dword ptr [g_786dd8]
        fmul    dword ptr [g_7880fc]
        call    FUN_0075db4a
        fld     dword ptr [esi]
        fadd    dword ptr [g_786dd8]
        mov     ebx, eax
        shl     ebx, 0x9
        fmul    dword ptr [g_7880fc]
        call    FUN_0075db4a
        add     ebx, eax
        mov     eax, dword ptr [edi + 0x3c]
        mov     ecx, dword ptr [eax + 0x8]
        shl     ebx, 0x1
        sub     ecx, ebx
        xor     eax, eax
        mov     ax, word ptr [ecx]
        pop     ebx
        shr     eax, 0x8
        and     eax, 0x3
        cmp     eax, 0x3
        ja      L_6a58a2
        __emit 0xFF   /* jmp dword ptr [eax*4+0x6a58ac] — MSVC6 re-bases via EBX for FF 24 85 */
        __emit 0x24
        __emit 0x85
        __emit 0xAC
        __emit 0x58
        __emit 0x6A
        __emit 0x00
L_6a5887:
        fld     dword ptr [g_76d070]
        pop     edi
        pop     esi
        ret
L_6a5890:
        fld     dword ptr [g_77a198]
        pop     edi
        pop     esi
        ret
L_6a5899:
        fld     dword ptr [g_76c5b0]
        pop     edi
        pop     esi
        ret
L_6a58a2:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret
    }
}
