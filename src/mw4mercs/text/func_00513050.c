/*
 * FUN_00513050 (2512 B) — terrain/geometry "team parameter" accessor.
 * __stdcall, RET 0xC (3 params). Dispatches on **param_3 (a 62-entry jump
 * table @ 0x513a20) returning a field of the object at param_1, or copying
 * a string field into a caller buffer. Case 0x30 has a nested 13-entry
 * sub-jump-table (@ 0x513b18) for per-tile bit/field access.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_006fab90(void);

extern void *g_0076b410;   /* IAT _mbscpy */
extern int  g_007dd268;    /* DAT_007dd268 */
extern int  g_007dab44;    /* DAT_007dab44 */
extern int  g_007dab40;    /* DAT_007dab40 */
extern int  g_jt_513a20[]; /* jump table @ 0x513a20 */
extern int  g_jt_513b18[]; /* jump table @ 0x513b18 */

__declspec(naked) unsigned int __stdcall FUN_00513050(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x100
        mov     ecx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax]
        cmp     eax, 0x3d
        push    ebx
        push    esi
        push    edi
        ja      L_3a14
        jmp     dword ptr [eax*4 + g_jt_513a20]

        /* case 0: return [param_1+0x36c] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x36c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 1: return [param_1+0x370] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x370]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 2: return [param_1+0x10] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 3: return [param_1+0x14] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 4: return [param_1+0x18] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x18]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 5: return [param_1+0x20] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 6: return [param_1+0x24] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x24]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 7: return [param_1+0x28] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x28]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 8: return [param_1+0x2c] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x2c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 9: return [param_1+0x30] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x30]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 10: return [param_1+0x34] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x34]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 11: return [param_1+0x38] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x38]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 12: return [param_1+0x3c] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x3c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 13: return [param_1+0x40] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x40]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 14: return [param_1+0x44] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x44]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 15: return [param_1+0x48] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x48]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 16: return [param_1+0x4c] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x4c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 17: return [param_1+0x50] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x50]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 18: return [param_1+0x54] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x54]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 19: return [param_1+0x58] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x58]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 20: return [param_1+0x5c] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x5c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 21: return [param_1+0x60] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x60]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 22: return [param_1+0x64] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x64]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 23: return [param_1+0x68] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x68]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 24: return [param_1+0x84] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x84]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 25: return [param_1+0x88] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x88]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 26: return [param_1+0x8c] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x8c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 27: return [param_1+0x90] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x90]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 28: bit test [param_1+0xbc] or [param_1+0xc0] */
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [edx]
        cmp     ecx, 0x20
        jl      L_3244
        mov     eax, dword ptr [ebp + 0x8]
        sub     ecx, 0x20
        lea     edx, [eax + 0xc0]
        jmp     L_39e8
L_3244:
        mov     edx, dword ptr [ebp + 0x8]
        add     edx, 0xbc
        jmp     L_39e8

        /* case 29: bit test [param_1+0xc4] or [param_1+0xc8] */
        mov     eax, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [eax]
        cmp     ecx, 0x20
        jl      L_326d
        mov     edx, dword ptr [ebp + 0x8]
        sub     ecx, 0x20
        add     edx, 0xc8
        jmp     L_39e8
L_326d:
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [eax + 0xc4]
        jmp     L_39e8

        /* case 30: bit test [param_1+0xcc] or [param_1+0xd0] */
        mov     ecx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx]
        sub     ecx, 0x33
        cmp     ecx, 0x20
        jl      L_3299
        mov     edx, dword ptr [ebp + 0x8]
        sub     ecx, 0x20
        add     edx, 0xd0
        jmp     L_39e8
L_3299:
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [eax + 0xcc]
        jmp     L_39e8

        /* case 31: bit test [param_1+0xd4] or [param_1+0xd8] */
        mov     ecx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx]
        sub     ecx, 0x64
        cmp     ecx, 0x20
        jl      L_32c5
        mov     edx, dword ptr [ebp + 0x8]
        sub     ecx, 0x20
        add     edx, 0xd8
        jmp     L_39e8
L_32c5:
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [eax + 0xd4]
        jmp     L_39e8

        /* case 32: bit test [param_1+0xdc] or [param_1+0xe0] */
        mov     ecx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx]
        sub     ecx, 0x83
        cmp     ecx, 0x20
        jl      L_32f4
        mov     edx, dword ptr [ebp + 0x8]
        sub     ecx, 0x20
        add     edx, 0xe0
        jmp     L_39e8
L_32f4:
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [eax + 0xdc]
        jmp     L_39e8

        /* case 33: return [param_1+0x94] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x94]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 34: return [param_1+0x98] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x98]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 35: return [param_1+0x9c] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x9c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 36: return [param_1+0xa0] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0xa0]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 37: return [param_1+0x374] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x374]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 38: copy string field @ param_1+0x378 into *param_3[1] */
        mov     eax, dword ptr [ebp + 0x8]
        lea     ebx, [eax + 0x378]
        cmp     byte ptr [ebx], 0x0
        jz      L_38a2
        mov     esi, dword ptr [ecx + 0x4]
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_3383
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0x0
L_3383:
        push    0x0
        push    0x100
        call    FUN_006f3c80
        mov     edi, eax
        xor     eax, eax
        mov     dword ptr [esi], edi
        mov     ecx, 0x40
        rep     stosd
        mov     ecx, dword ptr [esi]
        push    ebx
        push    ecx
        call    dword ptr [g_0076b410]
        add     esp, 0x8
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 39: copy string field @ param_1+0x3f8 */
        mov     edx, dword ptr [ebp + 0x8]
        add     edx, 0x3f8
        push    edx
        lea     ecx, [ebp + 0x10]
        mov     dword ptr [ebp + 0x10], 0x0
        call    FUN_00412780
        mov     edi, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [g_007dd268]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [edx + 0x40970]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        lea     eax, [ebp + 0x10]
        xor     ecx, 0x85739531
        push    eax
        add     ecx, 0xa8
        call    FUN_00412740
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      L_343a
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_343a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_343a:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 40: build ".tga" filename from fields @ 0x478/0x378 */
        mov     ebx, dword ptr [ecx + 0x4]
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      L_345a
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0x0
L_345a:
        push    0x0
        push    0x100
        call    FUN_006f3c80
        mov     edx, dword ptr [ebp + 0x8]
        or      ecx, 0xffffffff
        mov     dword ptr [ebx], eax
        mov     byte ptr [eax], 0x0
        xor     eax, eax
        lea     edi, [edx + 0x478]
        mov     dword ptr [ebp + 0x10], edi
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     esi, [ebp - 0x100]
        mov     dword ptr [ebp + 0x8], esi
        mov     esi, edi
        mov     edi, dword ptr [ebp + 0x8]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        lea     edi, [edx + 0x378]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [ebp - 0x100]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x7700ac
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [ebp - 0x100]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        lea     eax, [ebp - 0x100]
        and     ecx, 0x3
        push    eax
        rep     movsb
        call    FUN_006fc4d0
        test    al, al
        jnz     L_351c
        mov     ecx, dword ptr [ebx]
        pop     edi
        pop     esi
        mov     byte ptr [ecx], al
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_351c:
        mov     edi, dword ptr [ebp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebx]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 41: copy string field @ param_1+0x4f8 */
        mov     eax, dword ptr [ebp + 0x8]
        or      ecx, 0xffffffff
        lea     edi, [eax + 0x4f8]
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [g_007dd268]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [eax + 0x40a44]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 42: copy string field @ param_1+0x5f8 */
        mov     ecx, dword ptr [ebp + 0x8]
        lea     edi, [ecx + 0x5f8]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [g_007dd268]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [eax + 0x40a48]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 43: return [param_1+0x6c] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x6c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 44: return [param_1+0x70] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x70]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 45: return [param_1+0x80] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x80]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 46: return [param_1+0x1c] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x1c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 47: return [param_1+0x74] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x74]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 48: return [param_1+0x78] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x78]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 49: return [param_1+0x7c] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x7c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 50: copy string field @ param_1+0x6f8 */
        mov     edx, dword ptr [ebp + 0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [edx + 0x6f8]
        mov     edx, dword ptr [g_007dd268]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [edx + 0x40974]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 51: return [param_1+0xa8] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0xa8]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 52: return [param_1+0xac] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0xac]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 53: return [param_1+0xa4] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0xa4]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 54: return [param_1+0xb0] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0xb0]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 55: return [param_1+0xb4] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0xb4]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 56: return [param_1+0xb8] */
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0xb8]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 57: return [param_1+0xe4] */
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0xe4]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 58: return [param_1+0xe8] */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0xe8]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 59: copy string field @ param_1+0x8f8 */
        mov     edx, dword ptr [ebp + 0x8]
        mov     al, byte ptr [edx + 0x8f8]
        test    al, al
        lea     ebx, [edx + 0x8f8]
        jz      L_38a2
        mov     esi, dword ptr [ecx + 0x4]
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_371c
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0x0
L_371c:
        push    0x0
        push    0x400
        call    FUN_006f3c80
        mov     edi, eax
        xor     eax, eax
        mov     dword ptr [esi], edi
        mov     ecx, 0x100
        rep     stosd
        mov     eax, dword ptr [esi]
        push    ebx
        push    eax
        call    dword ptr [g_0076b410]
        add     esp, 0x8
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 60: nested sub-switch on *param_3[2] */
        mov     edx, dword ptr [ecx + 0x4]
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [ecx + 0x8]
        mov     edx, dword ptr [edx]
        dec     edx
        cmp     edx, 0xc
        ja      L_3a02
        jmp     dword ptr [edx*4 + g_jt_513b18]

        /* sub-case 1: return [eax*0x50 + param_1 + 0xec] */
        mov     ecx, dword ptr [ebp + 0x8]
        lea     eax, [eax + eax*4]
        pop     edi
        shl     eax, 0x4
        mov     eax, dword ptr [eax + ecx + 0xec]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* sub-case 2: return [(eax*5+0xf)*0x10 + param_1] */
        lea     edx, [eax + eax*4 + 0xf]
        mov     eax, dword ptr [ebp + 0x8]
        pop     edi
        shl     edx, 0x4
        mov     eax, dword ptr [edx + eax]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* sub-case 3: return [eax*0x50 + param_1 + 0xf4] */
        mov     edx, dword ptr [ebp + 0x8]
        lea     ecx, [eax + eax*4]
        pop     edi
        shl     ecx, 0x4
        mov     eax, dword ptr [ecx + edx + 0xf4]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* sub-case 11: return [eax*0x50 + param_1 + 0xf8] */
        mov     ecx, dword ptr [ebp + 0x8]
        lea     eax, [eax + eax*4]
        pop     edi
        shl     eax, 0x4
        mov     eax, dword ptr [eax + ecx + 0xf8]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* sub-case 12: return [eax*0x50 + param_1 + 0x100] */
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        pop     edi
        shl     edx, 0x4
        mov     eax, dword ptr [edx + eax + 0x100]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* sub-case 13: return [eax*0x50 + param_1 + 0x104] */
        mov     edx, dword ptr [ebp + 0x8]
        lea     ecx, [eax + eax*4]
        pop     edi
        shl     ecx, 0x4
        mov     eax, dword ptr [ecx + edx + 0x104]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* sub-case 4: search tile list for matching byte */
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [g_007dab40]
        lea     eax, [eax + eax*4]
        shl     eax, 0x4
        mov     dl, byte ptr [eax + ecx + 0x10c]
        mov     eax, dword ptr [g_007dab44]
        mov     esi, dword ptr [eax]
        push    0x14
        mov     byte ptr [ebp + 0xb], dl
        xor     ebx, ebx
        xor     esi, edi
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_3854
        mov     ecx, dword ptr [esi + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x94]
        add     edx, 0x10
        push    edx
        mov     ecx, edi
        call    FUN_00416bc0
        mov     dword ptr [edi], 0x779cdc
        jmp     L_3856
L_3854:
        xor     edi, edi
L_3856:
        mov     ecx, edi
        call    FUN_00416cc0
        test    eax, eax
        jz      L_3896
L_3861:
        mov     esi, dword ptr [eax + 0x1c]
        test    esi, esi
        jz      L_3883
        mov     dl, byte ptr [esi - 0x1]
        lea     eax, [esi - 0x1]
        inc     dl
        mov     cl, dl
        dec     cl
        mov     byte ptr [eax], dl
        mov     byte ptr [eax], cl
        jnz     L_3883
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_3883:
        mov     al, byte ptr [ebp + 0xb]
        cmp     al, byte ptr [esi]
        jz      L_38ad
        mov     ecx, edi
        inc     ebx
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_3861
L_3896:
        test    edi, edi
        jz      L_38a2
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
L_38a2:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_38ad:
        test    edi, edi
        jz      L_38b9
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
L_38b9:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* sub-case 5: return [eax*0x50 + param_1 + 0x110] */
        mov     edx, dword ptr [ebp + 0x8]
        lea     ecx, [eax + eax*4]
        pop     edi
        shl     ecx, 0x4
        mov     eax, dword ptr [ecx + edx + 0x110]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* sub-case 6: bit test [eax*0x50+param_1+0x114] or +0x118 */
        mov     ecx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx]
        cmp     ecx, 0x20
        jl      L_38ff
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        sub     ecx, 0x20
        shl     edx, 0x4
        lea     edx, [edx + eax + 0x118]
        jmp     L_39e8
L_38ff:
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        shl     edx, 0x4
        lea     edx, [edx + eax + 0x114]
        jmp     L_39e8

        /* sub-case 7: bit test [eax*0x50+param_1+0x11c] or +0x120 */
        mov     ecx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx]
        cmp     ecx, 0x20
        jl      L_3936
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        sub     ecx, 0x20
        shl     edx, 0x4
        lea     edx, [edx + eax + 0x120]
        jmp     L_39e8
L_3936:
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        shl     edx, 0x4
        lea     edx, [edx + eax + 0x11c]
        jmp     L_39e8

        /* sub-case 8: bit test [eax*0x50+param_1+0x124] or +0x128 */
        mov     ecx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx]
        sub     ecx, 0x33
        cmp     ecx, 0x20
        jl      L_396d
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        sub     ecx, 0x20
        shl     edx, 0x4
        lea     edx, [edx + eax + 0x128]
        jmp     L_39e8
L_396d:
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        shl     edx, 0x4
        lea     edx, [edx + eax + 0x124]
        jmp     L_39e8

        /* sub-case 9: bit test [eax*0x50+param_1+0x12c] or +0x130 */
        mov     ecx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx]
        sub     ecx, 0x64
        cmp     ecx, 0x20
        jl      L_39a1
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        sub     ecx, 0x20
        shl     edx, 0x4
        lea     edx, [edx + eax + 0x130]
        jmp     L_39e8
L_39a1:
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        shl     edx, 0x4
        lea     edx, [edx + eax + 0x12c]
        jmp     L_39e8

        /* sub-case 10: bit test [eax*0x50+param_1+0x134] or +0x138 */
        mov     ecx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx]
        sub     ecx, 0x83
        cmp     ecx, 0x20
        jl      L_39d8
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        sub     ecx, 0x20
        shl     edx, 0x4
        lea     edx, [edx + eax + 0x138]
        jmp     L_39e8
L_39d8:
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        shl     edx, 0x4
        lea     edx, [edx + eax + 0x134]
        /* fall through into common bit-test tail */

        /* common bit-test tail */
L_39e8:
        mov     esi, dword ptr [edx]
        mov     eax, 0x1
        shl     eax, cl
        pop     edi
        and     eax, esi
        neg     eax
        sbb     eax, eax
        pop     esi
        neg     eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* default: assert "UNKOWN TEAM PARAMETER TYPE" */
L_3a02:
        push    0x779adc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_3a14
        int     3
L_3a14:
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
